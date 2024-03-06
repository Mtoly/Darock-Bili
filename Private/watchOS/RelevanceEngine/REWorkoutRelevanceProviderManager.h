//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REWorkoutRelevanceProviderManager_h
#define REWorkoutRelevanceProviderManager_h
@import Foundation;

#include "RERelevanceProviderManager.h"
#include "REPredictorObserver-Protocol.h"
#include "REWorkoutRelevanceProviderManagerProperties-Protocol.h"

@class NSDate, NSString;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager<REPredictorObserver, REWorkoutRelevanceProviderManagerProperties> {
  /* instance variables */
  NSDate *_lastWorkoutDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long state;

/* class methods */
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)_valueForProvider:(id)provider feature:(id)feature;
- (void)resume;
- (void)pause;
- (void)_prepareForUpdate;
- (void)predictorDidUpdate:(id)update;
@end

#endif /* REWorkoutRelevanceProviderManager_h */