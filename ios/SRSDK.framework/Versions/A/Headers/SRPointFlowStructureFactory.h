//
//  SRPointFlowStructureFactory.h
//  SRSDK
//
//  Created by Jure Zemljic on 03/04/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRPointFlowStructure.h"

@interface SRPointFlowStructureFactory : NSObject

+ (SRPointFlowStructure *)buildForSport:(SRConstSports)sport withEvents:(NSArray *)events;


@end
