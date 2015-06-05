//
//  SRTournamentTennisType.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstTennisTournamentType.h"
#import "SRObject.h"
	
/**
 * Represents the localized types of tennis tournaments.
 */
@interface SRTournamentTennisType : SRObject 

/**
 * Tennis tournament type.
 * @see SRConstTennisTournamentType.h for available types
 */
@property (nonatomic,readonly) SRConstTennisTournamentType id;

/**
 * Localized name of a tournament.
 */
@property (nonatomic,readonly) NSString* name;


@end

