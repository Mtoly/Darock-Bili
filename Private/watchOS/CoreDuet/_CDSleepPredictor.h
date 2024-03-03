//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDSleepPredictor_h
#define _CDSleepPredictor_h
@import Foundation;

@interface _CDSleepPredictor : NSObject
/* class methods */
+ (id)array:(id)array reduce:(id /* block */)reduce withInitialValue:(id)value;
+ (id)indexSetFromUnionOf:(id)of;
+ (id)arrayWithObject:(id)object repeated:(unsigned long long)repeated;
+ (id)array:(id)array map:(id /* block */)map;
+ (id)array:(id)array filter:(id /* block */)filter;
+ (void)mutableArray:(id)array replaceObjectsAtIndexes:(id)indexes withObjectFromBlock:(id /* block */)block;
+ (id)generateActivityBitmapFor:(id)for unlockedIntervals:(id)intervals eventsAvailableInterval:(id)interval;
+ (id)predicateForInUseVaue;
+ (id)fetchDeviceInUseDateIntervalsFromStore:(id)store whichIntersectInterval:(id)interval;
+ (id)fetchFirstEventDateIntervalFromStore:(id)store forStream:(id)stream sortDateAscending:(BOOL)ascending intersectingInterval:(id)interval;
+ (id)gatherBitmapHistoryFromStore:(id)store forPeriod:(id)period;
+ (id)findSleepPeriodInDayStarting:(id)starting FromActivityProbabilities:(id)probabilities;
+ (id)findAllSleepPeriodsInDayStarting:(id)starting FromActivityProbabilities:(id)probabilities;
@end

#endif /* _CDSleepPredictor_h */