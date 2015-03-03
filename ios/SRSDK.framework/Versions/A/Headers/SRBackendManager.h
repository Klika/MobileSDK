//
//  SRBackendManager.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRConstNotificationLevel.h"
#import "SRNotificationSubscribable.h"
#import "SRSocialLoginProvider.h"

typedef void (^SRDeviceTokenBlock)(NSError* error);
typedef void (^SRModelNotificationLevelBlock)(id<SRNotificationSubscribable>, SRConstNotificationLevel level, NSError* error);
typedef void (^SRUserLogBlock)(BOOL success, NSError* error);
typedef void (^SRPropertyOperationBlock)(NSString *property, id value, BOOL success, NSError* error);

@interface SRBackendManager : NSObject {
    NSString *_appKey;
    NSString *_accessToken;
    NSString *_installationId;
    BOOL _deviceTokenInstalled;
    BOOL _deviceTokenExpired;
    NSMutableArray *_filteredSports;
    NSMutableArray *_filteredCategories;
    NSMutableArray *_filteredTournaments;
}

+ (SRBackendManager *)sharedInstance;

/****** User section ******/

/**
 * Login user with service provider.
 * @param loginService Service
 * @param accessToken Access token
 * @param callback Callback when operation completes
 */
-(void)userLogin:(id<SRSocialLoginProvider>)loginProvider andCallback:(SRUserLogBlock)userLogBlock;

/**
 * Logout user.
 * @param callback Callback when operation completes
 */
-(void)userLogout:(SRUserLogBlock)userLogBlock;

/**
 * Checks if user was already logged in with a service.
 * @return true if already logged in
 */
-(BOOL)isUserLoggedIn;

/**
 * Returns the user's access token
 */
-(NSString *)getAccessToken;

/****** Properties section ******/

/**
 * Get set of available properties in the backend storage.
 * @return Set of properties
 */
-(NSSet *)getProperties;

/**
 * Get integer property from backend storage.
 * @param property Property name
 * @return Property value or null if property doesn't exist or if there is read error
 */
-(void)getIntValue:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/**
 * Get double property from backend storage.
 * @param property Property name
 * @return Property value or null if property doesn't exist or if there is read error
 */
-(void)getDoubleValue:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/**
 * Get string property from backend storage.
 * @param property Property name
 * @return Property value or null if property doesn't exist or if there is read error
 */
-(void)getStringValue:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/**
 * Get dictionary from backend storage.
 * @param property Property name
 * @return Property value or null if property doesn't exist or if there is read error
 */
-(void)getDictionary:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/**
 * Get array from backend storage.
 * @param property Property name
 * @return Property value or null if property doesn't exist or if there is read error
 */
-(void)getArray:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/**
 * Store integer property value to backend storage.
 * @param property Name of the property
 * @param value Property value
 * @param callback Callback when operation finishes
 */
-(void)putIntValue:(NSString *)property withValue:(int)value withCallback:(SRPropertyOperationBlock)callback;

/**
 * Store double property value to backend storage.
 * @param property Name of the property
 * @param value Property value
 * @param callback Callback when operation finishes
 */
-(void)putDoubleValue:(NSString *)property withValue:(double)value withCallback:(SRPropertyOperationBlock)callback;

/**
 * Store string property value to backend storage.
 * @param property Name of the property
 * @param value Property value
 * @param callback Callback when operation finishes
 */
-(void)putStringValue:(NSString *)property withValue:(NSString *)value withCallback:(SRPropertyOperationBlock)callback;

/**
 * Store dictionary to backend storage. This method call will fail if dictionary can't be converted to JSON, check with [NSJSONSerialization isValidJSONObject:dict]
 * @param property Name of the property
 * @param value Property value
 * @param callback Callback when operation finishes
 */
-(void)putDictionary:(NSString *)property withValue:(NSDictionary *)value withCallback:(SRPropertyOperationBlock)callback;

/**
 * Store array to backend storage. This method call will fail if array can't be converted to JSON, check with [NSJSONSerialization isValidJSONObject:array]
 * @param property Name of the property
 * @param value Property value
 * @param callback Callback when operation finishes
 */
-(void)putArray:(NSString *)property withValue:(NSArray *)value withCallback:(SRPropertyOperationBlock)callback;

/**
 * Remove property from backend storage.
 * @param property Name of the property
 * @param callback Callback when operation finishes
 */
-(void)removeProperty:(NSString *)property withCallback:(SRPropertyOperationBlock)callback;

/****** Notifications section ******/

/**
 * Are push notifications enabled for this device. Will return true, if user allowed notifications and setupDeviceToken was called.
 */
- (BOOL)deviceTokenInstalled;

/**
 * Sets up device token for push notificiations. For notifications to work, this method must be called inside you AppDelegate->didRegisterForRemoteNotificationsWithDeviceToken.
 */
- (void)setupDeviceToken:(NSData *)deviceToken withCompletion:(SRDeviceTokenBlock)completionBlock;

/**
 * Subscribe to push notifications for model. Return status can be provided with success or error callback.
 * @see SRConstNotificationLevel.h
 */
- (void)subscribe:(id<SRNotificationSubscribable>)model withLevel:(SRConstNotificationLevel)level withCompletion:(SRModelNotificationLevelBlock)completionBlock;

/**
 * Unsubscribe to push notifications for model. Return status can be provided with success or error callback.
 */
- (void)unsubscribe:(id<SRNotificationSubscribable>)model withCompletion:(SRModelNotificationLevelBlock)completionBlock;

/**
 * Get push notification level for a model.
 */
- (SRConstNotificationLevel)getCurrentLevel:(id<SRNotificationSubscribable>)model;


@end
