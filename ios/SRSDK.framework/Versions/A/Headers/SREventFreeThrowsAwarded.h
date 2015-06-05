//
//  SREventFreeThrowsAwarded.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import "SREvent.h"

/**
 * Holds number of free throws awarded
 */
@interface SREventFreeThrowsAwarded : SREvent

/**
 * Number of free throws awarded
 */
@property (nonatomic,readonly) int awarded;

@end

