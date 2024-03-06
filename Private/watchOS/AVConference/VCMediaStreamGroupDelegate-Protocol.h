//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaStreamGroupDelegate_Protocol_h
#define VCMediaStreamGroupDelegate_Protocol_h
@import Foundation;

@protocol VCMediaStreamGroupDelegate <NSObject>
/* instance methods */
- (void)streamGroup:(id)group didChangeMediaPriority:(unsigned char)priority;
- (void)streamGroup:(id)group didChangePlayoutRTPTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })rtptime;
- (void)didChangeSendingStreamsForStreamGroup:(id)group;
- (void)didMediaDecryptionTimeOutForStreamGroup:(id)group;
- (void)streamGroup:(id)group didRemoteEnableChange:(BOOL)change;
- (void)streamGroup:(id)group didRemotePauseChange:(BOOL)change;
@optional
/* instance methods */
- (void)didReceiveFirstFrameForStreamGroup:(id)group;
- (void)streamGroup:(id)group didSwitchFromStreamID:(unsigned short)id toStreamID:(unsigned short)id;
- (void)didChangeReceivingStreamsForStreamGroup:(id)group;
- (void)didChangeActualNetworkBitrateForStreamGroup:(id)group;
- (void)didDecryptionTimeOutForMKMRecoveryForStreamGroup:(id)group;
- (void)streamGroup:(id)group didRequestRedundancy:(BOOL)redundancy;
- (void)streamGroup:(id)group requestKeyFrameGenerationWithStreamID:(unsigned short)id firType:(int)type;
- (void)streamGroup:(id)group didSuspendStreams:(BOOL)streams;
- (void)streamGroup:(id)group remoteMediaStalled:(BOOL)stalled duration:(double)duration;
- (void)streamGroup:(id)group didChangeState:(unsigned int)state;
- (void)streamGroup:(id)group didReceiveFlushRequestWithPayloads:(id)payloads;
@end

#endif /* VCMediaStreamGroupDelegate_Protocol_h */