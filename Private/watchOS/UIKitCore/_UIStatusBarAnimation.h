//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarAnimation_h
#define _UIStatusBarAnimation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UIStatusBarAnimation.h"
#include "_UIStatusBarIdentifier.h"
#include "_UIStatusBarPrioritized-Protocol.h"

@class NSMutableArray, NSSet, NSString;

@interface _UIStatusBarAnimation : NSObject<NSCopying, _UIStatusBarPrioritized>

@property (retain, nonatomic) NSMutableArray *subAnimations;
@property (weak, nonatomic) _UIStatusBarAnimation *parentAnimation;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
@property (copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *exclusivityGroupIdentifier;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) NSSet *delayedItemIdentifiers;
@property (copy, nonatomic) NSSet *delayedDisplayItemPlacements;
@property (nonatomic) BOOL delaysAnimatingItems;
@property (nonatomic) BOOL delaysDependentItems;
@property (nonatomic) long long priority;

/* class methods */
+ (void)initialize;
+ (id)animationWithBlock:(id /* block */)block;
+ (void)prepareAnimations:(id)animations forStatusBar:(id)bar;
+ (void)_addAnimations:(id)animations toPreparingAnimations:(id)animations exclusiveAnimations:(id)animations visitedDisplayItemIdentifiers:(id)identifiers;
+ (void)_addAnimations:(id)animations toDispatchGroup:(id)group;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addCompletionHandler:(id /* block */)handler;
- (void)addTotalCompletionHandler:(id /* block */)handler;
- (void)_prepareForStatusBar:(id)bar preparingAnimations:(id)animations exclusiveAnimations:(id)animations;
- (void)performForStatusBar:(id)bar;
- (void)addTimeout:(double)timeout withHandler:(id /* block */)handler;
- (void)cancel;
- (void)addSubAnimation:(id)animation forDisplayItemWithIdentifier:(id)identifier;
- (id)_dependentItemIdentifiersEnabledOnly:(BOOL)only;
- (id)description;
- (BOOL)isEnabled;
@end

#endif /* _UIStatusBarAnimation_h */