//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMNowPlayingStream_h
#define BMNowPlayingStream_h
@import Foundation;

#include "BMSourceStream-Protocol.h"
#include "BMStoreStream.h"
#include "BMSyncableStream-Protocol.h"
#include "BMTimeBasedPublisherStream-Protocol.h"

@class NSString;

@interface BMNowPlayingStream : NSObject<BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
  /* instance variables */
  BMStoreStream *_storeStream;
}

@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (id)init;
- (id)publisherFromStartTime:(double)time;
- (id)publisherWithStartTime:(id)time endTime:(id)time maxEvents:(id)events reversed:(BOOL)reversed;
- (id)publisherWithStartTime:(id)time endTime:(id)time maxEvents:(id)events lastN:(id)n reversed:(BOOL)reversed;
- (id)publisher;
- (id)publishersForRemoteDevices:(id)devices startTime:(double)time includeLocal:(BOOL)local pipeline:(id /* block */)pipeline;
- (id)publishersForRemoteDevices:(id)devices startTime:(id)time endTime:(id)time maxEvents:(id)events lastN:(id)n reversed:(BOOL)reversed includeLocal:(BOOL)local pipeline:(id /* block */)pipeline;
- (id)remoteDevices;
- (id)source;
@end

#endif /* BMNowPlayingStream_h */