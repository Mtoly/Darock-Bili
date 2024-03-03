//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSServiceFeatureFlag_h
#define BSServiceFeatureFlag_h
@import Foundation;

@class NSString;

@interface BSServiceFeatureFlag : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *featureName;

/* instance methods */
- (id)initWithDomain:(id)domain featureName:(id)name;
- (BOOL)isEnabled;
- (id)description;
@end

#endif /* BSServiceFeatureFlag_h */