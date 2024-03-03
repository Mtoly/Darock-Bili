//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef DefaultGKVoiceChatService_h
#define DefaultGKVoiceChatService_h
@import Foundation;

#include "GKViceroyVoiceChatService-Protocol.h"

@class GKVoiceChatServicePrivate;

@interface DefaultGKVoiceChatService : NSObject<GKViceroyVoiceChatService>

@property (retain, nonatomic) GKVoiceChatServicePrivate *service;
@property BOOL inputMeteringEnabled;
@property (readonly, nonatomic) float inputMeterLevel;
@property BOOL microphoneMuted;
@property BOOL outputMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property float remoteParticipantVolume;

/* instance methods */
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)acceptCallID:(long long)id error:(id *)error;
- (void)denyCallID:(long long)id;
- (id)getClient;
- (void)receivedData:(id)data fromParticipantID:(id)id;
- (void)setClient:(id)client gkVoiceChatService:(id)service;
- (BOOL)startVoiceChatWithParticipantID:(id)id error:(id *)error;
- (void)stopVoiceChatWithParticipantID:(id)id;
@end

#endif /* DefaultGKVoiceChatService_h */