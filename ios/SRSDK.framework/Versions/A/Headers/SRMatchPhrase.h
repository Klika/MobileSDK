//
//  SRMatchPhrase.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SREvent.h"
#import "SRObject.h"
#import "SRConstMatchPhraseType.h"
#import "SRMatch.h"

@class SREvent;
@class SRMatch;

/**
 * Single match phrase (comment or funfact).
 */
@interface SRMatchPhrase : SRObject {
    SRMatch *_match;
}

/**
 * Event comment is for. Can be nil.
 */
@property (nonatomic,readonly) SREvent*  event;

/**
 * Comment content.
 */
@property (nonatomic,readonly) NSString* sentence;

/**
 * Type of phrase.
 * @see SRConstMatchPhraseType.h
 */
@property (nonatomic,readonly) SRConstMatchPhraseType type;


@end

