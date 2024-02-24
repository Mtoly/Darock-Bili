//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTodaySectionIdentifierToGroupTypes_h
#define NTPBTodaySectionIdentifierToGroupTypes_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable<NSCopying>

@property (retain, nonatomic) NSString *personalizationSectionIdentifier;
@property (readonly, nonatomic) unsigned long long groupTypesCount;
@property (readonly, nonatomic) int * groupTypes;

/* instance methods */
- (void)dealloc;
- (void)clearGroupTypes;
- (void)addGroupTypes:(int)types;
- (int)groupTypesAtIndex:(unsigned long long)index;
- (void)setGroupTypes:(int *)types count:(unsigned long long)count;
- (id)groupTypesAsString:(int)string;
- (int)StringAsGroupTypes:(id)types;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBTodaySectionIdentifierToGroupTypes_h */