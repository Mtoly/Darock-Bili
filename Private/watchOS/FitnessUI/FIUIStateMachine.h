//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIStateMachine_h
#define FIUIStateMachine_h
@import Foundation;

#include "FIUIState.h"

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface FIUIStateMachine : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableSet *_states;
  FIUIState *_state;
  FIUIState *_initialState;
  BOOL _handlingEvent;
  NSMutableArray *_pendingEvents;
  NSString *_queueKey;
  NSMutableArray *_transitionalEvents;
  NSMutableSet *_parentStates;
}

@property long long pendingEvent;
@property (retain, nonatomic) NSString *label;
@property (copy) id /* block */ errorHandler;
@property (copy) id /* block */ diagnosticHandler;
@property (copy) id /* block */ transitionalEventFilter;

/* instance methods */
- (id)initWithLabel:(id)label queue:(id)queue;
- (void)dealloc;
- (void)event:(long long)event;
- (void)eventAsync:(long long)async;
- (id)queue;
- (void)_queue_processEvent:(long long)event;
- (void)_queue_handleEvents;
- (void)_queue_setInitialStateIfNeeded:(id)needed;
- (id)state;
- (void)addState:(id)state;
- (void)addStates:(id)states;
- (id)description;
- (id)graphDescription;
- (void)export;
- (void)addChildStates:(id)states toState:(id)state withEntryState:(id)state;
@end

#endif /* FIUIStateMachine_h */