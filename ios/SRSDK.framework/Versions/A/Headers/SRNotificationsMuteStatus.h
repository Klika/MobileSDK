//
//  SRNotificationsMuteStatus.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRMatch.h"

@interface SRNotificationsMuteStatus : SRObject

/**
 * Period start where all notifications are muted. If nil, notifications are not muted.
 */
@property (nonatomic, readonly) NSDate *allMutedFromDate;

/**
 * Period end where all notifications are muted. If nil, notifications will be muted until unmuted
 */
@property (nonatomic, readonly) NSDate *allMutedToDate;

/**
 * List of muted matches
 */
@property (nonatomic, readonly) NSArray *mutedMatches;

@end

