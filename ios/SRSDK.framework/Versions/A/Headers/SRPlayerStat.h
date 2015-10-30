//
//  SRPlayerStat.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRConstPlayerStat.h"
	
/**
 * Represents individual player's statistics throughout his career.
 */
@interface SRPlayerStat : SRObject

/**
 * Get specific stat.
 * @param stat Stat constant
 * @return Stat value or 0 if there is no stat
 */
- (NSUInteger)getStat:(SRConstPlayerStat)stat;

/**
 * Get all available stats. This is based on sport, so there are different stats constants from sport to sport.
 * @return NSDictionary of all available stats for sport, keys are SRConstPlayerStat, value is numeric value
 */
- (NSDictionary *)getAllStats;


@end

