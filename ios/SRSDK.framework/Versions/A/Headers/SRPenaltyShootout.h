//
//  SRPenaltyShootout.h
//  SRSDK
//
//  Created by Andraz on 04/03/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"
@class SRTeamBase;
@class SRMatch;
@class SREventPenaltyShot;

@interface SRPenaltyShootout : SRObject

/**
 * Time of penalties period start.
 */
@property (nonatomic,readonly) NSDate* startedTime;

/**
 * List of SREventPenaltyShot events for Team 1.
 */
@property (nonatomic,readonly) NSArray* team1PenaltyShots;

/**
 * List of SREventPenaltyShot events for Team 2.
 */
@property (nonatomic,readonly) NSArray* team2PenaltyShots;

/**
 * Team 1 penalty shootout score.
 */
@property (nonatomic,readonly) int team1Score;

/**
 * Team 2 penalty shootout score.
 */
@property (nonatomic,readonly) int team2Score;

/**
 * Last team which attempted penalty shot.
 */
@property (nonatomic,readonly) SRTeamBase* lastTeam;

-(id)initWithMatch:(SRMatch*)match startDate:(NSDate*)startDate;

-(void) addPenaltyShot:(SREventPenaltyShot*)eventPenaltyShot;

@end
