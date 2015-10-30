//
//  SRMatchService.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstGameServicePosition.h"
#import "SRMatch.h"

/**
 * Represents matches that are aware of service team.
 */
@interface SRMatchService : SRMatch

/**
 * Which team/player has a service. Compare it with SRMatch team1 to know if it's home team or with team2 for away team.
 */
@property (nonatomic,readonly) SRTeamBase *serviceTeam;

/**
 * Where does the serving player serve, left or right.
 * @see SRConstGameServicePosition.h
 */
@property (nonatomic,readonly) SRConstGameServicePosition servicePosition;

@end

