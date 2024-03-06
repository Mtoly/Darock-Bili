//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASTMovieStatItem_h
#define SASTMovieStatItem_h
@import Foundation;

#include "AceObject.h"
#include "SASTTemplateItem-Protocol.h"
#include "SASTTemplatePercentageRating.h"

@class NSString;

@interface SASTMovieStatItem : AceObject<SASTTemplateItem>

@property (copy, nonatomic) NSString *contentRating;
@property (retain, nonatomic) SASTTemplatePercentageRating *reviewerRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASTMovieStatItem_h */