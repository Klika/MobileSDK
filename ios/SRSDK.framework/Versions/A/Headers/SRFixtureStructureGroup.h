//
//  SRFixtureStructureGroup.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRTournament.h"

@class SRTournament;

@interface SRFixtureStructureGroup : SRObject

/**
 * Group name.
 */
@property (nonatomic,readonly) NSString* groupName;

/**
 * Group date.
 */
@property (nonatomic,readonly) NSDate* date;

/**
 * Group end date.
 */
@property (nonatomic,readonly) NSDate* endDate;

/**
 * Tournament reference.
 */
@property (nonatomic, readonly) SRTournament *tournament;


@end
