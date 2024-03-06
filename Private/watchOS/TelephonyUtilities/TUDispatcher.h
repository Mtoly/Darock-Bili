//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUDispatcher_h
#define TUDispatcher_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface TUDispatcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* class methods */
+ (id)dispatcherWithIdentifier:(id)identifier;
+ (id)dispatcherWithQueue:(id)queue;

/* instance methods */
- (id)init;
- (void)dispatchSynchronousBlock:(id /* block */)block;
- (void)dispatchAsynchronousBlock:(id /* block */)block;
- (void)boostQualityOfService;
- (id)initWithIdentifier:(id)identifier;
- (id)initWithQueue:(id)queue;
- (id /* block */)qosUserInteractiveDispatchBlockForBlock:(id /* block */)block;
@end

#endif /* TUDispatcher_h */