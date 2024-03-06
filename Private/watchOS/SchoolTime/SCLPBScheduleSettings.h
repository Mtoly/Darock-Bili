//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLPBScheduleSettings_h
#define SCLPBScheduleSettings_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface SCLPBScheduleSettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 version; unsigned int x :1 isEnabled; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSMutableArray *recurrences;

/* class methods */
+ (Class)recurrencesType;

/* instance methods */
- (void)clearRecurrences;
- (void)addRecurrences:(id)recurrences;
- (unsigned long long)recurrencesCount;
- (id)recurrencesAtIndex:(unsigned long long)index;
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

#endif /* SCLPBScheduleSettings_h */