//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPStateUpdateMessage_h
#define IPStateUpdateMessage_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class LSApplicationIdentity;

@interface IPStateUpdateMessage : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) LSApplicationIdentity *identity;

/* instance methods */
- (id)initWithType:(unsigned long long)type identity:(id)identity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)XPCDictionaryRepresentation;
- (id)initWithXPCDictionaryRepresentation:(id)representation error:(id *)error;
@end

#endif /* IPStateUpdateMessage_h */