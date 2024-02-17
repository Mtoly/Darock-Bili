//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFQueryResult_h
#define EMFQueryResult_h
@import Foundation;

#include "EMFQuery.h"
#include "EMFQueryResultOverride.h"

@class NSArray, NSDictionary, NSOrderedSet;

@interface EMFQueryResult : NSObject {
  /* instance variables */
  NSOrderedSet *_sortedResultSet;
}

@property (readonly, nonatomic) EMFQuery *query;
@property (readonly, nonatomic) NSArray *documentMatches;
@property (readonly, nonatomic) NSDictionary *matchingDocumentWeights;
@property (readonly, copy, nonatomic) EMFQueryResultOverride *resultOverride;

/* class methods */
+ (struct __EmojiTokenWrapper *)_emojiTokenForDocumentID:(id)id usingLocaleData:(struct __EmojiLocaleDataWrapper *)data;
+ (id)_emojiStringForDocumentID:(id)id usingLocaleData:(struct __EmojiLocaleDataWrapper *)data;

/* instance methods */
- (id)initWithQuery:(id)query andMatchingDocumentWeights:(id)weights;
- (id)initWithQuery:(id)query matchingDocumentWeights:(id)weights resultOverride:(id)override;
- (id)emojiStringMatchesUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
- (id)emojiMatchesAndDocumentWeightsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
- (id)emojiMatchesForOverriddenResultsUsingEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
- (id)description;
- (BOOL)_matchingDocumentWeightsContainsOnlyBlackLivesMatterResults;
- (id)_handleOverrideResultInterpolationForStandardResults:(id)results;
- (id)_interpolateOverriddenResultsByPrepending:(id)prepending;
- (id)_interpolateOverriddenResultsByAppending:(id)appending;
- (id)_interpolateOverriddenResultsByAppendingAndMoving:(id)moving;
- (id)_interpolateOverriddenResultsByFiltering:(id)filtering;
- (id)_interpolateOverriddenResultsByOverwriting;
@end

#endif /* EMFQueryResult_h */