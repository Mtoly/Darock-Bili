//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNMeContactComparisonStrategy_Protocol_h
#define CNMeContactComparisonStrategy_Protocol_h
@import Foundation;

@protocol CNMeContactComparisonStrategy <NSObject>
/* instance methods */
- (void)meContactChangedInStore:(id)store;
- (id)meContactIdentifiers;
- (BOOL)isMeContact:(id)contact;
@end

#endif /* CNMeContactComparisonStrategy_Protocol_h */