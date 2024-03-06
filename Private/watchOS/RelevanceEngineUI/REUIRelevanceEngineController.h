//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUIRelevanceEngineController_h
#define REUIRelevanceEngineController_h
@import Foundation;

#include "RERelevanceEngineObserver-Protocol.h"
#include "REUITrainingContext.h"
#include "_REUIControllerTrainingContext.h"
#include "_REUIControllerTrainingContextDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, RERelevanceEngine, RERelevanceEnginePreferences;
@protocol REUIRelevanceEngineControllerDelegate;

@interface REUIRelevanceEngineController : NSObject<RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate> {
  /* instance variables */
  NSMutableDictionary *_sectionNameOrdering;
  NSMutableDictionary *_currentElementStates;
  struct { unsigned int x :1 implementsPerformBatchUpdate; unsigned int x :1 implementsReloadElement; unsigned int x :1 implementsRemoveElement; unsigned int x :1 implementsInsertElement; unsigned int x :1 implementsMoveElement; unsigned int x :1 implementsIndexPathVisibility; unsigned int x :1 implementsBeginRelevanceUpdate; unsigned int x :1 implementsFinishedRelevanceUpdate; unsigned int x :1 implementsIdentifierBasedReloadElement; } _delegateCallbacks;
  NSArray *_hiddenIndices;
  NSMutableSet *_hiddenBundleIdentifiers;
  NSMutableArray *_pendingOperations;
  RERelevanceEnginePreferences *_preferences;
  BOOL _isShowingContentElements;
  BOOL _performingBatch;
}

@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (readonly, nonatomic) RERelevanceEngine *engine;
@property (readonly, nonatomic) NSArray *sectionOrder;
@property (weak, nonatomic) NSObject<REUIRelevanceEngineControllerDelegate> *delegate;
@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (nonatomic) BOOL allowsLocationUse;
@property (nonatomic) BOOL wantsLiveDataSources;
@property (nonatomic) BOOL wantsIdealizedContent;
@property (readonly, nonatomic) REUITrainingContext *trainingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)elementAtIndexPathWasSelected:(id)selected;
- (void)elemenAtIndexPathDidDisplay:(id)display;
- (void)elementAtIndexPathDidEndDisplay:(id)display;
- (id)initWithRelevanceEngine:(id)engine;
- (id)initWithRelevanceEngine:(id)engine sectionOrder:(id)order;
- (void)dealloc;
- (id)_sectionAtIndex:(long long)index;
- (long long)_indexForSection:(id)section;
- (id)_sectionPathForIndexPath:(id)path;
- (id)_indexPathForSectionPath:(id)path;
- (id)_controllerIndexPathForEngineIndexPath:(id)path;
- (id)_engineIndexPathForControllerIndexPath:(id)path;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)index;
- (unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)index;
- (id)elementAtIndexPath:(id)path;
- (id)_elementAtIndexPath:(id)path;
- (id)contentAtIndexPath:(id)path;
- (id)indexPathForElementWithIdentifier:(id)identifier;
- (id)generateDiffableSnapshot;
- (id)_contentAtIndexPath:(id)path;
- (id)actionAtIndexPath:(id)path;
- (id)identifierForElementAtIndexPath:(id)path;
- (id)predictionForElementAtIndexPath:(id)path;
- (id)elementIdentifierAtIndexPath:(id)path;
- (id)_indexPathForElementWithIdentifier:(id)identifier;
- (id)metadataForElementWithIdentifier:(id)identifier;
- (BOOL)isDataSourceEnabled:(id)enabled;
- (void)setDataSource:(id)source enabled:(BOOL)enabled;
- (void)makeCurrent;
- (void)resignCurrent;
- (id)predictedContentForSectionAtIndex:(unsigned long long)index atDate:(id)date limit:(long long)limit;
- (id)predictedElementsForSectionAtIndex:(unsigned long long)index atDate:(id)date limit:(long long)limit;
- (void)_loadNewRelevanceEngine:(id)engine withCompletion:(id /* block */)completion;
- (id)_sectionSupportingNoContentElements;
- (BOOL)_sectionHasContent:(id)content;
- (id)_contentForElement:(id)element;
- (void)_enumerateEngineElementsInSection:(unsigned long long)section withOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)_enumerateEngineElementsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)_setElement:(id)element atIndexPath:(id)path hidden:(BOOL)hidden;
- (BOOL)_isElementHidden:(id)hidden;
- (void)_performOrEnqueueOperation:(id)operation;
- (void)_performBatchUpdateUsingBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)_performOperations:(id)operations toSection:(unsigned long long)section;
- (void)_updateMetrics;
- (void)relevanceEngine:(id)engine performBatchUpdateBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)relevanceEngine:(id)engine didReloadElement:(id)element atPath:(id)path;
- (void)relevanceEngine:(id)engine didRemoveElement:(id)element atPath:(id)path;
- (void)relevanceEngine:(id)engine didInsertElement:(id)element atPath:(id)path;
- (void)relevanceEngine:(id)engine didMoveElement:(id)element fromPath:(id)path toPath:(id)path;
- (BOOL)relevanceEngine:(id)engine isElementAtPathVisible:(id)visible;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)relevance;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)relevance;
- (id)elementsOrdered:(unsigned long long)ordered relativeToElement:(id)element;
- (BOOL)elementIsAvailable:(id)available;
- (id)interactionTypeForElement:(id)element;
@end

#endif /* REUIRelevanceEngineController_h */