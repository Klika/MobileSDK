//
//  SRMatchCommentary.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatchPhrase.h"

/**
 * Match commentry is provided when calling loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_COMMENTS.
 */
@interface SRMatchCommentary : NSObject {
}

/**
 * Array of match commentary lines.
 * @see SRMatchPhrase
 */
@property (nonatomic,readonly) NSArray*  comments;

/**
 * Array of match fun facts.
 * @see SRMatchPhrase
 */
@property (nonatomic,readonly) NSArray*  funFacts;


@end

