//
//  SRCup.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"

/**
 * Represents cup roster/cup tree. Only available for certain tournaments.
 */
@interface SRCupRoster : SRObject

@property (nonatomic,readonly) int cupId;

/**
 * Unique tournament id.
 */
@property (nonatomic,readonly) int tournamentId;

/**
 * Localized cup roster name.
 */
@property (nonatomic,readonly) NSString *name;

/**
 * Is currently active.
 */
@property (nonatomic,readonly) BOOL active;

/**
 * Array of cup rounds planned for cup roster.
 * @see SRCupRound
 */
@property (nonatomic,readonly) NSArray *cupRounds;

@end
