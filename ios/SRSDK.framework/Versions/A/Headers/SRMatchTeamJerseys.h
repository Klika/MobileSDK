//
//  SRMatchTeamJerseys.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRJerseyColor.h"

/*
 * Team jerseys used in actual match.
 */
@interface SRMatchTeamJerseys : SRObject

/**
 * Player jersey.
 */
@property (nonatomic,readonly) SRJerseyColor *player;

/**
 * Goalkeeper jersey.
 */
@property (nonatomic,readonly) SRJerseyColor *goalkeeper;

@end
