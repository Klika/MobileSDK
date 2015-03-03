//
//  SRMatch.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRTeam.h"
#import "SRMatchScore.h"
#import "SRMatchStatus.h"
#import "SRConstMatchWinner.h"
#import "SRMatchStat.h"
#import "SRConstWeather.h"
#import "SRMatchCommentary.h"
#import "SRStadium.h"
#import "SREvent.h"
#import "SRMatchOdd.h"
#import "SRConstSports.h"
#import "SRConstMatchStatuses.h"
#import "SRObject.h"
#import "SRConstMatchFlags.h"
#import "SRMatchTime.h"
#import "SRMatchPeriod.h"
#import "SRMatchTeamJerseys.h"
#import "SRPlayer.h"
#import "SRNotificationSubscribable.h"
#import "SRMatchLineups.h"
#import "SRMatchRound.h"
#import "SRPointFlowStructure.h"

@class SRSport;
@class SRCategory;
@class SRTournament;
@class SREvent;
@class SRMatchCommentary;
@class SRMatchLineups;

/**
 * Represents single match for any sport.
 */
@interface SRMatch : SRObject <SRNotificationSubscribable> {
    int _coverageLineUp;
    int _coverageFormations;
    int _coverageLiveTable;
    BOOL _coverageDeeperCoverage;
    BOOL _coverageTacticalLineUp;
    BOOL _coverageHasStats;
    int _lastOddsUpdate;
    BOOL _liveMatch;
    SRMatchTime *_matchTimeData;
    long _periodStartTime;
    int _currentPeriodIndex;
}

@property (nonatomic,readonly) int matchId;

@property (nonatomic,readonly) int tournamentId;
@property (nonatomic,readonly) int uniqueTournamentId;
@property (nonatomic,readonly) SRTournament* tournament;

@property (nonatomic,readonly) SRConstSports sportId;
@property (nonatomic,readonly) SRSport* sport;

@property (nonatomic,readonly) int categoryId;
@property (nonatomic,readonly) SRCategory* category;

@property (nonatomic,readonly) int seasonId;

/**
 * Home/first team playing in a match.
 */
@property (nonatomic,readonly) SRTeamBase*  team1;

/**
 * Away/second team playing in a match.
 */
@property (nonatomic,readonly) SRTeamBase*  team2;

/**
 * Value of the round this match is currently in or 0 if rounds are not defined for this match.
 */
@property (nonatomic,readonly) SRMatchRound *round;

/**
 * Number of match spectators in the <stadium>.
 *
 * The maximum number of spectators the stadium can accommodate can be retrieved from SRStadium::capacity.
 */
@property (nonatomic,readonly) int attendance;

/**
 * Indicates whether tactical formation data is available for this match.
 *
 * The tactical formation describes how the players in a team are positioned on the pitch.
 *
 * If tactical formation data is available, you can qery it by calling SRMatchManager::requestMatchLineups.
 */
@property (nonatomic,readonly) BOOL hasTactical;

/**
 * Indicates whether team lineups are available for this match.
 *
 * The lineup in soccer is the categorising of the team's players by their role in the game.
 *
 * If lineups are available, you can query it by calling SRMatchManager::requestMatchLineups.
 */
@property (nonatomic,readonly) BOOL hasLineups;

/**
 * Indicates whether match supports ballspotting events.
 */
@property (nonatomic,readonly) BOOL hasBallspotting;

/**
 * Stadium where the match is hosted.
 */
@property (nonatomic,readonly) SRStadium*  stadium;

/**
 * Main referee of the match.
 */
@property (nonatomic,readonly) SRPlayer*  referee;

/**
 * Player lineups for home/first team.
 */
@property (nonatomic,readonly) SRMatchLineups*  team1Lineups;

/**
 * Player lineups for away/second team.
 */
@property (nonatomic,readonly) SRMatchLineups*  team2Lineups;

/**
 * Actual jersey of home team.
 */
@property (nonatomic,readonly) SRMatchTeamJerseys* homeJerseys;

/**
 * Actual jersey of away team.
 */
@property (nonatomic,readonly) SRMatchTeamJerseys* awayJerseys;

/**
 * Match start date.
 */
@property (nonatomic,readonly) NSDate* matchDate;

/**
 * Score of the match.
 */
@property (nonatomic,readonly) SRMatchScore* result;

/**
 * Array of match periods.
 * @see SRMatchPeriod
 */
@property (nonatomic,readonly) NSArray* periods;

/**
 * Current period of a match. Available only if it's a live match.
 */
@property (nonatomic,readonly) SRMatchPeriod *currentPeriod;

/**
 * Flags specifing what kind of a match is it.
 * @see SRConstMatchFlags.h for available values
 */
@property (nonatomic,readonly) SRConstMatchFlags flags;

/**
 * Current match status.
 */
@property (nonatomic,readonly) SRMatchStatus*  status;

/**
 * Is this a live match.
 */
@property (nonatomic,readonly) BOOL liveMatch;

/**
 * Match play time.
 */
@property (nonatomic,readonly) SRMatchTime* matchTime;

/**
 * Weather information on a match.
 * @see SRConstWeather.h
 */
@property (nonatomic,readonly) SRConstWeather weather;

/**
 * Winning team of a match. This can also be set for a live match and means which team would win if match ends.
 */
@property (nonatomic,readonly) SRTeamBase *winner;

/**
 * Time, when was this match model last updated.
 */
@property (nonatomic,readonly) NSDate*  lastUpdate;

/**
 * Last event which occurred on a match.
 */
@property (nonatomic,readonly) SREvent*  lastEvent;

/**
 * Match statistics, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_STATISTICS.
 * @see SRMatchStat
 */
@property (nonatomic,readonly) NSArray*  teamMatchStatistics;

/**
 * Match period statistics, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_STATISTICS.
 * @see SRMatchStat
 */
@property (nonatomic,readonly) NSDictionary *matchPeriodStatistics;

/**
 * Match commentary, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_COMMENTS.
 */
@property (nonatomic,readonly) SRMatchCommentary*  matchCommentary;

/**
 * Array of match events loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_EVENTS.
 * @see SREvent
 * @see SRConstLoadAdditionalDataType
 */
@property (nonatomic,readonly) NSArray*  events;

/**
 * Dictionary of match events for players loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_EVENTS.
 * @see SREvent
 * @see SRConstLoadAdditionalDataType
 */
@property (nonatomic,readonly) NSDictionary*  playerEvents;

/**
 * Point flow structure, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_EVENTS.
 */
@property (nonatomic,readonly) SRPointFlowStructure *pointFlowStructure;

/**
 * Array of betting markets loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_ODDS.
 * @see SRBetMarket
 */
@property (nonatomic,readonly) NSArray *betMarkets;

/**
 Generate URL to home team crest image.
 @param aBig Is this large sized image, otherwise it's medium sized
 @returns URL to jersey PNG image
 */
-(NSString*) team1CrestURL:(BOOL)aBig;

/**
 Generate URL to away team crest image.
 @param aBig Is this large sized image, otherwise it's medium sized
 @returns URL to jersey PNG image
 */
-(NSString*) team2CrestURL:(BOOL)aBig;

-(void)getHead2HeadModel:(SRLoadHead2HeadDataSuccessCallback)aSuccess aError:(SRErrorCallback)aError;

/**
 * Load match object by match id.
 */
+ (void)findById:(int)matchId success:(SRObjectCallback)success failure:(SRErrorCallback)failure;


@end

