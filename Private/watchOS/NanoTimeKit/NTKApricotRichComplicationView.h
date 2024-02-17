//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKApricotRichComplicationView_h
#define NTKApricotRichComplicationView_h
@import Foundation;

#include ".h"
#include "BLSBacklightStateObserving-Protocol.h"
#include "CHUISWidgetHostViewControllerDelegate-Protocol.h"
#include "NTKTritiumDefaultsObserver-Protocol.h"
#include "NTKTritiumHostedSceneDelegate-Protocol.h"

@class CHSWidgetMetrics, CHSWidgetTintParameters, CHUISWatchComplicationsWidgetHostViewController, CHUISWatchComplicationsWidgetSnapshotMetadata, NSString;
@protocol BLSHBacklightSceneHostEnvironment, OS_dispatch_group, UIViewController<CHUISWidgetPreviewHosting;

@interface NTKApricotRichComplicationView : <CHUISWidgetHostViewControllerDelegate, NTKTritiumHostedSceneDelegate, BLSBacklightStateObserving, NTKTritiumDefaultsObserver> {
  /* instance variables */
  NSString *_containerBundleIdentifier;
  BOOL _editing;
  double _monochromeFraction;
  CHSWidgetTintParameters *_tintParameters;
  NSObject<BLSHBacklightSceneHostEnvironment> *_backlightHostEnvironment;
  NSObject<OS_dispatch_group> *_renderGroup;
  BOOL _scenePresented;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scenePresentedLock;
}

@property (retain, nonatomic) CHUISWatchComplicationsWidgetHostViewController *widgetHostViewController;
@property (retain, nonatomic) UIViewController<CHUISWidgetPreviewHosting> *previewViewController;
@property (copy, nonatomic) CHSWidgetMetrics *baseMetrics;
@property (readonly, nonatomic) CHSWidgetMetrics *computedMetrics;
@property (copy, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) BOOL showSnapshot;
@property (nonatomic) BOOL requireSnapshot;
@property (nonatomic) BOOL showPreview;
@property (nonatomic) BOOL visibleInTritium;
@property (nonatomic) BOOL configureForSnapshotting;
@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSnapshotMetadata *snapshotMetadata;
@property (nonatomic) BOOL contentPaused;
@property (nonatomic) BOOL accentedAlternateBackground;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL supportsTinting;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL supportsLowLuminance;
@property (nonatomic) BOOL clipToMetrics;
@property (nonatomic) BOOL disableLiveTransitionAnimation;
@property (nonatomic) unsigned long long visibility;
@property (copy, nonatomic) NSString *launchLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFamily:(long long)family;
- (void)dealloc;
- (void)invalidate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_clearState;
- (void)setWidgetExtensionBundleIdentifier:(id)identifier containerBundleIdentifier:(id)identifier kind:(id)kind intent:(id)intent;
- (void)_configureWidgetHostViewController;
- (void)_configurePreviewViewController;
- (void)_resetComputedMetrics;
- (void)_updateComputedMetrics;
- (void)setFontStyle:(long long)style;
- (BOOL)_metricsDefineSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frame;
- (void)setEditing:(BOOL)editing;
- (void)_setDisableLiveTransitionAnimation:(BOOL)animation;
- (void)_applyUpdate;
- (unsigned long long)_widgetPresentationMode;
- (unsigned long long)_widgetContentType;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (double)monochromeFraction;
- (void)_updateTintParameters;
- (id)_chsWidgetTintParameters;
- (void)_transitToHighlightState:(BOOL)state fraction:(double)fraction;
- (void)performTapAction;
- (void)widgetHostViewController:(id)controller requestsLaunch:(id)launch;
- (void)_updateBacklightHostEnvironment:(id)environment;
- (void)_updateTritiumSceneRegistration;
- (void)sceneDidBecomePresented:(id)presented;
- (void)backlight:(id)backlight didChangeAlwaysOnEnabled:(BOOL)enabled;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)discard inGroup:(id)group;
- (void)prepareSnapshotContentWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)snapshotContentWithTimeout:(double)timeout completion:(id /* block */)completion;
- (void)sizeToFit;
- (void)tritiumPrivacySettingsDidChange;
- (BOOL)_privateInTritium;
- (id)_widgetDebugDescription;
@end

#endif /* NTKApricotRichComplicationView_h */