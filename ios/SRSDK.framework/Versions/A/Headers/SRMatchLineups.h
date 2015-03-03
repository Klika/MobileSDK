//
//  SRMatchLineups.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayer.h"
#import "SRPlayerSoccerFormation.h"
#import "SRPlayerSoccer.h"
#import "SRObject.h"
	
/**
 * Represents the lineup, formation, substitution and managers information of a single match.
 * 
 * The following is an example of how to generate a graphical formation lineup of match players based on the data provided in this object (note that this is not a code sample, but merely an abstract demonstration):
 * 
 * Lets assume the following formation strings of both teams:
 * 
 * homeFormation = @"4-2-3-1";
 * awayFormation = @"4-4-2";
 * 
 * From formation (<homeFormation>, <awayFormation>) and lineup ([awayLineup](<awayLineup>), [homeLineup](<homeLineup>)) data, you can generate graphical team formation on the pitch.
 * 
 * HOME TEAM **(4-2-3-1)**
 * 
 * h2 (LB) h7 (ST)
 * ⎡h1 (GK) h3 (CD) h5 (CM) h8 (ST) h10 (ST)
 * ⎣ h4 (CD) h6 (CM) h9 (ST)
 * h5 (RB)
 * 
 * 
 * AWAY TEAM **(4-4-2)**
 * 
 * a8 (RW) a4 (RB)
 * a10 (ST) a7 (CM) a3 (CD) a0 (GK)⎤
 * a9 (ST) a6 (CM) a2 (CD) ⎦
 * a5 (LW) a1 (LB)
 * 
 * **Abbrevations:**
 * h1 - home <SRPlayer> player with [[SRPlayer formation] order] of 1.
 * a5 - away <SRPlayer> player with [[SRPlayer formation] order] of 5.
 * LB - Left Back
 * CD - Central Defender
 * RB - Right Back
 * LW - Left Winger
 * CM - Central Midfielder
 * RW - Right Winger
 * ST - Striker
 * ⎡
 * ⎣ - Goal
 */
@interface SRMatchLineups : SRObject {
}

/**
 * Potencial lineup, retrieved from previous match.
 */
@property (nonatomic,readonly) BOOL potencial;

/**
 * Manager of the home team.
 * @see SRPlayer
 */
@property (nonatomic,readonly) SRPlayer*  manager;

/**
 * Startup formation sequence of the away team.
 * 
 * E.g. `"4-2-3-1"`
 */
@property (nonatomic,readonly) NSString* formation;

/**
 * Array of players forming away team lineup.
 * @see SRPlayer
 */
@property (nonatomic,readonly) NSArray*  lineup;

/**
 * Array of away team substitution players.
 * @see SRPlayer
 */
@property (nonatomic,readonly) NSArray*  substitutes;


@end

