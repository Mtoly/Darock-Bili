//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLALauncherTransitionInterpolator_h
#define CSLALauncherTransitionInterpolator_h
@import Foundation;

@class _TtC18CarouselAnimations30LauncherTransitionInterpolator;

@interface CSLALauncherTransitionInterpolator : NSObject

@property (retain, nonatomic) CarouselAnimations.LauncherTransitionInterpolator *interpolator;
@property (readonly, nonatomic) double animatorDuration;
@property (readonly, nonatomic) double progress;

/* instance methods */
- (id)init;
- (id)initWithFirstRow:(long long)row lastRow:(long long)row;
- (double)progressForRow:(long long)row;
@end

#endif /* CSLALauncherTransitionInterpolator_h */