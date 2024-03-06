//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFChildServiceFilter_h
#define HFChildServiceFilter_h
@import Foundation;

@class NSSet;

@interface HFChildServiceFilter : NSObject

@property (readonly, copy, nonatomic) NSSet *childServiceTypes;

/* instance methods */
- (id)initWithChildServiceTypes:(id)types;
- (id)filteredChildServicesForParentService:(id)service;
@end

#endif /* HFChildServiceFilter_h */