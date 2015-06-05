//
//  SREventGoalUnderReview.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

/**
 * Goal under review event with reason
 */
@interface SREventGoalUnderReview : SREvent

/**
 * Localized reason
 */
@property (nonatomic,readonly) NSString *reason;


@end
