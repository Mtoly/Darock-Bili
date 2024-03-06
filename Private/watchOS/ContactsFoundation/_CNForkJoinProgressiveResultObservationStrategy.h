//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNForkJoinProgressiveResultObservationStrategy_h
#define _CNForkJoinProgressiveResultObservationStrategy_h
@import Foundation;

#include "CNForkJoinResultReportingStrategy-Protocol.h"

@class NSArray, NSMutableIndexSet, NSString;

@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject<CNForkJoinResultReportingStrategy> {
  /* instance variables */
  NSArray *_results;
  unsigned long long _activeObservableIdx;
  NSMutableIndexSet *_finishedObservables;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity;
- (void)receiveResult:(id)result fromObservableAtIndex:(unsigned long long)index observer:(id)observer;
- (void)observableAtIndex:(unsigned long long)index didCompleteForObserver:(id)observer;
@end

#endif /* _CNForkJoinProgressiveResultObservationStrategy_h */