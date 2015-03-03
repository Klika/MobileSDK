//
//  SREventSoccerBallCoordinate.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SREventSoccer.h"

/**
 * Event which holds ball coordinates.
 */
@interface SREventSoccerBallCoordinate : SREventSoccer {
}

/**
 * Array of ball position coordinates.
 * @see SRSoccerBallPosition
 */
@property (nonatomic,readonly) NSArray* coordinates;


@end

