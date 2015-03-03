//
//  SRGender.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstGender.h"
#import "SRObject.h"
	
/**
 * Represents the localized gender of the tournament participants.
 */
@interface SRGender : SRObject {
}

/**
 * Gender constant.
 * @see SRConstGender.h
 */
@property (nonatomic,readonly) SRConstGender id;

/**
 * Localized name of gender.
 */
@property (nonatomic,readonly) NSString* name;


@end

