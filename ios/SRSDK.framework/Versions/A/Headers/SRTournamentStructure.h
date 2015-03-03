//
//  SRTournamentStructure.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRTournament.h"

@interface SRTournamentStructure : SRObject {
    NSMutableDictionary *_categories;
    NSMutableDictionary *_uniqueTournaments;
    NSMutableDictionary *_tournaments;
}

/**
 * Array of sports.
 * @see SRSport
 */
@property (nonatomic,readonly) NSArray *sports;

/**
 * List all categories for specified sport.
 */
- (NSArray *)listCategories:(SRSport *)sport;

/**
 * List all unique tournaments for specified category.
 */
- (NSArray *)listUniqueTournaments:(SRCategory *)category;

/**
 * List all tournaments for specified category.
 */
- (NSArray *)listTournaments:(SRCategory *)category;

/**
 * List all tournaments for specified category.
 */
- (NSArray *)listTournaments:(SRCategory *)category forUniqueTournament:(SRTournament *)tournament;

/**
 * Get tournament for specified ID.
 */
- (SRTournament *)tournamentForId:(int)tournamentId;


@end
