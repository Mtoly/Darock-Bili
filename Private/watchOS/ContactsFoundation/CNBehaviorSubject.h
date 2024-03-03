//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNBehaviorSubject_h
#define CNBehaviorSubject_h
@import Foundation;

#include "CNObservable.h"
#include "CNObservableContractEnforcement.h"
#include "CNObservableEvent.h"
#include "CNObserver-Protocol.h"
#include "CNScheduler-Protocol.h"
#include "CNSchedulerProvider-Protocol.h"

@class NSMutableArray, NSString;

@interface CNBehaviorSubject : CNObservable<CNObserver>

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) CNObservableEvent *mostRecentEvent;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceLock;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSeed:(id)seed schedulerProvider:(id)provider;
- (id)resultWithResourceLock:(id /* block */)lock;
- (void)performWithResourceLock:(id /* block */)lock;
- (id)subscribe:(id)subscribe;
- (id)_addObserver:(id)observer;
- (void)_removeObserver:(id)observer;
- (void)observerDidReceiveResult:(id)result;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)error;
@end

#endif /* CNBehaviorSubject_h */