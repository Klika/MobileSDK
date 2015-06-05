//
//  SRSoccerCardCount.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"

/**
 * Number of cards.
 */
@interface SRSoccerCardCount : SRObject

/**
 * Number of red cards.
 */
@property (nonatomic, assign) int redCount;

/**
 * Number of yellow cards.
 */
@property (nonatomic, assign) int yellowCount;


@end
