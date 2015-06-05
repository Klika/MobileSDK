//
//  SRSeason.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

/**
 * Represents the unique season for tournamets or player statistics.
 */
@interface SRSeason : SRObject 

/**
 * Season unique id.
 */
@property (nonatomic,readonly) int seasonId;

/**
 * Localized season name.
 */
@property (nonatomic,readonly) NSString* seasonName;

/**
 * Season's start date.
 */
@property (nonatomic,readonly) NSDate* startDate;

/**
 * Season's end date.
 */
@property (nonatomic,readonly) NSDate* endDate;


@end

