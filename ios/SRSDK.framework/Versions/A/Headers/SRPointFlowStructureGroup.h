//
//  SRPointFlowStructureGroup.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRTeamBase.h"

@interface SRPointFlowStructureGroup : SRObject

/**
 * Group name.
 */
@property (nonatomic,readonly) NSString* groupName;

/**
 * Team which started playing (ex. tennis/volleyball serve, start of period)
 */
@property (nonatomic,readonly) SRTeamBase* groupStartingTeam;

/**
 * Team 1 group score.
 */
@property (nonatomic,readonly) int team1Score;

/**
 * Team 2 group score.
 */
@property (nonatomic,readonly) int team2Score;

/**
 * Team which scored in this group.
 */
@property (nonatomic,readonly) SRTeamBase* groupScoringTeam;

/**
 * Is this active group, only reasonable for live matches.
 */
@property (nonatomic,readonly) BOOL active;

/**
 * Timestamp info about group.
 */
@property (nonatomic,readonly) NSDate *timestamp;

/**
 * Period index of group.
 */
@property (nonatomic,readonly) int periodIndex;

@end
