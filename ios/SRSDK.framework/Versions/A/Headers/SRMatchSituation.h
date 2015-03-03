//
//  SRMatchSituation.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRTeamBase.h"
#import "SRConstMatchSituation.h"
#import "SRObject.h"
	
/**
 * Represents the team's situation - whether the team is in an attacking or defending position.
 */
@interface SRMatchSituation : SRObject {
}

/**
 * The name of the team. Team can also be `nil`. That would mean that ball possesion is currently around the center of the pitch and the team cannot be determand.
 */
@property (nonatomic,readonly) SRTeamBase*  team;

/**
 * The value from the enum that distinguishes if this team is making an attack (progressing to the opponent's side) or defending their positions.
 * @see SRConstMatchSituation.h
 */
@property (nonatomic,readonly) SRConstMatchSituation situation;

/**
 * The translated name of the situation.
 * */
@property (nonatomic,readonly) NSString* situationName;


@end

