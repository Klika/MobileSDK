//
//  SRPlayerPosition.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstPlayerDefaultPosition.h"
#import "SRObject.h"
	
/**
 * Represents player's playing position.
 */
@interface SRPlayerPosition : SRObject {
}

/**
 * Player's default playing position.
 * @see SRConstPlayerDefaultPosition.h for available positions
 */
@property (nonatomic,readonly) SRConstPlayerDefaultPosition defaultPosition;

/**
 * Localized name of the player's default position.
 * 
 * In soccer, this would be similar to "Goalkeeper", "Defender", "Midfielder", "Striker".
 */
@property (nonatomic,readonly) NSString* defaultPositionName;

/**
 * Position short name.
 */
@property (nonatomic,readonly) NSString* positionShortname;


@end

