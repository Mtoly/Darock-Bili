//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRUpdateSyncedEndpointsMessage_h
#define MRUpdateSyncedEndpointsMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@class NSArray;

@interface MRUpdateSyncedEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;

/* instance methods */
- (id)initWithEndpoints:(id)endpoints endpointFeature:(unsigned int)feature;
- (unsigned long long)type;
@end

#endif /* MRUpdateSyncedEndpointsMessage_h */