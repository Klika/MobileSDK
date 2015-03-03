//
//  SRStadium.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRCountry.h"
#import "SRTeamBase.h"
#import "SRObject.h"
	
/**
 * Represents the stadium where a match is held.
 */
@interface SRStadium : SRObject {
}

/**
 * Unique stadium Id.
 */
@property (nonatomic,readonly) int stadiumId;

/**
 * Name of the stadium.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Address of the stadium.
 */
@property (nonatomic,readonly) NSString* address;

/**
 * City where the stadium is located.
 */
@property (nonatomic,readonly) NSString* city;

/**
 * Country where the stadium is located.
 */
@property (nonatomic,readonly) NSString*  country;

/**
 * Geo coordinates of where the stadium is located, Latitude and Longitude separated with ',', Example value "-8.040559,-34.896801", in this case "-8.040559" is latitude and "-34.896801" is longitude. Not every stadium contains this information.
 */
@property (nonatomic,readonly) NSString* geoCoordinates;

/**
 * Maximum number of spectators the stadium can normally accommodate.
 */
@property (nonatomic,readonly) int capacity;

/**
 * Year the stadium construction was finished.
 */
@property (nonatomic,readonly) NSString* constructionYear;

/**
 * Stadium description, if any.
 */
@property (nonatomic,readonly) NSString* stadiumDescription;

/**
 * Stadium home page URL address.
 */
@property (nonatomic,readonly) NSString* homePage;

/**
 * Array of teams that practise on this stadium and are the home teams when hosting matches at this stadium.
 * @see SRTeam
 */
@property (nonatomic,readonly) NSArray*  homeTeams;


@end

