//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPFetcherJSONResponse_h
#define LPFetcherJSONResponse_h
@import Foundation;

#include "LPFetcherResponse.h"
#include "LPFetcherURLResponse-Protocol.h"

@class NSString;

@interface LPFetcherJSONResponse : LPFetcherResponse<LPFetcherURLResponse>

@property (readonly, retain, nonatomic) id rootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isValidMIMEType:(id)mimetype;
+ (id)responseForFetcher:(id)fetcher withData:(id)data MIMEType:(id)mimetype;

/* instance methods */
- (id)initWithRootObject:(id)object fetcher:(id)fetcher;
@end

#endif /* LPFetcherJSONResponse_h */