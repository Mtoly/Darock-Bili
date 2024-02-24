//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCSharedListeningEventParticipant_h
#define MPCSharedListeningEventParticipant_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, NSUUID;

@interface MPCSharedListeningEventParticipant : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSUUID *sharedListeningIdentifier;
@property (readonly, copy, nonatomic) NSString *externalIdentifier;

/* class methods */
+ (id)participantWithSharedListeningIdentifier:(id)identifier externalIdentifier:(id)identifier;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MPCSharedListeningEventParticipant_h */