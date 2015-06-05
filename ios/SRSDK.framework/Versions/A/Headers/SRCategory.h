//
//  SRCategory.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRCountry.h"
#import "SRTournament.h"
#import "SRObject.h"
#import "SRSport.h"
#import "SRNotificationSubscribable.h"

/**
 * Represents the base data of a category. Can be for example country name for local legues, "International", ...
 * Model hierarchy: SRSport -> SRCategory -> SRTournament -> SRMatch
 */
@interface SRCategory : SRObject <SRNotificationSubscribable> {
}

/**
 * Id of a category.
 */
@property (nonatomic,readonly) int categoryId;

/**
 * Id of a sport category belongs to.
 */
@property (nonatomic,readonly) int sportId;

/**
 * Sport model object of a category.
 */
@property (nonatomic,readonly) SRSport* sport;

/**
 * Localized name of a category.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Country of category is played in.
 */
@property (nonatomic,readonly) SRCountry* country;

/**
	Perform async call for fetching list of categories for a sport.
	@param sportId Id of a sport category belongs to
	@param success Success callback handler
	@param failure Failure callback handler
 */
+(void)categoryListForSport:(SRSport *)sport success:(SRCategoriesListCallback)success failure:(SRErrorCallback)failure;


@end

