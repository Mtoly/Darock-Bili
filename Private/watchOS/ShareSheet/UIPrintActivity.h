//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UIPrintActivity_h
#define UIPrintActivity_h
@import Foundation;

#include "UIActivity.h"
#include "UIManagedConfigurationRestrictableActivity-Protocol.h"
#include "UIPrintInteractionControllerActivityDelegate-Protocol.h"

@class NSString, UIPrintInteractionController, UIViewController, UIWindow;

@interface UIPrintActivity : UIActivity<UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate>

@property (retain) UIViewController *wrapperViewController;
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController;
@property (retain) UIWindow *windowHoldingActivityViewController;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_xpcAttributes;

/* instance methods */
- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)items;
- (void)prepareWithActivityItems:(id)items;
- (id)_embeddedActivityViewController;
- (void)performActivity;
- (void)cancelPrintOptions;
- (void)activityDidFinish:(BOOL)finish;
- (void)_cleanup;
- (BOOL)_allowsAutoCancelOnDismiss;
- (id)printInteractionControllerParentViewController:(id)controller;
- (id)printInteractionControllerWindowForPresentation:(id)presentation;
@end

#endif /* UIPrintActivity_h */