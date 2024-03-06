//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUICoordinatedBacklightAnimator_h
#define CSLUICoordinatedBacklightAnimator_h
@import Foundation;

#include "BLSHBacklightSceneHostEnvironment-Protocol.h"
#include "CSLUICoordinatedBacklightAnimatorDestinationProvider-Protocol.h"

@class BLSBacklightSceneVisualState, CSLPRFConcurrentObserverStore, NSDate, NSString, RBSProcessIdentity;

@interface CSLUICoordinatedBacklightAnimator : NSObject<BLSHBacklightSceneHostEnvironment> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CSLPRFConcurrentObserverStore *_observers;
}

@property BOOL alwaysOnEnabledForEnvironment;
@property BOOL liveUpdating;
@property BOOL unrestrictedFramerateUpdates;
@property BOOL displayBlanked;
@property (weak, nonatomic) NSObject<CSLUICoordinatedBacklightAnimatorDestinationProvider> *destinationProvider;
@property (readonly, copy) NSString *identifier;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly) BOOL clientHasDelegate;
@property (readonly) BOOL clientActive;
@property (readonly) BLSBacklightSceneVisualState *visualState;
@property (readonly) NSDate *presentationDate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (readonly) BOOL local;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_withLock:(id /* block */)lock;
- (BOOL)isClientActive;
- (BOOL)isAlwaysOnEnabledForEnvironment;
- (BOOL)isLiveUpdating;
- (BOOL)hasUnrestrictedFramerateUpdates;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)shouldNavigateForBacklightChangeEvent:(id)event;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)completion;
- (void)updateToVisualState:(id)state presentationDateSpecifier:(id)specifier animated:(BOOL)animated triggerEvent:(id)event touchTargetable:(BOOL)targetable sceneContentsUpdated:(id /* block */)updated performBacklightRamp:(id /* block */)ramp animationComplete:(id /* block */)complete;
- (void)requestDateSpecifiersForDateInterval:(id)interval previousPresentationDate:(id)date shouldReset:(BOOL)reset completion:(id /* block */)completion;
- (void)updateToDateSpecifier:(id)specifier sceneContentsUpdated:(id /* block */)updated;
- (void)clearPresentationDate;
- (void)deactivateClient;
- (void)clientDidRequestInvalidationForReason:(id)reason;
- (void)invalidateContentForReason:(id)reason;
- (void)reset;
- (void)willBeginRenderSession:(id)session;
- (void)willEndRenderSession:(id)session;
- (BOOL)isDisplayBlanked;
@end

#endif /* CSLUICoordinatedBacklightAnimator_h */