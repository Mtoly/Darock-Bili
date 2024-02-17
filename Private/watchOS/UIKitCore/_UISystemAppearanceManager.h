//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISystemAppearanceManager_h
#define _UISystemAppearanceManager_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "UIScene.h"
#include "UIWindow.h"
#include "UIWindowScene.h"
#include "_UISceneComponentProviding-Protocol.h"

@class NSArray, NSString;

@interface _UISystemAppearanceManager : NSObject<_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (weak, nonatomic) UIWindow *previousWindowDrivingSystemAppearance;
@property (retain, nonatomic) NSObject<BSInvalidatable> *stateCaptureToken;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (weak, nonatomic) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScene:(id)scene;
- (void)dealloc;
- (void)_setScene:(id)scene;
- (id)_findWindowDrivingSystemAppearance;
- (void)_handleWindowVisibilityNotification:(id)notification;
- (void)_windowDrivingSystemAppearanceDidChange:(id)change;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)updateUserInterfaceStyle;
- (void)updateWhitePointAdaptivityStyle;
- (void)updateMultitaskingDragExclusionRects;
- (void)updateContainerBackgroundStyle;
- (void)window:(id)window didUpdateSupportedOrientations:(unsigned long long)orientations preferredOrientation:(long long)orientation prefersAnimation:(BOOL)animation;
- (void)_logOrientationPreferencesChangeWithOldSupportedOrientations:(unsigned long long)orientations newSupportedOrientations:(unsigned long long)orientations oldPreferredOrientation:(long long)orientation newPreferredOrientation:(long long)orientation animationSettings:(id)settings fenced:(BOOL)fenced;
@end

#endif /* _UISystemAppearanceManager_h */