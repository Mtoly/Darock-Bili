//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBAVAsset_h
#define NTPBAVAsset_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface NTPBAVAsset : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 size; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasRemoteURL;
@property (retain, nonatomic) NSString *remoteURL;
@property (readonly, nonatomic) BOOL hasBookmark;
@property (retain, nonatomic) NSData *bookmark;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSMutableArray *contentKeyIdentifiers;

/* class methods */
+ (Class)contentKeyIdentifiersType;

/* instance methods */
- (void)dealloc;
- (void)clearContentKeyIdentifiers;
- (void)addContentKeyIdentifiers:(id)identifiers;
- (unsigned long long)contentKeyIdentifiersCount;
- (id)contentKeyIdentifiersAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBAVAsset_h */