//
//  SRHead2HeadModel.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstTeamForm.h"
#import "SRMatch.h"
#import "SRLiveTableItem.h"
#import "SRSport.h"
#import "SRMatchTableComparison.h"
	
/**
 * Represents a head to head comparison of two teams competing in a match.
 * 
 * Head to head data can be obtained by calling <[SRMatchManager requestHead2Head]>.
 */
@interface SRHead2HeadModel : SRObject

/**
 * Home team's last match result statuses in an array of NSNumber from <SRConstTeamForm> (max 10 items).
 */
@property (nonatomic,readonly) NSArray*  team1Form;

/**
 * Away team's last match result statuses in an array of NSNumber from <SRConstTeamForm> (max 10 items).
 */
@property (nonatomic,readonly) NSArray*  team2Form;

/**
 * Array of future <SRMatch> matches for the away team.
 * 
 * Array contains at most 30 matches for the duration of 12 months into the future. If the season is at the end and no tournament matches timeline has been established yet, the array can also be empty.
 * 
 * Match tournaments can be obtained from <nextTournamentsAwayTeam>.
 */
@property (nonatomic,readonly) NSArray*  nextMatchesTeam1;

/**
 * Array of future <SRMatch> matches for the home team.
 * 
 * Array contains at most 30 matches for the duration of 12 months into the future. If the season is at the end and no tournament matches timeline has been established yet, the array can also be empty.
 * 
 * Match tournaments can be obtained from <nextTournamentsHomeTeam>.
 */
@property (nonatomic,readonly) NSArray*  nextMatchesTeam2;

/**
 * Array of past <SRMatch> matches for the home team.
 * 
 * Array contains at most 30 matches for the duration of 12 months into the past (or 6 years if there is less then 10 matches in past 12 months).
 * 
 * Match tournaments can be obtained from <previousTournamentsHomeTeam>.
 */
@property (nonatomic,readonly) NSArray*  previousMatchesTeam1;

/**
 * Array of past <SRMatch> matches for the away team.
 * 
 * Array contains at most 30 matches for the duration of 12 months into the past (or 6 years if there is less then 10 matches in past 12 months).
 * 
 * Match tournaments can be obtained from <previousTournamentsAwayTeam>.
 */
@property (nonatomic,readonly) NSArray*  previousMatchesTeam2;

/**
 * Recent <SRMatch> matches both of the teams were participating in one against another.
 * 
 * The maximum number of matches this array contains is 10.
 */
@property (nonatomic,readonly) NSArray*  recentVersusMatches;

@property (nonatomic,readonly) SRMatchTableComparison *matchTableComparison;


@end

