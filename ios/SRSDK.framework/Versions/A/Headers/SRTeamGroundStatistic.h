//
//  SRGroundStatistic.h
//  SRSDK
//
//  Created by Andraz on 19/02/15.
//  Copyright (c) 2015 Klika d.o.o. All rights reserved.
//

#import "SRObject.h"
@class SRTennisGroundType;

@interface SRTeamGroundStatistic : SRObject

/**
 * Ground type. SRConstTennisGroundType.TENNIS_GROUND_TYPE_UNKNOWN includes statistic for for all surfaces.
 */
@property (nonatomic,readonly) SRTennisGroundType* groundType;

/**
 * Total number of matches played on this ground type.
 */
@property (nonatomic,readonly) int totalMatches;

/**
 * Number of matches won on this ground type.
 */
@property (nonatomic,readonly) int matchesWon;

/**
 * Matches won percentage on this ground type.
 */
@property (nonatomic,readonly) float matchesWonPercentage;

/**
 * Number of matches lost on this ground type.
 */
@property (nonatomic,readonly) int matchesLost;

/**
 * Matches lost percentage on this ground type.
 */
@property (nonatomic,readonly) float matchesLostPercentage;

@end
