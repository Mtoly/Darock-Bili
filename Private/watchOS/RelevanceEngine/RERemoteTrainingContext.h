//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERemoteTrainingContext_h
#define RERemoteTrainingContext_h
@import Foundation;

#include "RETrainingContext.h"
#include "RERemoteTrainingServer.h"

@class NSMutableArray;

@interface RERemoteTrainingContext : RETrainingContext {
  /* instance variables */
  NSMutableArray *_trainingElements;
  NSMutableArray *_trainingEvents;
  NSMutableArray *_trainingInteractions;
  RERemoteTrainingServer *_trainingServer;
}

/* instance methods */
- (void)trainWithPredictionElement:(id)element isPositiveEvent:(BOOL)event interaction:(id)interaction;
- (void)_willPerformRemoteTraining;
- (void)_didPerformRemoteTraining;
- (void)_willSetAttributeForRemoteTraining;
- (void)_didSetAttributeForRemoteTraining;
- (id)initWithProcessName:(id)name;
- (void)trainWithElement:(id)element isPositiveEvent:(BOOL)event interaction:(id)interaction;
- (void)setAttribute:(id)attribute forKey:(id)key;
- (BOOL)isCurrent;
- (void)becomeCurrent;
- (void)_queue_enqueueRemoteTrainingForElement:(id)element isPositiveEvent:(BOOL)event interaction:(id)interaction;
- (void)_queue_performRemoteTraining;
- (void)_queue_setRemoteAttribute:(id)attribute forKey:(id)key;
@end

#endif /* RERemoteTrainingContext_h */