//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryCategoryValue_h
#define HKCodableSummaryCategoryValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryCategoryValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryCategoryValue_1 { unsigned int x :1 categoryValue; unsigned int x :1 dateData; } _has;
}

@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) long long categoryValue;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HKCodableSummaryCategoryValue_h */