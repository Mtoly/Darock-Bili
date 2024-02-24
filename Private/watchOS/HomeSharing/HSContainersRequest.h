//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSContainersRequest_h
#define HSContainersRequest_h
@import Foundation;

#include "HSRequest.h"

@interface HSContainersRequest : HSRequest

@property (nonatomic) BOOL shouldParseResponse;

/* class methods */
+ (id)requestWithDatabaseID:(unsigned int)id;

/* instance methods */
- (id)initWithAction:(id)action;
- (id)initWithDatabaseID:(unsigned int)id;
- (id)canonicalResponseForResponse:(id)response;
@end

#endif /* HSContainersRequest_h */