//
//  SRMatchSoccer.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatchScore.h"
#import "SRConstPitchConditions.h"
#import "SRMatchSituation.h"
#import "SRBallPosition.h"
#import "SRMatch.h"
#import "SRSoccerCardCount.h"

/**
 * Representing soccer specific match details.
 */
@interface SRMatchSoccer : SRMatch {
}

/**
 * Aggregated result for both teams.
 */
@property (nonatomic,readonly) SRMatchScore*  aggregate;

/**
 * Match pitch conditions.
 * @see SRConstPitchConditions.h for available conditions
 */
@property (nonatomic,readonly) SRConstPitchConditions pitchCondition;

/**
 * Current match situation. Only available on live matches.
 */
@property (nonatomic,readonly) SRMatchSituation*  matchSituation;

/**
 * Represents match importance.
 */
@property (nonatomic,readonly) float hotnessFactor;

/**
 * Array of last ball positions.
 * @see SRSoccerBallPosition
 */
@property (nonatomic,readonly) NSArray*  lastBallPositions;

/**
 * Card count for home/first team.
 */
@property (nonatomic,readonly) SRSoccerCardCount*  team1CardsCount;

/**
 * Card count for away/second team.
 */
@property (nonatomic,readonly) SRSoccerCardCount*  team2CardsCount;


@end

