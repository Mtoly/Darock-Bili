//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUProxyCall_h
#define TUProxyCall_h
@import Foundation;

#include "TUCall.h"
#include "AVCRemoteVideoClientDelegate-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUCallDisplayContext.h"
#include "TUCallProvider.h"
#include "TUCallScreenShareAttributes.h"
#include "TUCallServicesProxyCallActions-Protocol.h"
#include "TUHandle.h"
#include "TUParticipant.h"
#include "TURemoteVideoClient-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL, NSUUID;

@interface TUProxyCall : TUCall<AVCRemoteVideoClientDelegate, NSSecureCoding> {
  /* instance variables */
  BOOL _isReRing;
  BOOL _isSendingVideo;
  BOOL _uplinkMuted;
  BOOL _downlinkMuted;
  BOOL _requiresRemoteVideo;
  BOOL _mixesVoiceWithMedia;
  NSURL *_imageURL;
  TUCallScreenShareAttributes *_screenShareAttributes;
}

@property (retain, nonatomic) NSObject<TURemoteVideoClient> *localVideo;
@property (retain, nonatomic) NSObject<TURemoteVideoClient> *remoteVideo;
@property (retain, nonatomic) NSMutableDictionary *remoteVideoModeToLayer;
@property (retain, nonatomic) NSMutableDictionary *localVideoModeToLayer;
@property (nonatomic) struct CGSize { double x0; double x1; } remoteScreenPortraitAspectRatio;
@property (nonatomic) struct CGSize { double x0; double x1; } remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation;
@property (nonatomic) struct CGSize { double x0; double x1; } remoteAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } remoteVideoContentRect;
@property (nonatomic) long long cameraType;
@property (nonatomic) long long remoteCameraOrientation;
@property (weak, nonatomic) NSObject<TUCallServicesProxyCallActions> *proxyCallActionsDelegate;
@property (copy, nonatomic) TUParticipant *activeRemoteParticipant;
@property (retain, nonatomic) TUHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) int callStatus;
@property (nonatomic) long long serviceStatus;
@property (nonatomic) long long transmissionMode;
@property (nonatomic) BOOL accessoryButtonEventsEnabled;
@property (nonatomic) BOOL receivingTransmission;
@property (nonatomic) BOOL sendingTransmission;
@property (nonatomic) BOOL hostedOnCurrentDevice;
@property (retain, nonatomic) TUCallProvider *provider;
@property (retain, nonatomic) TUCallProvider *backingProvider;
@property (retain, nonatomic) TUCallProvider *displayProvider;
@property (nonatomic) BOOL outgoing;
@property (nonatomic) BOOL voicemail;
@property (copy, nonatomic) NSString *callerNameFromNetwork;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL blocked;
@property (nonatomic) BOOL emergency;
@property (nonatomic) BOOL failureExpected;
@property (nonatomic) BOOL international;
@property (nonatomic) BOOL domestic;
@property (nonatomic) BOOL sos;
@property (nonatomic) BOOL usingBaseband;
@property (nonatomic) BOOL supportsEmergencyFallback;
@property (nonatomic) int ttyType;
@property (nonatomic) BOOL supportsTTYWithVoice;
@property (nonatomic) long long bluetoothAudioFormat;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSString *audioMode;
@property (nonatomic) BOOL needsManualInCallSounds;
@property (copy, nonatomic) NSDictionary *endedReasonUserInfo;
@property (copy, nonatomic) NSString *endedErrorString;
@property (copy, nonatomic) NSString *endedReasonString;
@property (retain, nonatomic) NSData *localFrequency;
@property (retain, nonatomic) NSData *remoteFrequency;
@property (nonatomic) float remoteMeterLevel;
@property (nonatomic) float localMeterLevel;
@property (copy, nonatomic) NSUUID *callGroupUUID;
@property (nonatomic) int callRelaySupport;
@property (nonatomic) BOOL mediaStalled;
@property (nonatomic) BOOL videoDegraded;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL thirdPartyVideo;
@property (nonatomic) BOOL sharingScreen;
@property (nonatomic) long long videoStreamToken;
@property (nonatomic) long long inputAudioPowerSpectrumToken;
@property (nonatomic) long long outputAudioPowerSpectrumToken;
@property (retain, nonatomic) NSDictionary *providerContext;
@property (copy, nonatomic) TUCallDisplayContext *displayContext;
@property (copy, nonatomic) NSSet *remoteParticipantHandles;
@property (nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;
@property (nonatomic) BOOL remoteUplinkMuted;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL mutuallyExclusiveCall;
@property (nonatomic) BOOL wantsStagingArea;
@property (nonatomic) int originatingUIType;
@property (nonatomic) BOOL conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)proxyCallWithCall:(id)call;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUniqueProxyIdentifier:(id)identifier endpointOnCurrentDevice:(BOOL)device;
- (void)updateWithCall:(id)call;
- (void)disconnectWithReason:(int)reason;
- (void)playDTMFToneForKey:(unsigned char)key;
- (void)answerWithRequest:(id)request;
- (void)setDisconnectedReason:(int)reason;
- (void)setShouldSuppressRingtone:(BOOL)ringtone;
- (void)setWantsHoldMusic:(BOOL)music;
- (void)setEndpointOnCurrentDevice:(BOOL)device;
- (void)setScreening:(BOOL)screening;
- (void)setTransitionStatus:(int)status;
- (void)setUplinkMuted:(BOOL)muted;
- (void)setDownlinkMuted:(BOOL)muted;
- (void)setIsSendingVideo:(BOOL)video;
- (void)setMixesVoiceWithMedia:(BOOL)media;
- (void)setSharingScreen:(BOOL)screen attributes:(id)attributes;
- (void)updateProxyCallWithDaemon;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)sendHardPauseDigits;
- (int)avcRemoteVideoModeForMode:(long long)mode;
- (void)setRemoteVideoLayer:(id)layer forMode:(long long)mode;
- (void)setLocalVideoLayer:(id)layer forMode:(long long)mode;
- (void)setRequiresRemoteVideo:(BOOL)video;
- (void)_updateVideoCallAttributes:(id)attributes;
- (void)_updateVideoStreamToken:(long long)token;
- (void)_synchronizeLocalVideo;
- (void)_synchronizeRemoteVideo;
- (void)_createLocalVideoIfNecessary;
- (void)_createRemoteVideoIfNecessary;
- (struct CGSize { double x0; double x1; })remoteScreenAspectRatio;
- (struct CGSize { double x0; double x1; })localAspectRatioForOrientation:(long long)orientation;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x0; double x1; })size;
- (void)setRemoteVideoPresentationState:(int)state;
- (void)setScreenShareAttributes:(id)attributes;
- (void)remoteVideoClient:(id)client remoteVideoDidPause:(BOOL)pause;
- (void)remoteVideoClient:(id)client remoteMediaDidStall:(BOOL)stall;
- (void)remoteVideoClient:(id)client videoDidDegrade:(BOOL)degrade;
- (void)remoteVideoClient:(id)client remoteScreenAttributesDidChange:(id)change;
- (void)remoteVideoClient:(id)client remoteVideoAttributesDidChange:(id)change;
- (long long)_cameraTypeForVideoAttributeCamera:(int)camera;
- (long long)_orientationForVideoAttributesOrientation:(int)orientation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isReRing;
- (BOOL)isHostedOnCurrentDevice;
- (id)imageURL;
- (BOOL)isOutgoing;
- (BOOL)isVoicemail;
- (BOOL)isThirdPartyVideo;
- (BOOL)isSendingVideo;
- (BOOL)isMediaStalled;
- (BOOL)isVideoDegraded;
- (BOOL)isVideoPaused;
- (BOOL)isVideoMirrored;
- (BOOL)isBlocked;
- (BOOL)isEmergency;
- (BOOL)isFailureExpected;
- (BOOL)isInternational;
- (BOOL)isDomestic;
- (BOOL)isSOS;
- (void)setSOS:(BOOL)sos;
- (BOOL)isUsingBaseband;
- (BOOL)isUplinkMuted;
- (BOOL)isDownlinkMuted;
- (BOOL)requiresRemoteVideo;
- (BOOL)isRemoteUplinkMuted;
- (BOOL)isMutuallyExclusiveCall;
- (BOOL)isSharingScreen;
- (BOOL)isConversation;
- (id)screenShareAttributes;
- (BOOL)isReceivingTransmission;
- (BOOL)isSendingTransmission;
- (BOOL)mixesVoiceWithMedia;
@end

#endif /* TUProxyCall_h */