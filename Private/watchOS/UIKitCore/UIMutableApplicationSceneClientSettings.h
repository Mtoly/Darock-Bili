//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMutableApplicationSceneClientSettings_h
#define UIMutableApplicationSceneClientSettings_h
@import Foundation;

#include "FBSMutableSceneClientSettings.h"
#include "UIApplicationSceneClientSettings-Protocol.h"

@class FBSDisplayConfigurationRequest, FBSDisplayMode, NSArray, NSData, NSDictionary, NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings<UIApplicationSceneClientSettings>

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) long long statusBarModernStyle;
@property (copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic) BOOL statusBarForegroundTransparent;
@property (nonatomic) unsigned int statusBarContextID;
@property (nonatomic) long long defaultStatusBarStyle;
@property (nonatomic) BOOL defaultStatusBarHidden;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSString *defaultPNGName;
@property (nonatomic) double defaultPNGExpirationTime;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL interfaceOrientationChangesDisabled;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) BOOL idleTimerDisabled;
@property (nonatomic) unsigned long long proximityDetectionModes;
@property (nonatomic) double controlCenterAmbiguousActivationMargin;
@property (nonatomic) long long controlCenterRevealMode;
@property (nonatomic) long long notificationCenterRevealMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } primaryWindowOverlayInsets;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL idleModeVisualEffectsEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic) BOOL reachabilitySupported;
@property (nonatomic) BOOL wantsExclusiveForeground;
@property (nonatomic) unsigned long long visibleMiniAlertCount;
@property (retain, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic) double brightnessLevel;
@property (nonatomic) BOOL disablesMirroring;
@property (copy, nonatomic) NSString *canvasTitle;
@property (retain, nonatomic) NSData *activationConditionsData;
@property (nonatomic) long long sceneActivationBias;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenFocusedFrame;
@property (copy, nonatomic) _UIExternalGestureCollection *externalGestureCollection;
@property (retain, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (nonatomic) unsigned long long _debugValidationOrientationMask;
@property (nonatomic) long long playbackControlsState;
@property (nonatomic) BOOL containsSearchView;
@property (nonatomic) BOOL discardSessionOnUserDisconnect;
@property (nonatomic) BOOL systemInputActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isReachabilitySupported;
- (void)_setDebugValidationOrientationMask:(unsigned long long)mask;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)settings:(id)settings appendDescriptionToBuilder:(id)builder forFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (BOOL)isUISubclass;
- (BOOL)isStatusBarForegroundTransparent;
@end

#endif /* UIMutableApplicationSceneClientSettings_h */