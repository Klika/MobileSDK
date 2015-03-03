//
//  SREventSoccerMatchSituation.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SREventSoccer.h"
#import "SRMatchSituation.h"

/**
 * Event containing match situation. 
 * @see SRMatchSituation
 */
@interface SREventSoccerMatchSituation : SREventSoccer {
}

/**
 * Situation details.
 */
@property (nonatomic,readonly) SRMatchSituation* situation;


@end

