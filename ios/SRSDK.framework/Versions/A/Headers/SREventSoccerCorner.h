//
//  SREventSoccerCorner.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRSoccerCornerSide.h"
#import "SREventSoccer.h"

/**
 * Soccer corner event.
 */
@interface SREventSoccerCorner :SREventSoccer

/**
 * For which side corner is for.
 */
@property (nonatomic,readonly) SRSoccerCornerSide*  side;



@end

