//
//  SRTeamBase.h
//  SRSDK
//
//  Created by Jure Zemljic on 23/07/14.
//  Copyright (c) 2014 Klika d.o.o. All rights reserved.
//

#import "SRObject.h"
#import "SRNotificationSubscribable.h"
#import "SRConstSports.h"
#import "SRCountry.h"
#import "SRSport.h"

@interface SRTeamBase : SRObject <SRNotificationSubscribable>

@property (nonatomic,readonly) int teamId;

/**
 * Team unique id used for team livescore data.
 */
@property (nonatomic,readonly) int teamUId;

/**
 * Sport identifier.
 */
@property (nonatomic,readonly) SRConstSports sportId;

/**
 * Localized name of a team.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Team abbreviation.
 */
@property (nonatomic,readonly) NSString* abbr;

/**
 * Team suffix if available.
 *
 * Team suffix is only available for national teams, where team's <name> is the country they represent. An example in soccer are the U21 national teams, where <name> could be `"Israele"` with suffix `"U21"`.
 */
@property (nonatomic,readonly) NSString* suffix;

/**
 * Country from which team comes from.
 */
@property (nonatomic,readonly) SRCountry*  country;

/**
 * Array of last matches played by this team. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_LAST_MATCHES.
 * @see SRMatch
 */
@property (nonatomic,readonly) NSArray *lastMatches;

/**
 * Array of next matches planned for this team. Loaded with loadAddtionalData->SR_LOAD_ADDITIONAL_DATA_TEAM_NEXT_MATCHES.
 * @see SRMatch
 */
@property (nonatomic,readonly) NSArray *nextMatches;

/**
 Generate URL to team image.
 @param aLarge Is this large sized image, otherwise it's medium sized
 @returns URL to jersey PNG image
 */
-(NSString*)teamCrestURL:(BOOL)aLarge;

/**
 * National teams request for a country and sport.
 */
+(void)nationalTeamListForSport:(SRCountry *)country andSport:(SRSport *)sport success:(SRTeamsListBlock)success failure:(SRErrorCallback)failure;


@end
