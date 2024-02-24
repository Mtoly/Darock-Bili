//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSXPCConnectionListener_h
#define BSXPCConnectionListener_h
@import Foundation;

@class NSString;
@protocol BSXPCConnectionListenerHandler, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCConnectionListener : NSObject {
  /* instance variables */
  NSObject<OS_xpc_object> *_connection;
  NSObject<BSXPCConnectionListenerHandler> *_handler;
  NSString *_service;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (void)dealloc;
- (id)description;
@end

#endif /* BSXPCConnectionListener_h */