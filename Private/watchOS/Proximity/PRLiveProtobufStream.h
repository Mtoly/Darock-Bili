//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRLiveProtobufStream_h
#define PRLiveProtobufStream_h
@import Foundation;

#include "PRProtobufClientProtocol-Protocol.h"

@class NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, PRLiveProtobufStreamDelegate;

@interface PRLiveProtobufStream : NSObject<PRProtobufClientProtocol> {
  /* instance variables */
  NSXPCConnection *_conn;
  NSUUID *_uniqueId;
}

@property (weak, nonatomic) NSObject<PRLiveProtobufStreamDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)invalidate;
- (id)server;
- (void)start;
- (void)stop;
- (void)consumeProtobufBytes:(id)bytes;
- (void)getUniqueClientIdentifier:(id /* block */)identifier;
@end

#endif /* PRLiveProtobufStream_h */