//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSleepPeriodSegmentArrayBuilder_h
#define HDSleepPeriodSegmentArrayBuilder_h
@import Foundation;

#include "HDProfile.h"
#include "HDSleepPeriodSegmentArrayBuilding-Protocol.h"
#include "HDStatisticsCollectionCalculatorSourceOrderProvider-Protocol.h"

@class HKCalendarCache, NSString;

@interface HDSleepPeriodSegmentArrayBuilder : NSObject<HDSleepPeriodSegmentArrayBuilding> {
  /* instance variables */
  HDProfile *_profile;
  long long _morningIndex;
  unsigned long long _options;
  HKCalendarCache *_calendarCache;
  NSObject<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initProfile:(id)profile morningIndex:(long long)index options:(unsigned long long)options calendarCache:(id)cache sourceOrderProvider:(id)provider;
- (id)sleepPeriodSegmentsFromSamples:(id)samples;
@end

#endif /* HDSleepPeriodSegmentArrayBuilder_h */