//
//  SREventScoreAttemptMissed.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstEventFlag.h"
#import "SREvent.h"

/**
 * Score Attempt Missed event (Basketball)
 */
@interface SREventScoreAttemptMissed : SREvent

/**
 * How many points would a successful attempt score. In most cases value is 1, except for example in basketball match.
 */
@property (nonatomic,readonly) int points;


@end

