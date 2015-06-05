//
//  SRSoccerBallPosition.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRTeamSoccer.h"
#import "SRMatch.h"
#import "SRObject.h"

/**
 * Represents ball position in a soccer match. Meaningful only for live matches.
 */
@interface SRSoccerBallPosition : SRObject

/**
 * X coordinate of the ball.
 */
@property (nonatomic,readonly) int posX;

/**
 * Y coordinate of the ball.
 */
@property (nonatomic,readonly) int posY;

/**
 * Team that was in possession of the ball at the time the coordinates were recorded.
 */
@property (nonatomic,readonly) SRTeamSoccer*  team;

/**
 * A boolean determining whether this ball position is new compared to the ones already stored in <SRMatchManager> ballPositionStore property.
 */
@property (nonatomic,readonly) BOOL newPosition;

/**
 * Played match.
 */
@property (nonatomic,readonly) SRMatch*  match;


@end

