//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCEdgeCacheHint_h
#define FCEdgeCacheHint_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface FCEdgeCacheHint : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

/* class methods */
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForFeaturedArticles;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForPurchaseLookup;

/* instance methods */
- (id)initWithGroupName:(id)name cacheControlKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCEdgeCacheHint_h */