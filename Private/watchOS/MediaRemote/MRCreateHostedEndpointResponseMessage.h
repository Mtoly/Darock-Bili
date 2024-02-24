//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRCreateHostedEndpointResponseMessage_h
#define MRCreateHostedEndpointResponseMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSString;

@interface MRCreateHostedEndpointResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *groupUID;

/* instance methods */
- (id)initWithGroupUID:(id)uid;
- (unsigned long long)type;
@end

#endif /* MRCreateHostedEndpointResponseMessage_h */