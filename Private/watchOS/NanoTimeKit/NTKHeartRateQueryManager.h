//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKHeartRateQueryManager_h
#define NTKHeartRateQueryManager_h
@import Foundation;

@class HKAnchoredObjectQuery, HKHealthStore, HKHeartRateSummary, HKHeartRateSummaryQuery, HKQuantitySample, NSHashTable;
@protocol OS_dispatch_queue;

@interface NTKHeartRateQueryManager : NSObject {
  /* instance variables */
  BOOL _deviceIsLocked;
  NSObject<OS_dispatch_queue> *_healthQueue;
  NSObject<OS_dispatch_queue> *_sampleQueue;
  HKHealthStore *_healthStore;
  HKAnchoredObjectQuery *_heartRateQuery;
  HKHeartRateSummaryQuery *_heartRateSummaryQuery;
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) HKQuantitySample *latestHeartRateSample;
@property (nonatomic) BOOL checkedDefaults;
@property (readonly, nonatomic) HKHeartRateSummary *latestHeartRateSummary;
@property (readonly, nonatomic) BOOL canUseFutureSamples;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (void)_handleDeviceLockChange;
- (void)_queue_clearHeartRateSampleQueryWithError:(id)error;
- (void)_queue_clearHeartRateSummaryQueryWithError:(id)error;
- (void)_queue_startObservingHeartRateSummary;
- (void)_queue_stopObservingHeartRateSummary;
- (void)_notifyObserversOfLatestSummary;
- (void)_enumerateObserversUsingBlock:(id /* block */)block;
- (void)startObservingIfNeeded;
- (void)_stopObservingIfNeeded;
- (void)_startObserving;
- (void)_stopObserving;
- (BOOL)_alreadyObserving;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)_haveObservers;
- (void)_notifyObserversOfLatestSample;
- (void)_queue_startObservingHeartRate;
- (void)_queue_stopObservingHeartRate;
- (void)_queue_retrieveLatestHeartRateOnce;
- (void)_findLatestHeartRateSample:(id)sample;
- (void)setHeartRateSamples:(id)samples;
- (BOOL)hasCheckedDefaults;
@end

#endif /* NTKHeartRateQueryManager_h */