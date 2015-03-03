//
//  SRMatchTime.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRObject.h"

/**
 * Parsed match time.
 */
@interface SRMatchTime : SRObject

/**
 * Number of hours match is running.
 */
@property (nonatomic, readonly) int hours;

/**
 * Number of minutes match is running.
 */
@property (nonatomic, readonly) int minutes;

/**
 * Number of seconds match is running.
 */
@property (nonatomic, readonly) int seconds;

/**
 * Number of seconds, match is in injury time.
 */
@property (nonatomic, readonly) int injuryTime;

/**
 * Is this match live and running.
 */
@property (nonatomic, readonly) BOOL isRunning;


@end
