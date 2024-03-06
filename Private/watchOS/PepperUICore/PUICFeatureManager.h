//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICFeatureManager_h
#define PUICFeatureManager_h
@import Foundation;

@interface PUICFeatureManager : NSObject

@property (copy, nonatomic) id /* block */ new_navigation_bar_design__EnabledBlock;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (BOOL)featureEnabled:(long long)enabled;
- (void)overrideFeature:(long long)feature enabled:(BOOL)enabled;
- (void)clearOverrideForFeature:(long long)feature;
- (id /* block */)_systemFlagCheckForFeature:(long long)feature;
@end

#endif /* PUICFeatureManager_h */