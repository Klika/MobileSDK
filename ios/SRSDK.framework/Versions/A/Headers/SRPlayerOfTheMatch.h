//
//  SRPlayerOfTheMatch.h
//  SRSDK
//
//  Created by Andraz on 10/08/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"

@interface SRPlayerOfTheMatch : SRObject

@property (nonatomic, readonly) int player;
@property (nonatomic, readonly) int numOfVotes;

@end
