//
//  SRBettingManager.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRMatch.h"
#import "SRBetBookmaker.h"
#import "SRBetTicket.h"
#import "SRConstBetAcceptableOddsChanges.h"

typedef void (^SRBettingLoginBlock)(NSArray *balances, NSError *error);
typedef void (^SRBettingRequestBlock)(NSArray *responseArray, int timestamp, NSError *error);
typedef void (^SRBettingTicketPlacmentBlock)(SRBetTicket *ticket, NSError *error);

@interface SRBettingManager : NSObject

@property (nonatomic, readonly) NSString *appKey;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *accessToken;
@property (nonatomic, readonly) SRBetBookmaker *bookmaker;
@property (nonatomic, readonly) NSArray *balances;
@property (nonatomic, readonly) NSArray *tickets;

+ (SRBettingManager *)sharedInstance;

/**
 * Login with access token.
 */
- (void)login:(NSString *)accessToken callback:(SRBettingLoginBlock)callback;

/**
 * Get array of markets for a match.
 */
- (void)getMarketsForMatch:(SRMatch *)match callback:(SRBettingRequestBlock)callback;

/**
 * Get array of market updates for a match. Response will contain only market changes since last update.
 */
- (void)getMarketUpdatesForMatch:(SRMatch *)match lastUpdate:(int)timestamp callback:(SRBettingRequestBlock)callback;

/**
 * Get array of placed tickets for current user.
* @see SRBetTicket
 */
- (void)getPlacedTickets:(SRBettingRequestBlock)callback;

/**
 * Place ticket with array of selections on markets.
 * @see SRBetMarketSelection
 */
- (void)placeTicket:(NSArray *)selections betType:(SRConstBetType)betType stakeType:(SRConstBetTicketStakeType)stakeType stake:(float)betStake currency:(NSString *)currency acceptableChanges:(SRConstBetAcceptableOddsChanges)acceptableChanges callback:(SRBettingTicketPlacmentBlock)callback;

/**
 * Calculate ticket with array of selections on markets. Calculate ticket can be performed before user is logged in.
 * @see SRBetMarketSelection
 */
- (void)calculateTicket:(NSArray *)selections betType:(SRConstBetType)betType stakeType:(SRConstBetTicketStakeType)stakeType stake:(float)betStake currency:(NSString *)currency acceptableChanges:(SRConstBetAcceptableOddsChanges)acceptableChanges callback:(SRBettingTicketPlacmentBlock)callback;


@end
