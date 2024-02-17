//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBDeviceMetadataEvent_h
#define BMPBDeviceMetadataEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface BMPBDeviceMetadataEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 platform; unsigned int x :1 rapidSecurityResponsePreReboot; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) BOOL hasPlatform;
@property (nonatomic) int platform;
@property (readonly, nonatomic) BOOL hasSupplementalBuild;
@property (retain, nonatomic) NSString *supplementalBuild;
@property (nonatomic) BOOL hasRapidSecurityResponsePreReboot;
@property (nonatomic) BOOL rapidSecurityResponsePreReboot;

/* instance methods */
- (id)platformAsString:(int)string;
- (int)StringAsPlatform:(id)platform;
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

#endif /* BMPBDeviceMetadataEvent_h */