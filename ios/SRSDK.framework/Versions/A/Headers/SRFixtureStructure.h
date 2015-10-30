//
//  SRFixtureStructure.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRSeason.h"
#import "SRFixtureStructureGroup.h"

@class SRFixtureStructureGroup;

@interface SRFixtureStructure : SRObject

/**
 * Season reference.
 */
@property (nonatomic,readonly) SRSeason* season;

/**
 * Returns array of groups provided in season fixtures;
 * @see SRFixtureStructureGroup.h
 */
- (NSArray *)groups;

/**
 * Returns array of matches for selected group.
 */
- (NSArray *)matchesForGroup:(SRFixtureStructureGroup *)group;


@end
