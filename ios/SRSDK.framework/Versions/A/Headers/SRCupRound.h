//
//  SRCupRound.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"

/**
 * Represents cup roster round. Example of round: 'Semi finals'
 */
@interface SRCupRound : SRObject
{
    NSDictionary *_allTeams;
}

@property (nonatomic,readonly) int cupRoundId;

/**
 * Localized name of a cup round.
 */
@property (nonatomic,readonly) NSString *name;

/**
 * Short name of a cup round.
 */
@property (nonatomic,readonly) NSString *shortName;

/**
 * Array of blocks in a round.
 * @see SRCupBlock
 */
@property (nonatomic,readonly) NSArray *blocks;

/**
 * Parent cup round. Useful for graphical representation.
 */
@property (nonatomic,readonly) SRCupRound *parent;

@end
