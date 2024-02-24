//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableChartInsulinDataSourceQueryData_h
#define HKCodableChartInsulinDataSourceQueryData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface HKCodableChartInsulinDataSourceQueryData : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *basalInsulinValues;
@property (retain, nonatomic) NSMutableArray *totalInsulinValues;

/* class methods */
+ (Class)basalInsulinValuesType;
+ (Class)totalInsulinValuesType;

/* instance methods */
- (void)clearBasalInsulinValues;
- (void)addBasalInsulinValues:(id)values;
- (unsigned long long)basalInsulinValuesCount;
- (id)basalInsulinValuesAtIndex:(unsigned long long)index;
- (void)clearTotalInsulinValues;
- (void)addTotalInsulinValues:(id)values;
- (unsigned long long)totalInsulinValuesCount;
- (id)totalInsulinValuesAtIndex:(unsigned long long)index;
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

#endif /* HKCodableChartInsulinDataSourceQueryData_h */