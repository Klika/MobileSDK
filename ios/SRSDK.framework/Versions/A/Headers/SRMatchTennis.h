//
//  SRMatchTennis.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstGameServicePosition.h"
#import "SRGameScore.h"
#import "SRMatch.h"
#import "SRMatchService.h"
#import "SRConstGameOpportunity.h"
#import "SRTeamTennis.h"


// game point constants
extern const int GAME_POINT_ADVANTAGE;      // game advantage constant
extern const int GAME_POINT_WIN;          // game win constant

/**
 * Represents tennis specific match.
 */
@interface SRMatchTennis : SRMatchService

/**
 * Current game score.
 */
@property (nonatomic,readonly) SRGameScore*  gameScore;

/**
 * Tennis team which has gameFlag.
 * @see SRConstGameFlag.h
 */
@property (nonatomic,readonly) SRTeamTennis *gameOpportunityTeam;

/**
 * Game flag.
 * @see SRConstGameFlag.h
 */
@property (nonatomic,readonly) SRConstGameOpportunity gameOpportunity;

/**
 * Number of game flags.
 * @see SRConstGameFlag.h
 */
@property (nonatomic,readonly) int gameOpportunityCount;

/**
 * Start of break time.
 */
@property (nonatomic,readonly) NSDate *breakTimeStart;

/**
 * Break time duration in seconds.
 */
@property (nonatomic,readonly) int breakTimeDuration;

/**
 * Court information. Provided only for some matches.
 */
@property (nonatomic,readonly) NSString *court;

/**
 * Is match in break time. When break time is expired (duration), NO is returned.
 */
-(BOOL)isBreakTimeInProgress;

/**
 * Does the serving team have second serve.
 * @return true if yes
 */
-(BOOL)isSecondServe;

/**
 * Was tie break played in selected period.
 */
- (BOOL)isTieBreakPeriod:(int)periodIndex;

/**
 * Was/Is final set played in super tie break.
 * @return
 */
- (BOOL)isSuperTieBreakPeriod:(int)periodIndex;

/**
 * Returns true if match/tournament supports tie breaks.
 */
- (BOOL)supportsTieBreaks;

/**
 * If set was finished with tie break we can get tie break score with this method. Available when match events are loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_EVENTS.
 * @return Tie break score for set, or nil if set wasn't finished with tie break.
 */
- (SRGameScore *)getTieBreakScore:(int)periodIndex;


@end

