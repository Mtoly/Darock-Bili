//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaSession_h
#define HMDMediaSession_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeMessageReceiver-Protocol.h"
#include "HMDMediaEndpoint.h"
#include "HMDMediaSessionState.h"
#include "HMFDumpState-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class HMFTimer, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDMediaSession : HMFObject<HMFTimerDelegate, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HMDMediaEndpoint *endpoint;
@property (retain, nonatomic) HMDMediaSessionState *state;
@property (retain, nonatomic) NSMutableArray *setPlaybackStateCompletionHandlers;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL currentAccessorySession;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) HMFTimer *setPlaybackStateTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSArray *mediaProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

/* class methods */
+ (id)sessionForCurrentAccessoryWithSessionIdentifier:(id)identifier mediaProfile:(id)profile;
+ (id)logCategory;
+ (BOOL)hasMessageReceiverChildren;
+ (id)mediaPropertyMessageKeys;
+ (Class)mediaPropertyValueTypeWithMessageKey:(id)key;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithEndpoint:(id)endpoint mediaProfiles:(id)profiles state:(id)state;
- (id)initWithEndpoint:(id)endpoint mediaProfiles:(id)profiles state:(id)state;
- (id)_initWithMediaProfiles:(id)profiles state:(id)state;
- (void)dealloc;
- (id)logIdentifier;
- (BOOL)isEqual:(id)equal;
- (id)dumpState;
- (void)_getPlaybackStateWithCompletion:(id /* block */)completion;
- (void)_handleGetPlaybackState:(id)state;
- (void)handleRefreshPlayback:(id)playback;
- (void)handleMediaPlaybackStateNotification:(id)notification;
- (void)evaluateIfMediaPlaybackStateChanged:(id)changed;
- (void)_registerForSessionUpdates:(BOOL)updates;
- (void)_postNotificationOfMediaStateUpdate;
- (void)_postNotificationOfMediaStateUpdateWithRequestMessageInformation:(id)information;
- (void)_postNotificationOfMediaStateUpdateWithPayload:(id)payload;
- (void)updateWithResponses:(id)responses requestMessageInformation:(id)information;
- (void)_invokePendingSetPlaybackStateBlocksOfError:(id)error;
- (void)_queueSetPlaybackStateCompletion:(id /* block */)completion;
- (void)_setPlaybackState:(long long)state completion:(id /* block */)completion;
- (void)_handleSetPlayback:(id)playback;
- (void)handleSetPlayback:(id)playback;
- (void)_notifyClientsOfUpdatedVolume:(id)volume muted:(id)muted inResponseToMessage:(id)message;
- (void)handleMediaSessionSetAudioControl:(id)control;
- (void)_handleMediaSessionSetAudioControl:(id)control;
- (void)_handleMediaUpdateVolume:(id)volume;
- (void)_handleMediaUpdateMuted:(id)muted;
- (void)registerForSessionUpdates:(BOOL)updates;
- (void)updateEndpoint:(id)endpoint;
- (void)addMediaProfile:(id)profile;
- (void)removeMediaProfile:(id)profile;
- (void)readProperties:(id)properties completion:(id /* block */)completion;
- (void)writeProperties:(id)properties completion:(id /* block */)completion;
- (BOOL)isConnected;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)timerDidFire:(id)fire;
- (BOOL)isCurrentAccessorySession;
@end

#endif /* HMDMediaSession_h */