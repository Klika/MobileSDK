//
//  SRMatchSuspensible.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatch.h"

@interface SRMatchSuspensible : SRMatch

/**
 * Array of active suspensions. Suspension remaining time is automatically updated.
 * @see SRTeamSuspension
 */
- (NSArray *)activeSuspensions;


@end

