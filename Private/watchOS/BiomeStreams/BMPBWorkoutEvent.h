//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBWorkoutEvent_h
#define BMPBWorkoutEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface BMPBWorkoutEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 starting; } _has;
}

@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;

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

#endif /* BMPBWorkoutEvent_h */