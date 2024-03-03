//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKInviteAcceptResponse_h
#define GKInviteAcceptResponse_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSDictionary, NSNumber, NSString;

@interface GKInviteAcceptResponse : GKInternalRepresentation

@property (retain, nonatomic) NSDictionary *responsePlist;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSString *selfPseudonym;
@property (retain, nonatomic) NSNumber *transportVersionToUse;

/* class methods */
+ (id)secureCodedPropertyKeys;

/* instance methods */
@end

#endif /* GKInviteAcceptResponse_h */