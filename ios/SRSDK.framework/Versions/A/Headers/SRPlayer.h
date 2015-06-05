//
//  SRPlayer.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRCountry.h"
#import "SRObject.h"
#import "SRConstPlayerTypes.h"
@class SRPlayerPosition;

/**
 * Represents the basic player information.
 */
@interface SRPlayer : SRObject <NSCopying>

/**
 * The unique id if the player
 */
@property (nonatomic,readonly) int playerId;

/**
 * Type of a player.
 * @see SRConstPlayerTypes.h
 */
@property (nonatomic, readonly) SRConstPlayerTypes type;

/**
 * Information regarding a player's default playing position.
 */
@property (nonatomic,readonly) SRPlayerPosition*  position;

/**
 * Nationality of a player.
 */
@property (nonatomic,readonly) SRCountry*  nationality;

/**
 * In case this player has a dual nationality, this would be his secondary nationality.
 */
@property (nonatomic,readonly) SRCountry*  secondaryNationality;

/**
 * Full name of a player including his name, surname and middle name if any.
 * 
 * The format of full name is: `"lastName, fistName"` or just lastname (`"lastName"`) if first name is not given (in soccer this is typically for Brazilian players).
 */
@property (nonatomic,readonly) NSString* fullname;

/**
 * Birth date of a player.
 */
@property (nonatomic,readonly) NSDate* birthDate;

/**
 * Height of a player.
 */
@property (nonatomic,readonly) int height;

/**
 * Weight of a player.
 */
@property (nonatomic,readonly) int weight;

/**
 * Represents player shirt number info. Provided only in some responses, for example SRTeam->loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_SQUAD. For shirt number in teams use loadAddtitionalData->SR_LOAD_ADDITIONAL_DATA_PLAYER_INFO and read info from playerRoles property.
 */
@property (nonatomic,readonly) int shirtNumber;


@end

