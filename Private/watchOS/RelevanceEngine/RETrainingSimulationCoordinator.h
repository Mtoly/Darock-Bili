//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RETrainingSimulationCoordinator_h
#define RETrainingSimulationCoordinator_h
@import Foundation;

#include "RESingleton.h"
#include "REElementActionDelegate-Protocol.h"
#include "RETrainingSimulationServer.h"
#include "RETrainingSimulationServerInterface-Protocol.h"

@class NSMapTable, NSMutableDictionary, NSString;

@interface RETrainingSimulationCoordinator : RESingleton<REElementActionDelegate, RETrainingSimulationServerInterface> {
  /* instance variables */
  RETrainingSimulationServer *_server;
  NSMutableDictionary *_elementsAddedByEngine;
  NSMapTable *_actionCompletionBlocks;
}

@property BOOL isActivelyTraining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)prewarm;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (void)_relevanceEnginesDidChange;
- (id)_engineWithName:(id)name;
- (void)_accesssEngineWithName:(id)name completion:(id /* block */)completion;
- (id)_unavailableEngineWithNameError:(id)error;
- (void)relevanceEngine:(id)engine createElementFromDescription:(id)description completion:(id /* block */)completion;
- (void)relevanceEngine:(id)engine performCommand:(id)command withOptions:(id)options completion:(id /* block */)completion;
- (void)availableRelevanceEngines:(id /* block */)engines;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)engine completion:(id /* block */)completion;
- (void)fetchAllElementsInRelevanceEngine:(id)engine completion:(id /* block */)completion;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)engine completion:(id /* block */)completion;
- (void)relevanceEngine:(id)engine runActionOfElementWithDescription1:(id)description1 completion:(id /* block */)completion;
- (void)relevanceEngine:(id)engine encodedObjectAtPath:(id)path completion:(id /* block */)completion;
- (void)elementAction:(id)action didFinishTask:(BOOL)task;
- (void)elementAction:(id)action wantsToPerformTapActionForComplicationSlot:(id)slot;
- (void)elementAction:(id)action wantsViewControllerDisplayed:(id)displayed;
@end

#endif /* RETrainingSimulationCoordinator_h */