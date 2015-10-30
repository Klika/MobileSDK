//
//  SRTournamentStructure.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRTournament.h"

@interface SRTournamentStructure : SRObject

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
- (NSArray *)listUniqueTournaments:(SRCategory *)category onlyActive:(BOOL)onlyActive;

/**
 * List all tournaments for specified category.
 */
- (NSArray *)listTournaments:(SRCategory *)category onlyActive:(BOOL)onlyActive;

/**
 * List all tournaments for specified category.
 */
- (NSArray *)listTournaments:(SRCategory *)category forUniqueTournament:(SRTournament *)tournament onlyActive:(BOOL)onlyActive;

/**
 * List all tournamnts, without any filter.
 */
- (NSArray *)listAllTournaments;

/**
 * Get tournament for specified ID.
 */
- (SRTournament *)tournamentForId:(int)tournamentId;


@end
