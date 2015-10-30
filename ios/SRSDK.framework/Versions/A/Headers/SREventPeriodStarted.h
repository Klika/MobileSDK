//
//  SREventPeriodStarted.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

@interface SREventPeriodStarted : SREvent

/**
 * Starting period.
 */
@property (nonatomic,readonly) int period;

/**
* Is this period start event a break
*/
@property (nonatomic,readonly) BOOL isBreak;


@end
