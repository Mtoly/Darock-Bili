//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMDaemon_h
#define BMDaemon_h
@import Foundation;

#include "BMComputeSource-Protocol.h"
#include "BMComputeSourceServer.h"
#include "BMComputeXPCPublisherClient.h"
#include "BMComputeXPCPublisherServer.h"
#include "BMComputeXPCPublisherServerDelegate-Protocol.h"
#include "BMComputeXPCPublisherStorage.h"

@class NSMutableDictionary, NSString;
@protocol BMViewEventReporter, OS_dispatch_queue;

@interface BMDaemon : NSObject<BMComputeXPCPublisherServerDelegate, BMComputeSource> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) BMComputeXPCPublisherStorage *systemBookmarkStorage;
@property (readonly, nonatomic) BMComputeXPCPublisherStorage *userBookmarkStorage;
@property (retain, nonatomic) NSMutableDictionary *activeSystemSubscriptionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *subscribedSystemStreams;
@property (retain, nonatomic) BMComputeXPCPublisherClient *systemStreamsPublisherClient;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BMComputeSourceServer *userSourceServer;
@property (readonly, nonatomic) BMComputeSourceServer *systemSourceServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *userPublisherServer;
@property (readonly, nonatomic) BMComputeXPCPublisherServer *systemPublisherServer;
@property (readonly, nonatomic) NSObject<BMViewEventReporter> *eventReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)prunePublicStreamsWithActivity:(id)activity;
+ (BOOL)atLeastOneSegmentFileInDirectory:(id)directory fileManager:(id)manager;
+ (void)pruneEmptyRemoteStreams:(id)streams;
+ (void)pruneRestrictedStreamsWithActivity:(id)activity;
+ (id)loadDKStreamNameToTTL;
+ (void)pruneRestrictedStreamsInDomain:(unsigned long long)domain activity:(id)activity;
+ (void)prunePrivateStreamDirectory:(id)directory maxAge:(double)age maxStreamSize:(unsigned long long)size activity:(id)activity;
+ (void)pruneFeatureStoreWithActivity:(id)activity;
+ (void)pruneAppInFocusPosterBoardEvents;
+ (void)pruneTemporaryFiles;
+ (void)pruneTemporaryFilesInDirectory:(id)directory;
+ (void)donateLaunchEvents;
+ (void)_donateDeviceMetadata;
+ (id)DSLValidator;
+ (id)new;
+ (BOOL)isAgent;
+ (BOOL)isAgentOrEmbedded;
+ (id)userComputeSourceServiceName;
+ (id)systemComputeSourceServiceName;
+ (id)userComputePublisherStreamName;
+ (id)systemComputePublisherStreamName;
+ (id)userComputePublisherServiceName;
+ (id)systemComputePublisherServiceName;
+ (id)biomedLaunchNotification;
+ (id)BiomeAgentLaunchNotification;
+ (void)registerXPCActivities;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue eventReporter:(id)reporter;
- (void)_subscribeStreamsForViews;
- (void)_subscribeSystemStream:(id)stream subscriptionIdentifier:(id)identifier useCase:(id)case;
- (void)publisherServer:(id)server didAddSubscription:(id)subscription;
- (void)publisherServer:(id)server didRemoveSubscription:(id)subscription;
- (id)_publisherServer;
- (id)_bookmarkStorage;
- (void)sendEventWithStreamIdentifier:(id)identifier timestamp:(id)timestamp storeEvent:(id)event;
- (void)eventsPrunedWithStreamIdentifier:(id)identifier reason:(unsigned long long)reason;
- (void)setUpNotificationHandler;
@end

#endif /* BMDaemon_h */