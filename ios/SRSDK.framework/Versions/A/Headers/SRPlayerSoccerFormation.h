//
//  SRPlayerSoccerFormation.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayerSoccer.h"
#import "SRConstPlayerCurrentPosition.h"
#import "SRObject.h"

@class SRPlayerSoccer;
	
/**
 * Represents player's information regarding it's place in the team formation.
 * 
 * In soccer for instance, this object contains data for building a lineup.
 */
@interface SRPlayerSoccerFormation : SRObject {
}

/**
 * Soccer specific player.
 */
@property (nonatomic,readonly) SRPlayerSoccer*  player;

/**
 * Order in which the players in the lineup should be sorted.
 * 
 * In soccer for example, an ascending sort would result in the goalkeeper being the first, followed by the defense players up to the forward players (strikers).
 */
@property (nonatomic,readonly) int order;

/**
 * Player's number on the shirt.
 */
@property (nonatomic,readonly) int shirtNumber;

/**
 * Player's playing position in current match formation.
 * @see SRConstPlayerCurrentPosition.h
 */
@property (nonatomic,readonly) SRConstPlayerCurrentPosition currentPosition;

/**
 * Localized name of the player's position.
 * In soccer, this would be similar to "Goalkeeper", "Defender", "Midfielder", "Striker".
 */
@property (nonatomic,readonly) NSString* currentPositionName;


@end

