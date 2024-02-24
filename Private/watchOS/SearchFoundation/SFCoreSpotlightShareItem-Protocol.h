//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFCoreSpotlightShareItem_Protocol_h
#define SFCoreSpotlightShareItem_Protocol_h
@import Foundation;

#include "SFShareItem.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCoreSpotlightShareItem-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol SFCoreSpotlightShareItem <SFShareItem>

@property (copy, nonatomic) NSString *shareProviderTypeIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *coreSpotlightIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;

@end

#endif /* SFCoreSpotlightShareItem_Protocol_h */