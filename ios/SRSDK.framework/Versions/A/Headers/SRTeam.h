//
//  SRTeam.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRTeamJerseys.h"
#import "SRStadium.h"
#import "SRTournament.h"
#import "SRPLayer.h"

@class SRStadium;
@class SRTournament;

/**
 * Team base class.
 */
@interface SRTeam : SRTeamBase

/**
 * Team manager.
 */
@property (nonatomic,readonly) SRPlayer*  manager;

/**
 * Team home stadium. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_INFO.
 */
@property (nonatomic,readonly) SRStadium*  stadium;

/**
 * Team jersey details. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_INFO.
 */
@property (nonatomic,readonly) SRTeamJerseys*  jerseys;

/**
 * Array of tournaments, team is playing in. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_INFO.
 */
@property (nonatomic,readonly) NSArray* tournaments;

/**
 * Array of players in a team. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_SQUAD.
 * @see SRPlayer
 */
@property (nonatomic,readonly) NSArray* squad;

/**
 * Request teams participating in a tournament.
 * @param tournament Tournament
 */
+(void)teamListForTournament:(SRTournament *)tournament success:(SRTeamsListBlock)success failure:(SRErrorCallback)failure;


@end

