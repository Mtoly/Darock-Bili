//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHBacklightOSInterfaceProvider_h
#define BLSHBacklightOSInterfaceProvider_h
@import Foundation;

#include "BLSHBacklightOSTimerProvider.h"
#include "BLSCBDisplayStateDelegate-Protocol.h"
#include "BLSHBacklightOSInterfaceProviding-Protocol.h"
#include "BLSHBacklightPlatformProvider-Protocol.h"
#include "BLSHCriticalAssertProvider.h"
#include "BLSHSuppressionEvent.h"
#include "BLSHTransparentFlipbookProvider-Protocol.h"
#include "BLSHWatchdogDelegate-Protocol.h"
#include "BLSHWatchdogInvalidatable-Protocol.h"
#include "BLSHWatchdogProvider.h"
#include "BLSHWatchdogProviderDelegate-Protocol.h"
#include "CBDisplayStateClientDelegate-Protocol.h"

@class BSContinuousMachTimer, CBDisplayStateClient, CMSuppressionManager, NSDate, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface BLSHBacklightOSInterfaceProvider : BLSHBacklightOSTimerProvider<CBDisplayStateClientDelegate, BLSHTransparentFlipbookProvider, BLSHBacklightOSInterfaceProviding, BLSHWatchdogDelegate, BLSHWatchdogProviderDelegate> {
  /* instance variables */
  NSObject<BLSHBacklightPlatformProvider> *_platformProvider;
  BLSHWatchdogProvider *_watchdogProvider;
  BLSHCriticalAssertProvider *_criticalAssertProvider;
  NSMutableDictionary *_lock_sceneObservers;
  NSMutableSet *_lock_sceneWorkspaces;
  BLSHSuppressionEvent *_lock_lastSuppressionEvent;
  CBDisplayStateClient *_displayStateClient;
  CMSuppressionManager *_suppressionManager;
  BSContinuousMachTimer *_setCBDisplayModeTimer;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  long long _lock_cbDisplayMode;
  long long _lock_cbFlipbookState;
  BOOL _lock_suppressionServiceActive;
  BOOL _lock_caFlipbookEnabled;
  BOOL _lock_caFlipbookSuppressed;
  BOOL _lock_caBlanked;
  BOOL _lock_flipbookTransparent;
  BOOL _lock_kernelSpecialMode;
  BOOL _displayStateClientSupported;
  float _backlightDimmedFactor;
  NSObject<BLSHWatchdogInvalidatable> *_lock_watchdogTimer;
  unsigned long long _lock_watchdogType;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL flipbookTransparent;
@property (nonatomic) BOOL caBlanked;
@property (nonatomic) BOOL caFlipbookEnabled;
@property (nonatomic) BOOL caFlipbookSuppressed;
@property (nonatomic) BOOL kernelAlwaysOnMode;
@property (retain) NSObject<BLSCBDisplayStateDelegate> *cbDisplayStateDelegate;
@property (readonly, nonatomic) long long cbDisplayMode;
@property (readonly, nonatomic) BOOL supportsFlipbookState;
@property (readonly, nonatomic) long long cbFlipbookState;
@property (readonly, nonatomic) BOOL showingBlankingWindow;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryFrameLimit;
@property (readonly, nonatomic) unsigned long long flipbookDiagnosticHistoryMemoryLimit;
@property (readonly, nonatomic) BOOL suppressionServiceActive;
@property (readonly, nonatomic) BLSHSuppressionEvent *lastSuppressionEvent;
@property (readonly, nonatomic) unsigned long long mach_continuous_time;
@property (readonly, nonatomic) NSDate *now;
@property (nonatomic) double completionDelayForTesting;
@property (readonly, nonatomic) BOOL testing;

/* class methods */
+ (id)sharedProvider;
+ (void)setSharedProvider:(id)provider;

/* instance methods */
- (id)initWithPlatformProvider:(id)provider;
- (void)registerHandlersForService:(id)service;
- (void)registerSceneWorkspace:(id)workspace;
- (void)deregisterSceneWorkspace:(id)workspace;
- (id)sceneWithIdentityToken:(id)token;
- (BOOL)isCABlanked;
- (void)setCABlanked:(BOOL)cablanked;
- (BOOL)isCAFlipbookEnabled;
- (void)setCAFlipbookEnabled:(BOOL)enabled;
- (BOOL)isCAFlipbookSuppressed;
- (void)setCAFlipbookSuppressed:(BOOL)suppressed;
- (BOOL)isKernelAlwaysOnMode;
- (void)dispatchToMainQueueAfterSecondsDelay:(double)delay identifier:(id)identifier block:(id /* block */)block;
- (void)transitionToDisplayMode:(long long)mode withDuration:(double)duration;
- (void)switchToFlipbookState:(long long)state;
- (BOOL)isShowingBlankingWindow;
- (void)setShowingBlankingWindow:(BOOL)window fadeDuration:(double)duration;
- (void)willUnblank;
- (id)scheduleWatchdogWithDelegate:(id)delegate explanation:(id)explanation timeout:(double)timeout;
- (id)createPowerAssertionWithIdentifier:(id)identifier;
- (id)createSystemActivityAssertionWithIdentifier:(id)identifier;
- (id)createFlipbook;
- (id)systemSleepMonitor;
- (id)observeSignificantTimeChangeWithIdentifier:(id)identifier handler:(id /* block */)handler;
- (BOOL)isSuppressionServiceActive;
- (void)startSuppressionServiceWithHandler:(id /* block */)handler;
- (void)endSuppressionService;
- (void)didDetectSignificantUserInteraction;
- (id)addSceneObserver:(id)observer forSceneIdentityToken:(id)token;
- (id)removeSceneObserver:(id)observer forSceneIdentityToken:(id)token;
- (void)didCompleteTransitionToDisplayMode:(long long)mode withError:(id)error;
- (void)didCompleteSwitchToFlipbookState:(long long)state withError:(id)error;
- (BOOL)isFlipbookTransparent;
- (id)abortContext;
- (id)osInterfaceProvider;
- (id)identifier;
- (void)abortForWatchdog:(unsigned long long)watchdog payload:(void *)payload payloadSize:(unsigned int)size explanation:(id)explanation;
- (BOOL)panicForWatchdog:(id)watchdog;
- (void)writeTailspinForWatchdog:(id)watchdog completion:(id /* block */)completion;
- (BOOL)isTailspinAvailable;
- (void)setCBDisplayStateDelegate:(id)delegate;
@end

#endif /* BLSHBacklightOSInterfaceProvider_h */