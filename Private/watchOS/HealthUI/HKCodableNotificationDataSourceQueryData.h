//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableNotificationDataSourceQueryData_h
#define HKCodableNotificationDataSourceQueryData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface HKCodableNotificationDataSourceQueryData : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableNotificationDataSourceQueryData_1 { unsigned int x :1 count; unsigned int x :1 dataType; unsigned int x :1 latestSupportedVersion; unsigned int x :1 minimumSupportedVersion; } _has;
}

@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

/* class methods */
+ (Class)samplesType;

/* instance methods */
- (void)clearSamples;
- (void)addSamples:(id)samples;
- (unsigned long long)samplesCount;
- (id)samplesAtIndex:(unsigned long long)index;
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

#endif /* HKCodableNotificationDataSourceQueryData_h */