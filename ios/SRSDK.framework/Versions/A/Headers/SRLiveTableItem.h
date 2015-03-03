//
//  SRLiveTableItem.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstPromotionRelegation.h"
#import "SRObject.h"
#import "SRTeam.h"

/**
 * Represents a live table row for a single team.
 * 
 * The table consists of points the team has collected **in this tournament**, where multiple teams are competing against one another.
 * 
 * Table can be obtained with the call to <[SRDataManager requestLiveTable:success:failure:]>.
 * 
 * The data gets updated as soon a relevant event occurs during a match, meaning this table is also updated during a match.
 */
@interface SRLiveTableItem : SRObject {
}


@property (nonatomic,readonly) int itemId;

/**
 * Describes the change in the rank of this team in the live table from the previous ranking (if it has advanced, stayed on the same rank or downgraded to a lower rank) for example 3 would mean that team advanced 3 places, -2 would mean that team went down 2 places.
 */
@property (nonatomic,readonly) int changeTotal;

/**
 * Team details.
 */
@property (nonatomic,readonly) SRTeam* team;

/**
 * Current position of this team.
 */
@property (nonatomic,readonly) int position;

/**
 * Number of matches this team has played in this tournament.
 */
@property (nonatomic,readonly) int matchesPlayed;

/**
 * Number of matches this team has won in this tournament.
 */
@property (nonatomic,readonly) int winTotal;

/**
 * Number of matches that resulted in a draw for this team in this torunament.
 */
@property (nonatomic,readonly) int drawTotal;

/**
 * Number of matches this team has lost in this tournament.
 */
@property (nonatomic,readonly) int lossTotal;

/**
 * Number of goals this team has scored in this tournament.
 */
@property (nonatomic,readonly) int goalsForTotal;

/**
 * Number of goals this team has received in this tournament.
 */
@property (nonatomic,readonly) int goalsAgainstTotal;

/**
 * Total calculated points this team has acquired in this tournament.
 */
@property (nonatomic,readonly) int pointsTotal;

@property (nonatomic,readonly) int maxPointsTotal;
@property (nonatomic,readonly) int posHome;
@property (nonatomic,readonly) int home;
@property (nonatomic,readonly) int winHome;
@property (nonatomic,readonly) int drawHome;
@property (nonatomic,readonly) int lossHome;
@property (nonatomic,readonly) int goalsForHome;
@property (nonatomic,readonly) int goalsAgainstHome;
@property (nonatomic,readonly) int changeHome;
@property (nonatomic,readonly) int pointsHome;
@property (nonatomic,readonly) int maxPointsHome;
@property (nonatomic,readonly) int posAway;
@property (nonatomic,readonly) int away;
@property (nonatomic,readonly) int winAway;
@property (nonatomic,readonly) int drawAway;
@property (nonatomic,readonly) int lossAway;
@property (nonatomic,readonly) int goalsForAway;
@property (nonatomic,readonly) int goalsAgainstAway;
@property (nonatomic,readonly) int changeAway;
@property (nonatomic,readonly) int pointsAway;
@property (nonatomic,readonly) int maxPointsAway;

/**
 * Type of promotion or relegation the team occupying this <position> will face if it stays on this position to the end of the tournament.
 * @see SRConstPromotionRelegation.h for a sample table with relegation data
 */
@property (nonatomic,readonly) SRConstPromotionRelegation relegationId;

/**
 * Localized name of promoted or relegated position (see <relegationId>).
 */
@property (nonatomic,readonly) NSString* relegationName;


@end

