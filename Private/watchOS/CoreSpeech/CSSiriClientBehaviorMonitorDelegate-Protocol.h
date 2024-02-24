//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriClientBehaviorMonitorDelegate_Protocol_h
#define CSSiriClientBehaviorMonitorDelegate_Protocol_h
@import Foundation;

@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>
/* instance methods */
- (void)siriClientBehaviorMonitor:(id)monitor willStartStreamWithContext:(id)context option:(id)option;
- (void)siriClientBehaviorMonitor:(id)monitor didStartStreamWithContext:(id)context successfully:(BOOL)successfully option:(id)option withEventUUID:(id)uuid;
- (void)siriClientBehaviorMonitor:(id)monitor willStopStream:(id)stream reason:(unsigned long long)reason;
- (void)siriClientBehaviorMonitor:(id)monitor didStopStream:(id)stream withEventUUID:(id)uuid;
@optional
/* instance methods */
- (void)siriClientBehaviorMonitor:(id)monitor didChangedRecordState:(BOOL)state withEventUUID:(id)uuid withContext:(id)context;
- (void)siriClientBehaviorMonitor:(id)monitor fetchedSiriClientAudioStream:(id)stream successfully:(BOOL)successfully;
- (void)siriClientBehaviorMonitor:(id)monitor preparedSiriClientAudioStream:(id)stream successfully:(BOOL)successfully;
- (void)siriClientBehaviorMonitor:(id)monitor activatedAudioSessionWithReason:(unsigned long long)reason;
- (void)siriClientBehaviorMonitorReleasedAudioSession:(id)session;
- (void)siriClientBehaviorMonitor:(id)monitor willStartStreamWithContext:(id)context option:(id)option withEventUUID:(id)uuid;
- (void)siriClientBehaviorMonitor:(id)monitor willStopStream:(id)stream reason:(unsigned long long)reason withEventUUID:(id)uuid;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(id)updated;
@end

#endif /* CSSiriClientBehaviorMonitorDelegate_Protocol_h */