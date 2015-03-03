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
#import "SRConstGameOpportunity.h"
#import "SRTeamTennis.h"


// game point constants
extern const int GAME_POINT_ADVANTAGE;      // game advantage constant
extern const int GAME_POINT_WIN;          // game win constant

/**
 * Represents tennis specific match.
 */
@interface SRMatchTennis : SRMatch {
    BOOL _coverageNeedAdvantage;    // do we need advantage to score point
    
    /*
     _coverageTieBreakType (valid for final set only):
     0: No tiebreak
     1: Tiebreak
     7: Super tiebreak 7
     10: Super tiebreak 10
     */
    int _coverageTieBreakType;
}

/**
 * Which team/player has a service. Compare it with SRMatch team1 to know if it's home team or with team2 for away team.
 */
@property (nonatomic,readonly) SRTeamTennis *serviceTeam;

/**
 * Where does the serving player serve, left or right.
 * @see SRConstGameServicePosition.h
 */
@property (nonatomic,readonly) SRConstGameServicePosition servicePosition;

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


@end

