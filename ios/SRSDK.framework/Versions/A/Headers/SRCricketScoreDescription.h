//
//  SRCricketScoreDescription.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRConstCricketScoreValueType.h"
#import "SRConstCricketScoreDescriptionType.h"
@class SRTeamBase;

@interface SRCricketScoreDescription : NSObject

/** Represents the team for which the score description applies. */
@property (nonatomic, readonly) SRTeamBase *team;
/** Represents the score description value. */
@property (nonatomic, readonly) NSInteger value;
/** Represents the value type. */
@property (nonatomic, readonly) SRConstCricketScoreValueType valueType;
/** Represents the description type. */
@property (nonatomic, readonly) SRConstCricketScoreDescriptionType descriptionType;

@end
