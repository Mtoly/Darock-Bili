//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherViewThreeUpTransitionalLayout_h
#define CSLAppSwitcherViewThreeUpTransitionalLayout_h
@import Foundation;

#include "CSLAppSwitcherViewTransitionalLayout.h"
#include "CSLAppSwitcherPlatterViewLayoutAttributesAnimator.h"
#include "CSLAppSwitcherPlatterViewLayoutAttributesAnimatorDelegate-Protocol.h"
#include "CSLAppSwitcherViewThreeUpLayout.h"

@class NSString;

@interface CSLAppSwitcherViewThreeUpTransitionalLayout : CSLAppSwitcherViewTransitionalLayout<CSLAppSwitcherPlatterViewLayoutAttributesAnimatorDelegate> {
  /* instance variables */
  CSLAppSwitcherViewThreeUpLayout *_targetLayout;
  CSLAppSwitcherPlatterViewLayoutAttributesAnimator *_animator;
  id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLayout:(id)layout;
- (void)transitionWithCompletion:(id /* block */)completion;
- (id)transitionalLayout;
- (void)removeItemsAtIndexes:(id)indexes;
- (void)completeImmediately;
- (id)layoutAttributesForItemAtIndex:(unsigned long long)index withOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)layoutAttributesForAllItemsWithOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)layoutAttributesForVisibleItemsWithOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)layoutAttributesForAccessoryOfType:(unsigned long long)type withOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)platterViewLayoutAttributesAnimatorDidUpdate:(id)update;
- (void)platterViewLayoutAttributesAnimatorDidComplete:(id)complete;
@end

#endif /* CSLAppSwitcherViewThreeUpTransitionalLayout_h */