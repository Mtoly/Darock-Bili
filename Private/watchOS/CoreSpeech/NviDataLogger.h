//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef NviDataLogger_h
#define NviDataLogger_h
@import Foundation;

#include "NSStreamDelegate-Protocol.h"

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject<NSStreamDelegate>

@property (retain, nonatomic) NSOutputStream *oStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilePath:(id)path appendHdr:(id)hdr;
- (void)logData:(id)data;
- (void)endRequest;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
@end

#endif /* NviDataLogger_h */