//
//  SRBackendManager.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRNotificationSubscribable.h"
#import "SRSocialLoginProvider.h"
#import "SRMatch.h"
#import "SRConstPrediction.h"
#import "SRBackendManager.h"
#import "SRNotificationsMuteStatus.h"

typedef void (^SRDeviceTokenBlock)(NSError* error);
typedef void (^SRModelNotificationLevelBlock)(id<SRNotificationSubscribable> model, NSArray *eventTypes, NSError* error);
typedef void (^SROperationBlock)(BOOL success, NSError* error);
typedef void (^SRModelIdsBlock)(NSArray *ids, NSError* error);
typedef void (^SRPropertyOperationBlock)(NSString *property, id value, BOOL success, NSError* error);
typedef void (^SRNotificationsMuteStatusBlock)(SRNotificationsMuteStatus* notificationsMuteStatus, BOOL success, NSError* error);

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

#pragma mark - Notifications section

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

#pragma mark - Notifications mute section

/**
 * Mute notifications for a specific user. If notification mute period already exists, it will be replaced.
 * @param fromDate If nil, the current date will be used
 * @param toDate If nil, the notifications will be muted until unmuted
 * @param callback Callback, triggered when operation finishes
 */
- (void)muteNotificationsFromDate:(NSDate*)fromDate toDate:(NSDate*)toDate withCallback:(SROperationBlock)callback;

/**
 * Mute notifications for a specific user for a specific match. The notifications will be muted until unmuted.
 * @param match Target match
 * @param callback Callback, triggered when operation finishes
 */
- (void)muteNotificationsForMatch:(SRMatch*)match withCallback:(SROperationBlock)callback;

/**
 * Unmute notifications for a specific user.
 * @param callback Callback, triggered when operation finishes
 */
- (void)unmuteNotifications:(SROperationBlock)callback;

/**
 * Unmute notifications for a specific user for a specific match.
 * @param match Target match
 * @param callback Callback, triggered when operation finishes
 */
- (void)unmuteNotificationsForMatch:(SRMatch*)match withCallback:(SROperationBlock)callback;

/**
 * Get notifications mute settings for a specific user.
 * @param callback Callback, triggered when operation finishes
 */
- (void)getNotificationsMute:(SRNotificationsMuteStatusBlock)callback;

#pragma mark - Favourites section

/**
 * Add model object to favourites.
 * @param model Subscribable model
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)addToFavourites:(id<SRNotificationSubscribable>)model withCompletion:(SROperationBlock)completionBlock;

/**
 * Add match id to favourites.
 * @param matchId Match id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)addMatchToFavourites:(int)matchId withCompletion:(SROperationBlock)completionBlock;

/**
 * Add tournament id to favourites.
 * @param tournamentId Tournament id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)addTournamentToFavourites:(int)tournamentId withCompletion:(SROperationBlock)completionBlock;

/**
 * Add team id to favourites.
 * @param tournamentId Tournament id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)addTeamToFavourites:(int)teamId withCompletion:(SROperationBlock)completionBlock;

/**
 * Remove model object to favourites.
 * @param model Subscribable model
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)removeFromFavourites:(id<SRNotificationSubscribable>)model withCompletion:(SROperationBlock)completionBlock;

/**
 * Remove match id from favourites.
 * @param matchId Match id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)removeMatchFromFavourites:(int)matchId withCompletion:(SROperationBlock)completionBlock;

/**
 * Remove tournament id from favourites.
 * @param tournamentId Tournament id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)removeTournamentFromFavourites:(int)tournamentId withCompletion:(SROperationBlock)completionBlock;

/**
 * Remove team id from favourites.
 * @param tournamentId Tournament id
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)removeTeamFromFavourites:(int)teamId withCompletion:(SROperationBlock)completionBlock;

/**
 * Get favourite match ids.
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)getFavouriteMatches:(SRModelIdsBlock)completionBlock;

/**
 * Get favourite tournament ids.
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)getFavouriteTournaments:(SRModelIdsBlock)completionBlock;

/**
 * Get favourite team ids.
 * @param completionBlock Callback, triggered when operation finishes
 */
- (void)getFavouriteTeams:(SRModelIdsBlock)completionBlock;


#pragma mark - Virtual stadium section

/**
 * Get fans for a specific match.
 */
- (void)getFansForMatch:(SRMatch*)match callback:(void(^)(SRMatch* match, int team1Fans, int team2Fans, SRTeamBase* currentUserFanTeam,  NSError *error))completionBlock;

/**
 * Set fan for match
 */
- (void)setFanForMatch:(SRMatch*)match team:(SRTeamBase *)team callback:(SROperationBlock)completionBlock;

/**
 * Remove a fan from a match.
 */
- (void)removeFanFromMatch:(SRMatch*)match callback:(SROperationBlock)completionBlock;

/**
 * Get player ratings for matchId. Rating values are between 1 and 5.
 */
- (void)getPlayerRatingsForMatch:(SRMatch*)match callback:(void(^)(SRMatch* match, NSArray* ratings, NSArray* userRatings, NSError *error))completionBlock;

/**
 * Set player rating for match. Value of rating should be between 1 and 5. If the value outside boundaries the closest one is used.
 */
- (void)setPlayerRatingForMatch:(SRMatch*)match player:(SRPlayer *)player rating:(int)rating callback:(SROperationBlock)completionBlock;

/**
 * Remove player rating from match
 */
- (void)removePlayerRatingForMatch:(SRMatch*)match player:(SRPlayer*)player callback:(SROperationBlock)completionBlock;

/**
 * Get men of the match for matchId
 */
- (void)getPlayersOfTheMatch:(SRMatch*)match callback:(void(^)(SRMatch* match, NSArray* playersOfTheMatch, int usersPlayerOfTheMatch, NSError *error))completionBlock;

/**
 * Set man of the match
 */
- (void)setPlayerOfTheMatch:(SRMatch *)match player:(SRPlayer *)player callback:(SROperationBlock)completionBlock;

/**
 * Remove man of the match
 */
- (void)removePlayerOfTheMatch:(SRMatch*)match player:(SRPlayer*)player callback:(SROperationBlock)completionBlock;

/**
 * Get predictions for a specific match
 */
- (void)getPredictionsForMatch:(SRMatch*)match callback:(void(^)(SRMatch* match, NSDictionary* predictions, SRConstPrediction userPrediction, NSError *error))completionBlock;

/**
 * Set prediction for match
 */
- (void)setPredictionForMatch:(SRMatch*)match prediction:(SRConstPrediction)prediction callback:(SROperationBlock)completionBlock;

/**
 * Remove prediction from match
 */
- (void)removePredictionForMatch:(SRMatch *)match callback:(SROperationBlock)completionBlock;

/**
 * Get cheering for a specific match
 */
- (void)getCheeringForMatch:(SRMatch*)match callback:(void(^)(SRMatch* match, int team1Cheering, int team2Cheering, NSError *error))completionBlock;

/**
 *  Insert cheer for match
 */
- (void)insertCheeringForMatch:(SRMatch*)match team:(SRTeamBase*)team callback:(SROperationBlock)completionBlock;

@end
