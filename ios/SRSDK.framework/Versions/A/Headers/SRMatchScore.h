//
//  SRMatchScore.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstMatchScoreTypes.h"
#import "SRObject.h"

/**
 * Representing the score of the match.
 */
@interface SRMatchScore : SRObject

/**
 * Match period this score has been updated in.
 * @see SRConstMatchScoreTypes.h
 */
@property (nonatomic,readonly) SRConstMatchScoreTypes scoreType;

/**
 * Score of the home/first team. Represented in float value for sprots with fraction scoring.
 */
@property (nonatomic,readonly) float team1;

/**
 * Score of the home/first team.
 */
@property (nonatomic,readonly) int team1Int;

/**
 * Score of the away/second team. Represented in float value for sprots with fraction scoring.
 */
@property (nonatomic,readonly) float team2;

/**
 * Score of the away/second team.
 */
@property (nonatomic,readonly) int team2Int;


@end

