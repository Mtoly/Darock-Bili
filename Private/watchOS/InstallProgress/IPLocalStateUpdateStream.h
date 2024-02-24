//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPLocalStateUpdateStream_h
#define IPLocalStateUpdateStream_h
@import Foundation;

#include "IPLocalStateUpdateStreamSink.h"
#include "IPLocalStateUpdateStreamSource.h"
#include "IPStateUpdateStream-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IPLocalStateUpdateStream : NSObject<IPStateUpdateStream> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_asyncDeliveryQueue;
  IPLocalStateUpdateStreamSource *_source;
  IPLocalStateUpdateStreamSink *_sink;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSourceDeliveryQueue:(id)queue;
- (id)sink;
- (id)source;
- (void)sink:(id)sink sendMessage:(id)message;
@end

#endif /* IPLocalStateUpdateStream_h */