//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFMyriadGoodnessScoreEvaluator_h
#define AFMyriadGoodnessScoreEvaluator_h
@import Foundation;

#include "AFInstanceContext.h"
#include "AFMyriadInstrumentation.h"
#include "AFPreferences.h"
#include "AFSettingsConnection.h"
#include "AFSettingsDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AFMyriadGoodnessScoreEvaluator : NSObject<AFSettingsDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scoreEvaluationLock;
  unsigned char _myriadPlatformBias;
  unsigned char _mediaPlaybackBoost;
  BOOL _isRecentSiriBoostTrialEnabled;
  BOOL _isExponentialBoostDefined;
  double _recentSiriSecondDegreeCoefficient;
  double _recentSiriFirstDegreeCoefficient;
  double _recentSiriIntercept;
  AFInstanceContext *_deviceInstanceContext;
  unsigned long long _platformBiasAcquisitionState;
  AFPreferences *_pref;
  AFSettingsConnection *_settingsConnection;
  AFMyriadInstrumentation *_myriadInstrumentation;
  BOOL _isSpeakerEndpoint;
  NSString *_endpointModelName;
}

@property (readonly, nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDeviceInstanceContext:(id)context queue:(id)queue;
- (id)initWithDeviceInstanceContext:(id)context preferences:(id)preferences queue:(id)queue;
- (id)initWithDeviceInstanceContext:(id)context preferences:(id)preferences queue:(id)queue instrumentation:(id)instrumentation;
- (void)dealloc;
- (void)myriadTrialBoostsUpdated:(id)updated;
- (unsigned char)_getRecentBump:(double)bump ignoreAdjustedBoost:(BOOL)boost recentlyWonBySmallAmount:(BOOL)amount;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:(id)score lastActivationTime:(double)time mediaPlaybackInterruptedTime:(double)time ignoreAdjustedBoost:(BOOL)boost recentlyWonBySmallAmount:(BOOL)amount;
- (void)_updatePlatformBias:(unsigned char)bias;
- (void)_updateMediaPlaybackBoost:(unsigned char)boost;
- (void)_updateRecentSiriBoostTrialEnabled:(BOOL)enabled;
- (void)_updateRecentSiriExponentialBoostDefined:(BOOL)defined withSecondDegree:(double)degree andFirstDegree:(double)degree andIntercept:(double)intercept;
- (void)_updateSidekickBoosts:(id)boosts;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (id)_readSidekickBoostsFile:(id)file;
- (void)_setSidekickPlatformBiasForSpeaker:(BOOL)speaker model:(id)model;
- (unsigned long long)_findSidekickBoost:(id)boost isSpeaker:(BOOL)speaker model:(id)model;
- (void)_reloadTrialConfiguredBoostValues;
- (void)preheat;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)context;
- (void)_settingsConnectionDidDisconnect;
@end

#endif /* AFMyriadGoodnessScoreEvaluator_h */