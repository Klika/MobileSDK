//
//  SRTeamTennis.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRTeamBase.h"
#import "SRConstGender.h"
#import "SRConstTennisTournamentType.h"

/**
 * Represents the tennis specific team additional data.
 */
@interface SRTeamTennis : SRTeamBase

/**
 * Array of child teams if any. For example, this is an array of teams that represent the doubles.
 * @see SRTeamTennis
 */
@property (nonatomic,readonly) NSArray*  children;

/**
 * ATP ranking position.
 */
@property (nonatomic,readonly) int ranking;

/**
 * Total points, players received in played tournaments.
 */
@property (nonatomic,readonly) int points;

/**
 * Year, when player turned pro.
 */
@property (nonatomic,readonly) NSString *turnedPro;

/**
 * Players preferred hand, left or right.
 */
@property (nonatomic,readonly) NSString *preferredHand;

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
 * Is this team instance really a tennis doubles team.
 */
- (BOOL)isDoublesTeam;

/**
 * Array of team won/lost matches statistics on different ground types. Array is returned with SRTeamGroundStatistic objects, orderd by SRConstTennisGroundType. Loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_TENNIS_GROUND_STATS.
 */
@property (nonatomic,readonly) NSArray *teamGroundStatistics;

/**
 * Fetch list of current tennis ranking for a gender, tournament type(singles, doubles) and number of results
 */
+(void)tennisRankingListForGender:(SRConstGender)gender tournamentType:(SRConstTennisTournamentType)tournamentType count:(int)resultCount success:(SRTeamsListBlock)success failure:(SRErrorCallback)failure;


@end

