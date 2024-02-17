//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCAssistantAnalyticsEventConsumer_h
#define MPCAssistantAnalyticsEventConsumer_h
@import Foundation;

#include "MPCPlaybackEngine.h"
#include "MPCPlaybackEngineEventConsumer-Protocol.h"
#include "MPCPlaybackEngineEventStreamSubscription-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MPCAssistantAnalyticsEventConsumer : NSObject<MPCPlaybackEngineEventConsumer> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_eventQueue;
  NSString *_lastSiriReferenceIdentifierForPlaybackStart;
}

@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithPlaybackEngine:(id)engine;
- (void)subscribeToEventStream:(id)stream;
- (void)unsubscribeFromEventStream:(id)stream;
- (void)_handleAssetLoadEnd:(id)end cursor:(id)cursor;
- (id)_validateAndBuildContextWithEvent:(id)event;
@end

#endif /* MPCAssistantAnalyticsEventConsumer_h */