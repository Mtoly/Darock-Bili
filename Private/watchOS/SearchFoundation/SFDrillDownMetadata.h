//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFDrillDownMetadata_h
#define SFDrillDownMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFCardMetadata.h"
#include "SFCardSearchMetadata.h"
#include "SFDrillDownMetadata-Protocol.h"
#include "SFEntitySearchMetadata.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface SFDrillDownMetadata : NSObject<SFDrillDownMetadata, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 cardOnlyMetadata; unsigned int x :1 entitySearchOnlyMetadata; unsigned int x :1 cardSearchMetadata; unsigned int x :1 entitySearchMetadata; } _has;
}

@property (copy, nonatomic) NSString *cardIdentifier;
@property (copy, nonatomic) NSArray *cardIdentifiers;
@property (copy, nonatomic) NSArray *cardDomains;
@property (copy, nonatomic) NSString *qtype;
@property (copy, nonatomic) NSString *viewConfigName;
@property (retain, nonatomic) SFCardMetadata *cardOnlyMetadata;
@property (retain, nonatomic) SFEntitySearchMetadata *entitySearchOnlyMetadata;
@property (retain, nonatomic) SFCardSearchMetadata *cardSearchMetadata;
@property (retain, nonatomic) SFEntitySearchMetadata *entitySearchMetadata;
@property (copy, nonatomic) NSString *debugParams;
@property (copy, nonatomic) NSString *params;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasCardOnlyMetadata;
- (BOOL)hasEntitySearchOnlyMetadata;
- (BOOL)hasCardSearchMetadata;
- (BOOL)hasEntitySearchMetadata;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFDrillDownMetadata_h */