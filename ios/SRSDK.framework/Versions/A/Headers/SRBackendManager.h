//
//  SRBackendManager.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRNotificationSubscribable.h"
#import "SRSocialLoginProvider.h"

typedef void (^SRDeviceTokenBlock)(NSError* error);
typedef void (^SRModelNotificationLevelBlock)(id<SRNotificationSubscribable> model, NSArray *eventTypes, NSError* error);
typedef void (^SROperationBlock)(BOOL success, NSError* error);
typedef void (^SRModelIdsBlock)(NSArray *ids, NSError* error);
typedef void (^SRPropertyOperationBlock)(NSString *property, id value, BOOL success, NSError* error);

@interface SRBackendManager : NSObject

+ (SRBackendManager *)sharedInstance;

/****** User section ******/

/**
 * Login user with service provider.
 * @param loginService Service
 * @param accessToken Access token
 * @param callback Callback when operation completes
 */
-(void)userLogin:(id<SRSocialLoginProvider>)loginProvider andCallback:(SROperationBlock)userLogBlock;

/**
 * Logout user.
 * @param callback Callback when operation completes
 */
-(void)userLogout:(SROperationBlock)userLogBlock;

/**
 * Checks if user was already logged in with a service.
 * @return true if already logged in
 */
-(BOOL)isUserLoggedIn;

/**
 * Returns the user's access token
 */
-(NSString *)getInstallationId;

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
- (void)subscribe:(id<SRNotificationSubscribable>)model withEventTypes:(NSArray *)eventTypes withCompletion:(SRModelNotificationLevelBlock)completionBlock;

/**
 * Unsubscribe to push notifications for model. Return status can be provided with success or error callback.
 */
- (void)unsubscribe:(id<SRNotificationSubscribable>)model withCompletion:(SRModelNotificationLevelBlock)completionBlock;

/**
 * Get all available event types for model.
 * @see SRConstEventTypes
 */
- (NSArray *)getAvailableEventsTypes:(id<SRNotificationSubscribable>)model;

/**
 * Get array of subscribed event types for a model.
 * @see SRConstEventTypes
 */
- (NSArray *)getSubscriptionTypes:(id<SRNotificationSubscribable>)model;

/****** Favourites section ******/

- (void)addToFavourites:(id<SRNotificationSubscribable>)model withComletition:(SROperationBlock)completionBlock;

/**
 * Remove model object to favourites.
 * @param model Subscribable model
 * @param callback Callback, triggered when operation finishes
 */
- (void)removeFromFavourites:(id<SRNotificationSubscribable>)model withComletition:(SROperationBlock)completionBlock;

/**
 * Get favourite match ids.
 * @param callback Callback, triggered when operation finishes
 */
- (void)getFavouriteMatches:(SRModelIdsBlock)completionBlock;

/**
 * Get favourite tournament ids.
 * @param callback Callback, triggered when operation finishes
 */
- (void)getFavouriteTournaments:(SRModelIdsBlock)completionBlock;

/**
 * Get favourite team ids.
 * @param callback Callback, triggered when operation finishes
 */
- (void)getFavouriteTeams:(SRModelIdsBlock)completionBlock;

@end
