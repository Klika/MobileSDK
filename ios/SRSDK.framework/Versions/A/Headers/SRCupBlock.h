//
//  SRCupBlock.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
@class SRTeamBase;

/**
 * Represents single block of a cup roster.
 */
@interface SRCupBlock : SRObject


@property (nonatomic,readonly) int cupId;

/**
 * Parent block. Useful for graphical representation.
 */
@property (nonatomic,readonly) SRCupBlock *parent;

/**
 * Home/first team playing.
 */
@property (nonatomic,readonly) SRTeamBase *team1;

/**
 * Away/second team playing.
 */
@property (nonatomic,readonly) SRTeamBase *team2;

/**
 * Winning team. Available only if finished. Advances to next block or wins the cup roster.
 */
@property (nonatomic,readonly) SRTeamBase *winner;

/**
 * Array of matches played in a block.
 * @see SRMatch
 */
@property (nonatomic,readonly) NSArray *matches;

@end
