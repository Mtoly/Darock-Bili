//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDActiveDataAggregator_h
#define HDActiveDataAggregator_h
@import Foundation;

#include "HDDataAggregator.h"

@class NSLock, NSMutableDictionary, _HKDelayedOperation;

@interface HDActiveDataAggregator : HDDataAggregator {
  /* instance variables */
  NSLock *_aggregationLock;
  NSMutableDictionary *_currentAggregationStates;
  _HKDelayedOperation *_delayedAggregationOperation;
}

/* instance methods */
- (id)initWithDataCollectionManager:(id)manager;
- (void)registerDataCollector:(id)collector state:(id)state;
- (void)unregisterDataCollector:(id)collector;
- (void)dataCollector:(id)collector didCollectSensorData:(id)data device:(id)device;
- (id)configurationForCollector:(id)collector;
- (BOOL)didPersistObjects:(id)objects lastDatum:(id)datum collector:(id)collector error:(id *)error;
- (double)aggregationIntervalForCollector:(id)collector;
- (Class)sensorDatumClass;
- (id)aggregateForState:(id)state collector:(id)collector device:(id)device requestedAggregationDate:(id)date mode:(long long)mode options:(unsigned long long)options error:(id *)error;
- (double)aggregationInterval;
- (void)requestAggregationThroughDate:(id)date mode:(long long)mode options:(unsigned long long)options completion:(id /* block */)completion;
- (void)recomputeCollectorConfiguration;
- (id)initialAggregationState;
@end

#endif /* HDActiveDataAggregator_h */