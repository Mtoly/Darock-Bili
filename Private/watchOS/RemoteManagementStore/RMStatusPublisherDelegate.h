//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMStatusPublisherDelegate_h
#define RMStatusPublisherDelegate_h
@import Foundation;

@class RMSharedLock;
@protocol OS_dispatch_queue;

@interface RMStatusPublisherDelegate : NSObject {
  /* instance variables */
  RMSharedLock *_fetchLock;
}

@property (readonly, nonatomic) Class publisherClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *publisherQueue;

/* class methods */
+ (id)sharedDelegateWithPublisherClass:(Class)class;

/* instance methods */
- (id)initWithPublisherClass:(Class)class;
- (void)fetchStatusForStatusKeys:(id)keys store:(id)store completionHandler:(id /* block */)handler;
- (id)_filterSupportedStatus:(id)status store:(id)store unsupported:(id)unsupported;
@end

#endif /* RMStatusPublisherDelegate_h */