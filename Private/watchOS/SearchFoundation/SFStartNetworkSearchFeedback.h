//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFStartNetworkSearchFeedback_h
#define SFStartNetworkSearchFeedback_h
@import Foundation;

#include "SFStartSearchFeedback.h"
#include "SFIndexState.h"

@class NSDictionary, NSString;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) unsigned long long endpoint;
@property (nonatomic) unsigned long long rawRequestSize;
@property (nonatomic) unsigned long long compressedRequestSize;
@property (copy, nonatomic) NSString *experimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) SFIndexState *indexState;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInput:(id)input url:(id)url headers:(id)headers triggerEvent:(unsigned long long)event endpoint:(unsigned long long)endpoint;
- (id)initWithInput:(id)input url:(id)url headers:(id)headers triggerEvent:(unsigned long long)event endpoint:(unsigned long long)endpoint queryId:(unsigned long long)id;
- (id)initWithInput:(id)input url:(id)url headers:(id)headers triggerEvent:(unsigned long long)event endpoint:(unsigned long long)endpoint queryId:(unsigned long long)id experimentId:(id)id treatmentId:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFStartNetworkSearchFeedback_h */