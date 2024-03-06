//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMPDislikesMediaEntity_h
#define SAMPDislikesMediaEntity_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@class NSString;

@interface SAMPDislikesMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;

/* class methods */
+ (id)dislikesMediaEntity;
+ (id)dislikesMediaEntityWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAMPDislikesMediaEntity_h */