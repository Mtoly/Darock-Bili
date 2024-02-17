//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef NSSet_AppleMediaServices_h
#define NSSet_AppleMediaServices_h
@import Foundation;

@interface NSSet (AppleMediaServices)
/* class methods */
+ (id)ams_JSONClasses;
+ (id)ams_PLISTClasses;

/* instance methods */
- (BOOL)ams_allWithTest:(id /* block */)test;
- (BOOL)ams_anyWithTest:(id /* block */)test;
- (id)ams_filterUsingTest:(id /* block */)test;
- (id)ams_firstObjectPassingTest:(id /* block */)test;
- (id)ams_mapWithTransform:(id /* block */)transform;
- (id)ams_mapWithTransformIgnoresNil:(id /* block */)nil;
- (id)ams_nonEmptyComponentsJoinedByString:(id)string;
@end

#endif /* NSSet_AppleMediaServices_h */