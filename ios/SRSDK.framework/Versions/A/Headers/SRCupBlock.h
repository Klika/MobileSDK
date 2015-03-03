//
//  SRCupBlock.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"
#import "SRTeam.h"

/**
 * Represents single block of a cup roster.
 */
@interface SRCupBlock : SRObject
{
    NSDictionary *_allTeams;
}

@property (nonatomic,readonly) int cupId;

/**
 * Parent block. Useful for graphical representation.
 */
@property (nonatomic,readonly) SRCupBlock *parent;

/**
 * Home/first team playing.
 */
@property (nonatomic,readonly) SRTeam *team1;

/**
 * Away/second team playing.
 */
@property (nonatomic,readonly) SRTeam *team2;

/**
 * Winning team. Available only if finished. Advances to next block or wins the cup roster.
 */
@property (nonatomic,readonly) SRTeam *winner;

/**
 * Array of matches played in a block.
 * @see SRMatch
 */
@property (nonatomic,readonly) NSArray *matches;

@end
