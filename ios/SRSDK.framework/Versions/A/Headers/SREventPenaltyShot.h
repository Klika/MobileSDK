//
//  SREventPenaltyShot.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//

#import "SREvent.h"

@interface SREventPenaltyShot : SREvent

/**
 * Number of the penalty shot in the sequence.
 */
@property (nonatomic,readonly) int number;

/**
 * Was penalty shot successful or not.
 */
@property (nonatomic,readonly) BOOL goalScored;

/**
 * Which player scored. Can be nil.
 */
@property (nonatomic,readonly) SRPlayer* scorer;

/**
 * What's the current score of a match.
 */
@property (nonatomic,readonly) SRMatchScore *result;


@end
