//
//  SRMatchPeriod.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRMatchScore.h"

/**
 * Represents match period. Different sports have different length of periods. Some sports also have overtime periods.
 */
@interface SRMatchPeriod : SRObject

/**
 * Score of a match period.
 */
@property (nonatomic, strong) SRMatchScore *score;

/**
 * Period length. Sport specific.
 */
@property (nonatomic, readonly) int periodLength;

/**
 * Type of a period.
 * @see SRConstMatchStatuses.h
 */
@property (nonatomic, readonly) SRConstMatchStatuses periodType;


@end
