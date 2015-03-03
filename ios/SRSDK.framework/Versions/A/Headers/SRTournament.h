//
//  SRTournament.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRCategory.h"
#import "SRSport.h"
#import "SRSeason.h"
#import "SRMatch.h"
#import "SRObject.h"
#import "SRNotificationSubscribable.h"
#import "SRFixtureStructure.h"

@class SRTeamBase;
@class SRFixtureStructure;

/**
 * Represents the base data of a tournament.
 * Model hierarchy: SRSport -> SRCategory -> SRTournament -> SRMatch
 *
 * Tournaments can be obtained by a call to:
 *
 * - SRDataManager::requestTournaments (tournaments can be grouped by <[SRTournament uniqueTournamentId]> and <[SRTournament matches]> will be empty, since only tournaments are requested)
 * - <[SRDataManager matchesForDay:success:failure:]> (tournaments in the results are not intended for "tournament grouping", since only the tournaments for the day's <SRMatch> matches (<[SRTournament matches]>) are included in the response)
 */
@interface SRTournament : SRObject <SRNotificationSubscribable> {
    NSArray *cupRosterIds;     // ids for cup rosters typeof <NSString>
    SRCategory *_providedCategory;
    SRSport *_providedSport;
    NSArray *_fixturesTournaments;
}

/**
 * Tournament id that uniquely identifies a single tournament.
 *
 * This id is used throughout the sdk to identify tournaments.
 */
@property (nonatomic,readonly) int tournamentId;
/*
 *
 * Tournament id that is intended to be used for tournament grouping.
 *
 * Tournaments with the same SRTournament::uniqueTournamentId belong to the same tournament group.
 *
 * In soccer for example, you can have several tournaments (e.g. `"Premier League Group 1"`, `"Premier League Group 2"`) that can be grouped under a single tournament group (e.g. `"Premier League"`).
 *
 * The "grouping tournament" can be identified by checking if SRTournament::uniqueTournamentId is equal to SRTournament::tournamentId.
 */
@property (nonatomic,readonly) int uniqueTournamentId;

/**
 * Tournament category id.
 */
@property (nonatomic,readonly) int categoryId;

/**
 * Can be for example country name for local legues, "International", ...
 */
@property (nonatomic,readonly) SRCategory*  category;

/**
 * Sport unique id.
 */
@property (nonatomic,readonly) int sportId;

/**
 * Sport this tournament is played for.
 */
@property (nonatomic,readonly) SRSport*  sport;

/**
 * Localized tournament name.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Tournament abbreviation.
 */
@property (nonatomic,readonly) NSString* abbr;

/**
 * Current (SRSeason) season of this tournament.
 */
@property (nonatomic,readonly) int currentSeasonId;

/**
 * Does this tournament have live table. If so, it can be loaded with loadAdditionalData and will be provided in property SRTournament::liveTableItems.
 */
@property (nonatomic,readonly) BOOL hasLiveTable;

/**
 * Is this tournament cup roster based. If so, it can be loaded with loadAdditionalData and will be provided in property SRTournament::cupRosters.
 */
@property (nonatomic,readonly) BOOL hasCupRoster;

/**
 * Current season this tournament is played for.
 */
@property (nonatomic,readonly) SRSeason* currentSeason;

/**
 * Provided, if loaded with loadAdditionalData.
 */
@property (nonatomic,readonly) NSArray* liveTableItems;

/**
 * Provided, if loaded with loadAdditionalData.
 */
@property (nonatomic,readonly) NSArray* fixtureMatches DEPRECATED_ATTRIBUTE;

/**
 * Provided, if loaded with loadAdditionalData. Contains tournament fixtures with grouping.
 */
@property (nonatomic,readonly) SRFixtureStructure* fixturesStructure;

/**
 * Provided, if loaded with loadAdditionalData.
 */
@property (nonatomic,readonly) NSArray* cupRosters;

/**
 * Array of top goals stats for current season.
 * @see SRPlayerStatistics
 */
@property (nonatomic,readonly) NSArray* topGoals;

/**
 * Array of top assists stats for current season.
 * @see SRPlayerStatistics
 */
@property (nonatomic,readonly) NSArray* topAssists;

/**
 * Array of top cards stats for current season.
 * @see SRPlayerStatistics
 */
@property (nonatomic,readonly) NSArray* topCards;

/**
 * Does this tournament have season information.
 */
- (BOOL)hasCurrentSeason;

/**
 * Fetch list of all available tournaments for category.
 */
+(void)tournamentListForCategoryId:(int)categoryId success:(SRTournamentsListCallback)success failure:(SRErrorCallback)failure;

/**
 * Fetch list of all available categories and sports.
 */
+(void)tournamentTree:(SRTournamentTreeCallback)success failure:(SRErrorCallback)failure;

/**
 * Load tournament object by tournament id.
 */
+ (void)findById:(int)tournamentId success:(SRObjectCallback)success failure:(SRErrorCallback)failure;


@end
