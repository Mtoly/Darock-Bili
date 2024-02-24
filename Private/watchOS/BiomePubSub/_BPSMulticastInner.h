//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BPSMulticastInner_h
#define _BPSMulticastInner_h
@import Foundation;

#include "BMBookmarkableSubscription.h"
#include "BPSCancellable-Protocol.h"
#include "BPSSubscriber-Protocol.h"
#include "BPSSubscriptionStatus.h"

@class NSString;

@interface _BPSMulticastInner : BMBookmarkableSubscription<BPSSubscriber, BPSCancellable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BPSSubscriptionStatus *_status;
}

@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDownstream:(id)downstream;
- (void)dealloc;
- (void)receiveSubscription:(id)subscription;
- (long long)receiveInput:(id)input;
- (void)requestDemand:(long long)demand;
- (void)receiveCompletion:(id)completion;
- (void)cancel;
- (id)upstreamSubscriptions;
@end

#endif /* _BPSMulticastInner_h */