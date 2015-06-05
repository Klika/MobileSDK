//
//  SRPointFlowStructureGroupTennis.h
//  SRSDK
//
//  Created by Jure Zemljic on 03/04/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRPointFlowStructureGroup.h"

@interface SRPointFlowStructureGroupTennis : SRPointFlowStructureGroup

+ (instancetype)createDummyPeriodChangeGroup:(SRTeamBase *)startingTeam;

- (BOOL)isDummyPeriodChangeGroup;
    
@end
