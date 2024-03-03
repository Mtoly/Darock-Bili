//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef BSServiceDispatchingQueue_Protocol_h
#define BSServiceDispatchingQueue_Protocol_h
@import Foundation;

@protocol BSServiceDispatchingQueue <NSObject>
/* instance methods */
- (void)assertBarrierOnQueue;
- (id)backingQueueIfExists;
- (void)performAsync:(id /* block */)async;
- (void)performAsync:(id /* block */)async withHandoff:(id)handoff;
@end

#endif /* BSServiceDispatchingQueue_Protocol_h */