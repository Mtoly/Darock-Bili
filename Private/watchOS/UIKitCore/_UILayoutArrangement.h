//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILayoutArrangement_h
#define _UILayoutArrangement_h
@import Foundation;

#include "UIView.h"
#include "_UILAConfigurationHistory.h"
#include "_UILAPropertySource-Protocol.h"
#include "_UILayoutSpacer.h"

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface _UILayoutArrangement : NSObject<_UILAPropertySource> {
  /* instance variables */
  NSMutableSet *_incomingItems;
  NSMutableSet *_outgoingItems;
  NSMutableSet *_hiddenItems;
  NSMutableSet *_newlyHiddenItems;
  NSMutableSet *_newlyUnhiddenItems;
  NSMutableArray *_canvasConnectionConstraints;
  BOOL _awaitingAnimationLayoutPass;
  _UILAConfigurationHistory *_unanimatedConfigurationTarget;
  NSMutableArray *_mutableItems;
  _UILayoutSpacer *_spanningLayoutGuide;
  _UILAConfigurationHistory *_configurationHistory;
}

@property (retain, nonatomic) NSMutableArray *_mutableItems;
@property (readonly, nonatomic) NSSet *_hiddenItems;
@property (readonly, nonatomic) NSSet *_incomingItems;
@property (readonly, nonatomic) NSSet *_outgoingItems;
@property (retain, nonatomic) _UILAConfigurationHistory *_unanimatedConfigurationTarget;
@property (readonly, nonatomic) BOOL _awaitingAnimationLayoutPass;
@property (readonly, nonatomic) NSObject<_UILAPropertySource> *_propertySource;
@property (readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide;
@property (readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (weak, nonatomic) UIView *canvas;
@property (nonatomic) long long axis;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)_configurationHistoryClass;

/* instance methods */
- (void)_createSpanningLayoutGuide;
- (id)_spanningLayoutGuideCreateIfNecessary;
- (BOOL)_allItemsHidden;
- (id)_identifierForSpanningLayoutGuide;
- (float)_spanningLayoutGuideFittingPriority;
- (BOOL)_spanningLayoutGuideAlwaysUsesFittingConstraint;
- (long long)_axisForSpanningLayoutGuide;
- (void)_createUnanimatedConfigurationTargetIfNecessary;
- (void)_registerAnimationRequest;
- (void)_trackChangesWithConfigBlock:(id /* block */)block;
- (void)_setAxis:(long long)axis notify:(BOOL)notify;
- (void)_setLayoutFillsCanvas:(BOOL)canvas notify:(BOOL)notify;
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(BOOL)filling notify:(BOOL)notify;
- (id)initWithItems:(id)items onAxis:(long long)axis;
- (id)initWithItems:(id)items;
- (id)init;
- (void)addItem:(id)item;
- (void)insertItem:(id)item atIndex:(unsigned long long)index;
- (void)removeItem:(id)item;
- (void)_visibilityParameterChangedForItem:(id)item;
- (BOOL)_itemWantsLayoutAsIfVisible:(id)visible;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (void)_hasBaselineChangedNotificationRequirementDidChange;
- (void)_invalidateBaselineConstraint:(id)constraint;
- (void)_hasBaselineChangedNotification:(id)notification;
- (id)_baselineDependentConstraints;
- (long long)_dimensionAttributeForCurrentAxis;
- (long long)_minAttributeForCanvasConnections;
- (long long)_centerAttributeForCanvasConnections;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)item;
- (BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)item;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)item;
- (void)_didEvaluateMultilineHeightForView:(id)view;
- (void)_respondToChangesWithIncomingItem:(id)item outgoingItem:(id)item newlyHiddenItem:(id)item newlyUnhiddenItem:(id)item;
- (BOOL)_hasStaleConfiguration;
- (void)_updateConfigurationHistory;
- (void)_clearCanvasConnectionConstraints;
- (void)_clearAllConstraintsArrays;
- (void)_updateArrangementConstraints;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)attribute;
- (id)_viewOrGuideForLocationAttribute:(long long)attribute;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)attribute;
- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (void)_removeSpanningLayoutGuide;
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)attribute;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_updateCanvasConnectionConstraintsIfNecessary;
- (void)_setUnanimatedConfigurationTarget:(id)target;
- (void)_setMutableItems:(id)items;
@end

#endif /* _UILayoutArrangement_h */