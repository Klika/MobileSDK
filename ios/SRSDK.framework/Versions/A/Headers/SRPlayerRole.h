//
//  SRPlayerRole.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayer.h"
#import "SRTeamSoccer.h"
#import "SRConstPlayerTypes.h"
#import "SRObject.h"
	
/**
 * Represents a player's role he currently occupies or has occupied at a certain stage in his carrer.
 * 
 * One player can have several roles (e.g. "active contract", "on loan", "international", "manager"), where some are active and some inactive.
 * In soccer for example, one player can be part of an international team, even though he has an active contract with his own team at the same time.
 */
@interface SRPlayerRole : SRObject {
}

/**
 * The player's team when occupying this role.
 */
@property (nonatomic,readonly) SRTeamSoccer*  team;

/**
 * Indicates the role of this match participant (player, manager, on loan player).
 * @see SRConstPlayerTypes.h
 */
@property (nonatomic,readonly) SRConstPlayerTypes roleId;

/**
 * Localized role name/type.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Flag indicating whether this role is currently active or obsolete.
 */
@property (nonatomic,readonly) BOOL active;

/**
 * Represents the date when this role became active/valid.
 */
@property (nonatomic,readonly) NSDate* startDate;

/**
 * Represents the date when this role will end or has ended. If this is `nil` then this is the currently active role and no end date is available.
 */
@property (nonatomic,readonly) NSDate* endDate;

/**
 * Player's shirt number when occupying this role.
 * 
 * Note that managers don't have shirt numbers.
 */
@property (nonatomic,readonly) int shirtNumber;


@end

