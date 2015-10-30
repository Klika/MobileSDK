//
//  SRSport.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstSports.h"
#import "SRObject.h"
#import "SRBlockDefinitions.h"

/**
 * Represents sport.
 */
@interface SRSport : SRObject

/**
 * Sport type.
 * @see SRConstSports.h for available sports
 */
@property (nonatomic,readonly) SRConstSports sportId;

/**
 * Localized sport name.
 */
@property (nonatomic,readonly) NSString* name;

/**
	Returns all available sports. This is async call. Result is returned via callback.
	@param success Success callback
	@param failure Failure callback
 */
+ (void)getAllSports:(SRSportsListCallback)success failure:(SRErrorCallback)failure;

/**
 * Is sport individual. Examples of indivitual sports: tennis, snooker, darts, ...
 * @param sportId Type of a sport
 * @returns YES if sport is inidividual
 * @see SRConstSports.h for available sports
 */
+ (BOOL)isIndividualSport:(SRConstSports)sportId;

/**
 * Is this sport penalty/penalty box aware sport.
 * @param sportId Type of a sport
 * @returns YES if sport is suspensible
 * @see SRConstSports.h for available sports
 */
+ (BOOL)isSuspensibleSport:(SRConstSports)sportId;

/**
* Is service sport.
* @param sportId Type of a sport
* @returns YES if sport is service aware
* @see SRConstSports.h for available sports
*/
+ (BOOL)isServiceSport:(SRConstSports)sportId;

@end

