//
//  SRMatchRound.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"

@interface SRMatchRound : SRObject

/**
 * Numeric value of round.
 */
@property (nonatomic,readonly) int round;

/**
 * Name of the round.
 */
@property (nonatomic,readonly) NSString* roundName;

/**
 * Short name of the round.
 */
@property (nonatomic,readonly) NSString* roundShortname;


@end
