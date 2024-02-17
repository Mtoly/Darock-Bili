//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIWorkoutDataProvider_h
#define FIUIWorkoutDataProvider_h
@import Foundation;

@class HKAnchoredObjectQuery, HKHealthStore, NSCalendar, NSDate, NSMutableArray, NSMutableDictionary;

@interface FIUIWorkoutDataProvider : NSObject {
  /* instance variables */
  HKHealthStore *_healthStore;
  NSMutableDictionary *_workoutsByDay;
  NSMutableArray *_updateHandlers;
  HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
  NSCalendar *_gregorianCalendar;
  NSCalendar *_currentCalendar;
  NSDate *_retryDate;
  BOOL _shouldSortAscending;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)initWithHealthStore:(id)store shouldSortAscending:(BOOL)ascending;
- (id)init;
- (void)_commonInit;
- (void)_timeZoneDidChange:(id)change;
- (void)dealloc;
- (BOOL)hasWorkouts;
- (id)workoutsForDay:(id)day;
- (id)allWorkouts;
- (void)startFetchingFromDate:(id)date;
- (void)stopFetching;
- (void)_fetchAllWorkoutsFromDate:(id)date;
- (void)addUpdateHandler:(id /* block */)handler;
- (void)_runUpdateHandlers;
- (void)_handleAddedSamples:(id)samples;
- (void)_handleRemovedObjects:(id)objects;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)date;
- (void)_retryQuery:(id)query;
@end

#endif /* FIUIWorkoutDataProvider_h */