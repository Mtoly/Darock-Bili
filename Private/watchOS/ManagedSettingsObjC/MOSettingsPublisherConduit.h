//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOSettingsPublisherConduit_h
#define MOSettingsPublisherConduit_h
@import Foundation;

#include "MOSubscriber.h"
#include "MOSubscriber.h"
#include "MOSubscription-Protocol.h"

@class NSObject, NSSet, NSString, NSUUID;

@interface MOSettingsPublisherConduit : MOSubscriber<MOSubscription>

@property (readonly, weak, nonatomic) MOSubscriber *downstream;
@property (readonly, nonatomic) NSObject<MOSubscription> *upstream;
@property (readonly, nonatomic) NSSet *interestedGroups;
@property (readonly, nonatomic) id /* block */ startBlock;
@property (readonly, nonatomic) id /* block */ stopBlock;
@property (readonly, nonatomic) unsigned long long demand;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) NSObject *lock;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long currentDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDownstream:(id)downstream interestedGroups:(id)groups startBlock:(id /* block */)block stopBlock:(id /* block */)block;
- (void)dealloc;
- (void)receiveSubscription:(id)subscription;
- (unsigned long long)receiveInput:(id)input;
- (void)receiveCompletion:(id)completion;
- (void)requestDemand:(unsigned long long)demand;
- (void)cancel;
@end

#endif /* MOSettingsPublisherConduit_h */