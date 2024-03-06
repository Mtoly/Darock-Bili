//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassView_h
#define PKPassView_h
@import Foundation;

#include "UIView.h"
#include "PKPassColorProfile.h"
#include "PKPassFaceViewDelegate-Protocol.h"
#include "PKPassFrontFaceView.h"
#include "PKPasscodeLockManagerObserver-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "WLCardViewDelegate-Protocol.h"

@class NSString, PKPass, PKPassDynamicState, PKPassFaceViewRendererState, PKPasscodeLockManager, PKRemoveableAnimationTrackerStore, UITapGestureRecognizer;
@protocol OS_dispatch_source;

@interface PKPassView : UIView<UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver> {
  /* instance variables */
  PKPassFrontFaceView *_frontFace;
  PKPassColorProfile *_colorProfile;
  UITapGestureRecognizer *_tapRecognizer;
  long long _priorContentMode;
  PKPasscodeLockManager *_passcodeLockManager;
  NSString *_suppressingIdentifier;
  BOOL _contentLoading;
  BOOL _contentLoaded;
  NSObject<OS_dispatch_source> *_contentModeUpdateTimer;
  PKRemoveableAnimationTrackerStore *_delayedAnimations;
  BOOL _invalidated;
}

@property (readonly, retain, nonatomic) PKPass *pass;
@property (readonly, nonatomic) NSString *uniqueID;
@property (nonatomic) long long contentMode;
@property (nonatomic) unsigned long long suppressedContent;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (retain, nonatomic) PKPassDynamicState *passState;
@property (nonatomic) BOOL modallyPresented;
@property (nonatomic) double modalShadowVisibility;
@property (readonly, nonatomic) BOOL frontFaceBodyContentCreated;
@property (nonatomic) BOOL paused;
@property (weak, nonatomic) NSObject<WLCardViewDelegate> *delegate;
@property (readonly, nonatomic) BOOL isFrontFaceExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass;
- (id)initWithPass:(id)pass content:(long long)content;
- (id)initWithPass:(id)pass content:(long long)content suppressedContent:(unsigned long long)content;
- (id)initWithPass:(id)pass content:(long long)content suppressedContent:(unsigned long long)content rendererState:(id)state;
- (void)dealloc;
- (void)invalidate;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)tapRecognized:(id)recognized;
- (void)setPaymentBarcodeData:(id)data;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })sizeOfFront;
- (struct CGSize { double x0; double x1; })sizeOfFrontFace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfVisibleFace;
- (id)snapshotOfFrontFace;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize { double x0; double x1; })size;
- (id)snapshotOfPassView;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)updates;
- (void)drawFrontFaceAtSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)canShowBarcode;
- (id)item;
- (BOOL)isPaused;
- (void)setDimmer:(double)dimmer animated:(BOOL)animated;
- (void)setModalShadowVisibility:(double)visibility animated:(BOOL)animated;
- (void)setModalShadowVisibility:(double)visibility animated:(BOOL)animated withDelay:(double)delay;
- (void)setContentMode:(long long)mode animated:(BOOL)animated;
- (void)setContentMode:(long long)mode animated:(BOOL)animated withDelay:(double)delay;
- (void)layoutSubviews;
- (void)didAuthenticate;
- (void)didTransact;
- (void)setFrontFaceExpanded:(BOOL)expanded animated:(BOOL)animated;
- (void)presentDiff:(id)diff completion:(id /* block */)completion;
- (void)updateValidityDisplay;
- (void)_updateLayerShadowAnimated:(BOOL)animated withDelay:(double)delay;
- (void)_updateLowEndLayerShadowAnimated:(BOOL)animated withDelay:(double)delay;
- (void)_updateHighEndLayerShadowAnimated:(BOOL)animated withDelay:(double)delay;
- (void)passcodeLockManager:(id)manager didReceivePasscodeSet:(BOOL)set;
- (void)passFaceViewExpandButtonTapped:(id)tapped;
- (void)_applyContentMode:(BOOL)mode;
- (long long)_frontFaceBackgroundModeForContentMode;
- (unsigned long long)_regionsForCurrentModes;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(double *)mode;
- (void)_updateFrontFaceSuppressedContent;
- (BOOL)isModallyPresented;
@end

#endif /* PKPassView_h */