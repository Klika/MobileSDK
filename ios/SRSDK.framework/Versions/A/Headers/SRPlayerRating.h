//
//  SRPlayerRating.h
//  SRSDK
//
//  Created by Andraz on 10/08/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"
#import "SRUserPlayerRating.h"

@interface SRPlayerRating : SRUserPlayerRating

@property (nonatomic, readonly) int numOfRatings;

@end
