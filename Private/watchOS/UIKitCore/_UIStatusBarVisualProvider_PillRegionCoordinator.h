//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarVisualProvider_PillRegionCoordinator_h
#define _UIStatusBarVisualProvider_PillRegionCoordinator_h
@import Foundation;

#include "_UIStatusBarDisplayItemPlacement.h"
#include "_UIStatusBarPillRegionVisualProvider-Protocol.h"
#include "_UIStatusBarRegion.h"

@class NSTimer;

@interface _UIStatusBarVisualProvider_PillRegionCoordinator : NSObject {
  /* instance variables */
  BOOL _visualProviderImplementsBackgroundActivityPillAnimation;
}

@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer;
@property (weak, nonatomic) NSObject<_UIStatusBarPillRegionVisualProvider> *visualProvider;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (retain, nonatomic) _UIStatusBarRegion *pillRegion;

/* instance methods */
- (void)updateDataForBackgroundActivity:(id)activity;
- (void)_updateBackgroundActivityWithEntry:(id)entry timeEntry:(id)entry needsUpdate:(BOOL)update;
- (void)updatePill;
- (void)_hideActivityDetailAndUpdate:(BOOL)update;
- (id)animationForBackgroundActivityIcon;
- (id)animationForBackgroundActivityPill;
- (id)animationForBackgroundActivityPillWithDuration:(double)duration scale:(double)scale;
- (void)updateRegion:(id)region highlighted:(BOOL)highlighted initialPress:(BOOL)press cornerRadius:(double)radius;
- (BOOL)handledUpdateOfActionable:(id)actionable highlighted:(BOOL)highlighted initialPress:(BOOL)press;
@end

#endif /* _UIStatusBarVisualProvider_PillRegionCoordinator_h */