//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton_h
#define _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton_h
@import Foundation;

#include "ACActivityQoSObservationXPCClient-Protocol.h"

@interface ActivityKit.(Singleton in _6DC02F3CDAFEFBE600E2E479E6146620) : NSObject<ACActivityQoSObservationXPCClient> { // (Swift)
  /* instance variables */
   queue;
   connection;
   serverStartupToken;
   _qosPublisher;
   _queue_qos;
   _queue_predicates;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)activityQoSDidChange:(id)change completion:(id /* block */)completion;
- (id)listenForActivityQoSWithActivityIdentifier:(id)identifier handler:(id /* block */)handler;
- (id)init;
@end

#endif /* _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton_h */