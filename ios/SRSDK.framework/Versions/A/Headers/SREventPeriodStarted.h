//
//  SREventPeriodStarted.h
//  SRSDK
//
//  Created by Jure Zemljic on 07/04/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

@interface SREventPeriodStarted : SREvent

/**
 * Starting period.
 */
@property (nonatomic,readonly) int period;


@end
