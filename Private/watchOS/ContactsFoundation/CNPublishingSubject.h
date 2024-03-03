//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNPublishingSubject_h
#define CNPublishingSubject_h
@import Foundation;

#include "CNObservable.h"
#include "CNCancelable-Protocol.h"
#include "CNObservable.h"
#include "CNObservableContractEnforcement.h"
#include "CNObserver-Protocol.h"

@class NSMutableArray, NSString;

@interface CNPublishingSubject : CNObservable<CNObserver>

@property (readonly, nonatomic) CNObservable *observable;
@property (retain, nonatomic) NSObject<CNCancelable> *upstreamToken;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithObservable:(id)observable;
- (id)subscribe:(id)subscribe;
- (void)_addObserver:(id)observer;
- (void)_removeObserver:(id)observer;
- (id)_allObservers;
- (void)_subscribeToObservableIfNecessary;
- (void)observerDidReceiveResult:(id)result;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)error;
- (void)cleanUpAfterTermination;
@end

#endif /* CNPublishingSubject_h */