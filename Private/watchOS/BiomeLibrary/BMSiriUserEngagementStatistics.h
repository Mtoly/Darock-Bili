//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriUserEngagementStatistics_h
#define BMSiriUserEngagementStatistics_h
@import Foundation;

#include "BMEventBase.h"
#include "BMSiriUserEngagementStatisticsAccumulatedAggregationStats.h"
#include "BMSiriUserEngagementStatisticsUserEngagementStatsMetadata.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSString;

@interface BMSiriUserEngagementStatistics : BMEventBase<BMStoreData>

@property (readonly, nonatomic) BMSiriUserEngagementStatisticsUserEngagementStatsMetadata *userEngagementStatsMetadata;
@property (readonly, nonatomic) BMSiriUserEngagementStatisticsAccumulatedAggregationStats *dailyAggregatedStats;
@property (readonly, nonatomic) NSArray *accumulatedAggregationStats;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithUserEngagementStatsMetadata:(id)metadata dailyAggregatedStats:(id)stats accumulatedAggregationStats:(id)stats;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_accumulatedAggregationStatsJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriUserEngagementStatistics_h */