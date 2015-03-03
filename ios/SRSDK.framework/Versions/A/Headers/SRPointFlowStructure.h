//
//  SRPointFlowStructure.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRPointFlowStructureGroup.h"

@interface SRPointFlowStructure : SRObject

/**
 * Returns array of groups provided in season fixtures.
 * @see SRPointFlowStructureGroup.h
 */
- (NSArray *)groups;

/**
 * Returns array of matches for selected group.
 * @see SRPointFlowStructureItem.h
 */
- (NSArray *)itemsForGroup:(SRPointFlowStructureGroup *)group;


@end
