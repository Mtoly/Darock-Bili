//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICPlayActivityCenter_h
#define ICPlayActivityCenter_h
@import Foundation;

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ICPlayActivityCenter : NSObject {
  /* instance variables */
  NSXPCConnection *_daemonPlayActivityControllerConnection;
  NSObject<OS_dispatch_queue> *_serialQueue;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)flushPendingPlayActivityEventsWithCompletionHandler:(id /* block */)handler;
- (void)recordPlayActivityEvents:(id)events shouldFlush:(BOOL)flush withCompletionHandler:(id /* block */)handler;
- (id)_daemonPlayActivityControllerConnection;
@end

#endif /* ICPlayActivityCenter_h */