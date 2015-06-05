//
//  SRMatchStat.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstStatistics.h"
#import "SRConstMatchStatValueType.h"
#import "SRObject.h"
	
/**
 * Represents one specific statistical information of a match.
 * All available types of statistical data are listed in the SRConstStatistics.h. All statistics values are greater or equal to zero.
 */
@interface SRMatchStat : SRObject

/**
 * Type of statistic data this object represents.
 * @see SRConstStatistics.h for available statisctic types.
 */
@property (nonatomic,readonly) SRConstStatistics type;

/**
 * Type of value.
 * @see SRConstMatchStatValueType.h
 */
@property (nonatomic,readonly) SRConstMatchStatValueType valueType;

/**
 * Localized statistics name.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Value of statistical data for the home team.
 * 
 * Value is always greater or equal to zero.
 */
@property (nonatomic,readonly) int valueTeam1;

/**
 * Value of statistical data for the away team.
 * 
 * Value is always greater or equal to zero.
 */
@property (nonatomic,readonly) int valueTeam2;

/**
 * Stat value in favour of first team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team1StatFor;

/**
 * Stat value against first team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team1StatAgaints;

/**
 * Total stat value for first team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team1StatTotal;

/**
 * Stat value in favour of second team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team2StatFor;

/**
 * Stat value against second team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team2StatAgaints;

/**
 * Total stat value for second team. Provided only for extended statistics.
 */
@property (nonatomic,readonly) int team2StatTotal;


@end

