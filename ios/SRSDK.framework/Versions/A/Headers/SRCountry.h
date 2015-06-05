//
//  SRCountry.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

/**
 * Represents a country.
 */
@interface SRCountry : SRObject

/**
 * Unique country id.
 */
@property (nonatomic,readonly) int countryId;

/**
 * Localized name of the country.
 */
@property (nonatomic,readonly) NSString* countryName;

/**
 * Country abbreviation code.
 */
@property (nonatomic,readonly) NSString*  countryAbbr;

/**
 * ISO 639 two digit code that represents the country.
 */
@property (nonatomic,readonly) NSString* countryCode;

/**
 * The name of the continent the country is on.
 */
@property (nonatomic,readonly) NSString* continent;

/**
 * Id of the continent the country is on.
 */
@property (nonatomic,readonly) int continentId;


@end

