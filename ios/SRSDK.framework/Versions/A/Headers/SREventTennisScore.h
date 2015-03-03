//
//  SREventTennisGameScore.h
//  SRSDK
//
//  Copyright (c) 2014 Klika d.o.o. All rights reserved.
//

#import "SREvent.h"
#import "SRConstGameScoreType.h"
#import "SRGameScore.h"
#import "SRTeamTennis.h"
#import "SRMatchTennis.h"

@interface SREventTennisScore : SREvent

/**
 * Played match.
 */
@property (nonatomic,readonly) SRMatchTennis* match;

/**
 * Team which scored.
 */
@property (nonatomic,readonly) SRTeamTennis* scoringTeam;

/**
 * Score of the set.
 */
@property (nonatomic,readonly) SRMatchScore* setScore;

/**
 * Score of the game.
 */
@property (nonatomic,readonly) SRMatchScore* gameScore;

/**
 * Score of the game.
 */
@property (nonatomic,readonly) SRGameScore* gamePoints;

/**
 * Serving team.
 */
@property (nonatomic,readonly) SRTeamTennis* service;

/**
 * Point type. Ordinary, ace or double fault.
 * @see SRConstGameScoreType.h
 */
@property (nonatomic,readonly) SRConstGameScoreType scoreType;

/**
 * Was there any won opportunity with this point, if not GAMEOPPORTUNITY_NONE is returned.
 * @see SRConstGameOpportunity.h
 */
@property (nonatomic,readonly) SRConstGameOpportunity wonOpportunity;

/**
 * Description of any won opportunity.
 */
@property (nonatomic,readonly) NSString *wonOpportunityDescription;


@end
