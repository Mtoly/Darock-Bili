//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSRawAudioInjectionProvider_h
#define CSRawAudioInjectionProvider_h
@import Foundation;

#include "CSAudioRecorder.h"

@class NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSRawAudioInjectionProvider : CSAudioRecorder

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *audioFeedTimer;
@property (nonatomic) struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } * fp;

/* class methods */
+ (void)createSharedAudioSession;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)setAudioSessionEventDelegate:(id)delegate;
- (void)setContext:(id)context completion:(id /* block */)completion;
- (BOOL)setCurrentContext:(id)context streamHandleId:(unsigned long long)id error:(id *)error;
- (BOOL)prepareAudioStreamRecord:(id)record recordDeviceIndicator:(id)indicator error:(id *)error;
- (BOOL)startAudioStreamWithOption:(id)option recordDeviceIndicator:(id)indicator error:(id *)error;
- (void)_readAudioBufferAndFeed;
- (BOOL)stopAudioStreamWithRecordDeviceIndicator:(id)indicator error:(id *)error;
- (BOOL)isRecordingWithRecordDeviceIndicator:(id)indicator;
- (id)recordRouteWithRecordDeviceIndicator:(id)indicator;
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)id recordDeviceIndicator:(id)indicator;
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)id recordDeviceIndicator:(id)indicator;
- (id)recordSettingsWithStreamHandleId:(unsigned long long)id;
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)id;
- (BOOL)isNarrowBandWithStreamHandleId:(unsigned long long)id;
- (BOOL)prewarmAudioSessionWithStreamHandleId:(unsigned long long)id error:(id *)error;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)reason streamHandleId:(unsigned long long)id error:(id *)error;
- (BOOL)deactivateAudioSession:(unsigned long long)session streamHandleId:(unsigned long long)id error:(id *)error;
- (BOOL)setRecordMode:(long long)mode streamHandleId:(unsigned long long)id error:(id *)error;
- (void)setDuckOthersOption:(BOOL)option;
- (BOOL)duckOthersOption;
- (id)getPlaybackRouteForStreamID:(unsigned long long)id;
- (BOOL)setAlertSoundFromURL:(id)url forType:(long long)type force:(BOOL)force;
- (BOOL)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)stream withAlertOverride:(long long)override;
- (BOOL)playAlertSoundForType:(long long)type recordDevideIndicator:(id)indicator;
- (unsigned long long)alertStartTime;
- (void)setMeteringEnabled:(BOOL)enabled;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned long long)channel;
- (float)averagePowerForChannel:(unsigned long long)channel;
- (BOOL)isSessionCurrentlyActivated;
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)indicator;
- (void)enableMiniDucking:(BOOL)ducking;
- (id)metrics;
- (void)configureAlertBehavior:(id)behavior audioStreamHandleId:(unsigned long long)id;
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)stream enable:(BOOL)enable;
@end

#endif /* CSRawAudioInjectionProvider_h */