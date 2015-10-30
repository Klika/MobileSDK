//
//  SRMatchCricket.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatchScore.h"
#import "SRConstPitchConditions.h"
#import "SRMatchSituation.h"
#import "SRBallPosition.h"
#import "SRMatch.h"
#import "SRSoccerCardCount.h"
#import "SRCricketScoreDescription.h"

/**
 * Representing cricket specific match details.
 */
@interface SRMatchCricket : SRMatch

/**
 * Match pitch conditions.
 * @see SRConstPitchConditions.h for available conditions
 */
@property (nonatomic,readonly) SRConstPitchConditions pitchCondition;

/**
 * Represents match importance.
 */
@property (nonatomic,readonly) float hotnessFactor;

/**
* Number of runs for home/first team.
*/
@property (nonatomic,readonly) int team1Runs;

/**
* Number of runs for away/second team.
*/
@property (nonatomic,readonly) int team2Runs;

/**
* Number of overs.
*/
@property (nonatomic,readonly) int overs;

/**
* Number of deliveries.
*/
@property (nonatomic,readonly) int delivery;

/**
* Number of dismissals for home/first team.
*/
@property (nonatomic,readonly) int team1Dismissals;

/**
* Number of dismissals for away/second team.
*/
@property (nonatomic,readonly) int team2Dismissals;

/**
* Last team.
*/
@property (nonatomic,readonly) SRTeamBase* lastTeam;

/** Returns cricket score description. */
@property (nonatomic,readonly) SRCricketScoreDescription *scoreDescription;

/** Returns team1 wickets. */
@property (nonatomic,readonly) int team1Wickets;

/** Returns team2 wickets. */
@property (nonatomic,readonly) int team2Wickets;

@end

