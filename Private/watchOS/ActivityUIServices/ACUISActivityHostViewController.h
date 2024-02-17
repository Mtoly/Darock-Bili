//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef ACUISActivityHostViewController_h
#define ACUISActivityHostViewController_h
@import Foundation;

#include "UIViewController.h"
#include "ACUISActivitySceneDescriptor.h"
#include "ACUISActivitySceneHosting-Protocol.h"
#include "BSInvalidatable-Protocol.h"
#include "_TtP18ActivityUIServices34ActivityHostViewControllerDelegate_-Protocol.h"

@class NSArray, NSString, UIColor, _TtC18ActivityUIServices26ActivityHostViewController;
@protocol ACUISActivityHostViewControllerDelegate;

@interface ACUISActivityHostViewController : UIViewController<ActivityUIServices.ActivityHostViewControllerDelegate, ACUISActivitySceneHosting, BSInvalidatable> {
  /* instance variables */
  ActivityUIServices.ActivityHostViewController *_activityHostViewController;
}

@property (weak, nonatomic) NSObject<ACUISActivityHostViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) UIColor *backgroundTintColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects;
@property (readonly, nonatomic) BOOL idleTimerDisabled;
@property (readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACUISActivitySceneDescriptor *activitySceneDescriptor;

/* instance methods */
- (id)initWithActivityHostViewController:(id)controller;
- (void)dealloc;
- (void)invalidate;
- (BOOL)_canShowWhileLocked;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)controller;
- (void)viewDidLoad;
- (void)ensureContent:(double)content queue:(id)queue completion:(id /* block */)completion;
- (void)activityHostViewControllerWithViewController:(id)controller requestsLaunchWithAction:(id)action;
- (void)activityHostViewControllerBackgroundTintColorDidChangeWithViewController:(id)controller;
- (void)activityHostViewControllerTextColorDidChangeWithViewController:(id)controller;
- (void)activityHostViewControllerHostShouldCancelTouchesWithViewController:(id)controller;
- (void)activityHostViewControllerSignificantUserInteractionBeganWithViewController:(id)controller;
- (void)activityHostViewControllerSignificantUserInteractionEndedWithViewController:(id)controller;
- (void)activityHostViewControllerWithViewController:(id)controller didSetIdleTimerDisabled:(BOOL)disabled;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChangeWithViewController:(id)controller;
- (unsigned int)swiftPresentationMode:(unsigned long long)mode;
@end

#endif /* ACUISActivityHostViewController_h */