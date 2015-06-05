//
//  SRTeamJerseys.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRJerseyColor.h"
#import "SRConstJerseyType.h"
#import "SRConstPlayerJerseySize.h"
#import "SRObject.h"

/**
 * Team jersey details.
 */
@interface SRTeamJerseys : SRObject

/**
 * Creates URL to generated jersey image.
 * @param aJerseyType See SRConstJerseyType.h for available types
 * @param aPlayerNumber Number of a player to be shown. Use 0 value for no number on jersey
 * @param aSize See SRConstPlayerJerseySize.h for available sizes
 * @returns URL to jersey image
 */
-(NSString*) generateJerseyUrlForJerseyType:(SRConstJerseyType)aJerseyType aPlayerNumber:(int)aPlayerNumber aSize:(SRConstPlayerJerseySize)aSize;

/**
 * Creates URL to generated jersey image.
 * @param aJerseyType See SRConstJerseyType.h for available types
 * @param aPlayerNumber Number of a player to be shown. Use 0 value for no number on jersey
 * @param aSize See SRConstPlayerJerseySize.h for available sizes
 * @param aJerseyColor Custom colors for jersey
 * @returns URL to jersey image
 * @see SRJerseyColor
 */
-(NSString*) generateJerseyUrlForJerseyTypeAndColor:(SRConstJerseyType)aJerseyType aPlayerNumber:(int)aPlayerNumber aSize:(SRConstPlayerJerseySize)aSize aJerseyColor:(SRJerseyColor*)aJerseyColor;

/**
 * Colors on a jersey when playing at home.
 */
@property (nonatomic,readonly) SRJerseyColor*  homeJersey;

/**
 * Colors on a jersey when playing as guests.
 */
@property (nonatomic,readonly) SRJerseyColor*  awayJersey;

/**
 * Alternative jersey colors if away colors conflicts with home team.
 */
@property (nonatomic,readonly) SRJerseyColor*  alternativeAwayJersey;

/**
 * Goalkeeper jersey colors.
 */
@property (nonatomic,readonly) SRJerseyColor*  goalkeeperJersey;


@end

