//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATIDSMessageMetadata_h
#define CATIDSMessageMetadata_h
@import Foundation;

#include "CATDictionaryCodable-Protocol.h"

@class NSDictionary, NSUUID;

@interface CATIDSMessageMetadata : NSObject<CATDictionaryCodable>

@property (readonly, nonatomic) NSUUID *messageIdentifier;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) unsigned long long messagingVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

/* class methods */
+ (id)instanceWithDictionary:(id)dictionary;

/* instance methods */
- (id)initWithMessageIdentifier:(id)identifier messageType:(long long)type messagingVersion:(long long)version;
- (id)initWithMessageType:(long long)type;
@end

#endif /* CATIDSMessageMetadata_h */