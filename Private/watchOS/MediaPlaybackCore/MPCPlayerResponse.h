//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCPlayerResponse_h
#define MPCPlayerResponse_h
@import Foundation;

#include "MPResponse.h"
#include "MPCMediaRemoteController.h"
#include "MPCPlayerPath.h"
#include "MPCPlayerResponseBuilder-Protocol.h"
#include "MPCPlayerResponseTracklist.h"

@class ICMusicSubscriptionStatus, NSArray;
@protocol MPCVideoOutput, UIView<MPCVideoView;

@interface MPCPlayerResponse : MPResponse

@property (readonly, @dynamic, nonatomic) NSObject<MPCPlayerResponseBuilder> *builder;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly, nonatomic) ICMusicSubscriptionStatus *requestingUserSubscriptionStatus;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) UIView<MPCVideoView> *videoView;
@property (retain, nonatomic) NSObject<MPCVideoOutput> *videoOutput;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) BOOL sharedListeningSession;

/* class methods */
+ (id)builderProtocol;

/* instance methods */
- (id)initWithRequest:(id)request middleware:(id)middleware;
- (id)description;
- (id)pause;
- (id)play;
- (id)stop;
- (id)createSharedSessionWithIntentHandler:(id /* block */)handler;
- (id)createSharedSessionWithIdentity:(id)identity intentHandler:(id /* block */)handler;
- (id)leaveSession;
- (id)_stateDumpObject;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)command;
- (BOOL)isSharedListeningSession;
@end

#endif /* MPCPlayerResponse_h */