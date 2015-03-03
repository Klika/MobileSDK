//
//  SREventPeriodScoreChange.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SREvent.h"

@interface SREventPeriodScoreChange : SREvent

/**
 * Team which scored.
 */
@property (nonatomic,readonly) SRTeamBase *scoringTeam;

/**
 * Period score.
 */
@property (nonatomic,readonly) SRMatchScore* periodScore;

/**
 * Period score description.
 */
@property (nonatomic,readonly) NSString *scoreDescription;

@end
