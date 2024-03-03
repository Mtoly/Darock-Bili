//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVLeafDataPayload_Protocol_h
#define CoreDAVLeafDataPayload_Protocol_h
@import Foundation;

#include "CoreDAVLeafDataPayload-Protocol.h"

@class NSArray, NSData, NSString, NSURL;

@protocol CoreDAVLeafDataPayload <NSObject>

@property (retain, nonatomic) NSURL *serverID;
@property (readonly, nonatomic) NSData *dataPayload;
@property (readonly, nonatomic) NSString *syncKey;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

/* instance methods */
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url withAccountInfoProvider:(id)provider;
@end

#endif /* CoreDAVLeafDataPayload_Protocol_h */