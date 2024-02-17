//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBNoUserAction_h
#define NTPBNoUserAction_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *visibleViews;

/* class methods */
+ (Class)visibleViewsType;

/* instance methods */
- (void)clearVisibleViews;
- (void)addVisibleViews:(id)views;
- (unsigned long long)visibleViewsCount;
- (id)visibleViewsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBNoUserAction_h */