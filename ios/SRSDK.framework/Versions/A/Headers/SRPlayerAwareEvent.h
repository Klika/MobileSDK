//
//  SRPlayerAwareEvent.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Protocol/event holds information about players.
 */
@protocol SRPlayerAwareEvent <NSObject>

-(NSArray *)getPlayers;

@end
