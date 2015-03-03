//
//  SRBallPosition.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

/**
 * Represents an incremental ball position.
 */
@interface SRBallPosition : SRObject {
}

/**
 * Team that was in possession of the ball at the time the coordinates were recorded.
 */
@property (nonatomic,readonly) NSString* team;

/**
 * X coordinate of the ball.
 */
@property (nonatomic,readonly) int posX;

/**
 * Y coordinate of the ball.
 */
@property (nonatomic,readonly) int posY;

/**
 * A boolean determining whether this ball position is new compared to the ones already stored in <SRMatchManager> ballPositionStore property.
 */
@property (nonatomic,readonly) BOOL newPosition;


@end

