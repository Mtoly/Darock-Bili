//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef VCCompanionSyncOutgoingSession_h
#define VCCompanionSyncOutgoingSession_h
@import Foundation;

#include "VCCompanionSyncSession.h"

@class NSDictionary, NSMutableArray;
@protocol VCCompanionSyncOutgoingSessionDelegate;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession

@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSMutableArray *pendingChanges;
@property (readonly, nonatomic) NSMutableArray *sentChanges;
@property (readonly, nonatomic) NSMutableArray *syncedChanges;
@property (weak, @dynamic, nonatomic) NSObject<VCCompanionSyncOutgoingSessionDelegate> *delegate;
@property (readonly, nonatomic) double progress;

/* class methods */
+ (long long)direction;

/* instance methods */
- (id)initWithSYSession:(id)sysession service:(id)service syncDataHandlers:(id)handlers changeSet:(id)set metadata:(id)metadata;
- (unsigned int)syncSession:(id)session enqueueChanges:(id /* block */)changes error:(id *)error;
- (void)syncSession:(id)session successfullySynced:(id)synced;
@end

#endif /* VCCompanionSyncOutgoingSession_h */