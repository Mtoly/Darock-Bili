//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWakeGestureManager_h
#define CSLWakeGestureManager_h
@import Foundation;

#include "BLSBacklightStateObserving-Protocol.h"
#include "BLSHBacklightHostObserving-Protocol.h"
#include "BSDescriptionProviding-Protocol.h"
#include "CSLSWakeGestureMonitorDelegate-Protocol.h"
#include "CSLUIHIDLogger.h"
#include "CSLUIUserSpecifiedOrientation.h"
#include "SWSystemSleepObserver-Protocol.h"

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, CSLPIWakeGestureMonitor, NSString, NSTimer, SWPreventSystemSleepAssertion;
@protocol OS_dispatch_queue;

@interface CSLWakeGestureManager : NSObject<CSLSWakeGestureMonitorDelegate, SWSystemSleepObserver, BSDescriptionProviding, BLSBacklightStateObserving, BLSHBacklightHostObserving> {
  /* instance variables */
  BOOL _screenOn;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  SWPreventSystemSleepAssertion *_lock_preventSleepAssertion;
  unsigned long long _initialGestureTimeMS;
  unsigned long long _wakeGestureTimeMS;
  unsigned long long _sleepGestureTimeMS;
  unsigned long long _lastPossibleMachTime;
  unsigned long long _nightstandWakeGestureTimeMSContinuous[10];
  unsigned int _tickleCount;
  unsigned int _nightstandWakeCounter;
  BOOL _coreMotionWakeGesturesEnabled;
  BOOL _wakeGestureDisabledByPrefs;
  BOOL _wakeGestureDisabledByAssertion;
  BOOL _dynamicWakeGestureEnabledByPrefs;
  BOOL _dynamicWakeGestureEnabledByAssertion;
  BOOL _wakeGestureHasUnfilteredObservers;
  BOOL _wakeGestureHasUnfilteredObserversWhenScreenOff;
  BOOL _sleepGestureDisabledByPrefs;
  BOOL _sleepGestureDisabledByAssertion;
  BOOL _allowSleep;
  BOOL _processingWakeGesture;
  BOOL _processingSleepGesture;
  BOOL _gestureInNightstandMode;
  BOOL _coreMotionInNightstandMode;
  int _coreMotionNightstandModeConfig;
  CSLPIWakeGestureMonitor *_wakeGestureMonitor;
  unsigned long long _stateHandler;
  NSObject<OS_dispatch_queue> *_cmCallQueue;
  CSLUIHIDLogger *_analyticsLogger;
}

@property (retain, nonatomic) CSLUIUserSpecifiedOrientation *orientationSettings;
@property (retain, nonatomic) NSTimer *wakeGesturePreferenceLoggingTimer;
@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessDistantFutureConfiguration;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessRealConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)_wakeGestureEnabledDueToPrefsAndAssertions;
- (void)_startWakeGestureUpdates;
- (void)_updateCoreMotionWakeGesturesEnabled;
- (void)dealloc;
- (void)_setWakeGesturePreferenceLoggingTimer;
- (void)_wakeGesturePreferenceLoggingTimerFired:(id)fired;
- (void)_telemetryLogWakeGesturePreference;
- (void)_telemetryLogFullWakeRecognized;
- (void)_telemetryLogSleepRecognized;
- (void)_loadWakeGesturePreferences;
- (id)init;
- (void)_updateAttentionAwarenessClientToDistantFutureMode;
- (void)withLock:(id /* block */)lock;
- (void)wakeGestureManager:(id)manager didUpdateWakeGesture:(long long)gesture type:(long long)type detectedAt:(unsigned long long)at;
- (void)setCoreMotionNightStandModeEnabled:(BOOL)enabled;
- (void)setCoreMotionNightStandModeConfiguration:(long long)configuration;
- (void)_setCoreMotionNightStandMode:(BOOL)mode withConfiguration:(long long)configuration;
- (void)setCoreMotionAOTMode:(BOOL)aotmode;
- (void)forceWakeGesture;
- (void)_wakeGestureDetectedWithGestureTime:(unsigned long long)time state:(long long)state type:(long long)type;
- (BOOL)_stopProcessingWakeGesture;
- (void)forceSleepGesture;
- (void)_sleepGestureDetectedWithGestureTime:(unsigned long long)time state:(long long)state type:(long long)type;
- (void)systemSleepMonitor:(id)monitor sleepRequestedWithResult:(id /* block */)result;
- (void)backlight:(id)backlight didCompleteUpdateToState:(long long)state forEvent:(id)event;
- (void)backlight:(id)backlight didChangeAlwaysOnEnabled:(BOOL)enabled;
- (void)crownOrientationChanged;
- (void)wristOrientationChanged;
- (void)wakeGestureMonitor:(id)monitor nowHasUnfilteredObservers:(BOOL)observers includingWhenScreenOff:(BOOL)off;
- (void)disableWristLowerGestureForAssertions:(BOOL)assertions;
- (void)disableWristRaiseGestureForAssertions:(BOOL)assertions;
- (void)dynamicWristRaiseEnabledForAssertions:(BOOL)assertions;
- (void)withLock_logStartGestureTimeWithGestureTime:(unsigned long long)time state:(long long)state type:(long long)type;
- (id)_wakeGestureDate;
- (void)_logSleepGestureTimeWithGestureTime:(unsigned long long)time;
- (double)_sleepTimeInterval;
- (id)_sleepGestureDate;
- (void)_telemetryLogEndOfWakeWithWristLower:(BOOL)lower;
- (void)_telemetryLogSleepGestureBlocked;
- (void)_telemetryLogNightstandWakeWasIgnored:(BOOL)ignored;
@end

#endif /* CSLWakeGestureManager_h */