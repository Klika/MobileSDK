//
//  SREventGoalCanceled.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

/**
 * Goal canceled event with reason why it was canceled
 */
@interface SREventGoalCanceled : SREvent

/**
 * Localized reason why goal was canceled
 */
@property (nonatomic,readonly) NSString *reason;

/**
 * Reason id
 */
@property (nonatomic,readonly) int reasonId;


@end
