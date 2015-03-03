//
//  SRPointFlowStructureItem.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRTeamBase.h"
#import "SREvent.h"

@interface SRPointFlowStructureItem : SRObject

/**
 * Get scoring team.
 */
@property (nonatomic,readonly) SRTeamBase* scoringTeam;

/**
 * Any potential flag (enum) provided in score.
 */
@property (nonatomic,readonly) int scoringFlag;

/**
 * Team 1 score value.
 */
@property (nonatomic,readonly) int team1Score;

/**
 * Team 2 score value.
 */
@property (nonatomic, readonly) int team2Score;

/**
 * Holding event.
 */
@property (nonatomic,readonly) SREvent* event;

@end
