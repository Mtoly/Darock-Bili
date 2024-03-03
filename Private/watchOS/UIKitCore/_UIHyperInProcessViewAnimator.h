//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHyperInProcessViewAnimator_h
#define _UIHyperInProcessViewAnimator_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UIViewSpringAnimationBehavior.h"
#include "UIViewSpringAnimationBehaviorDescribing-Protocol.h"
#include "_UIHyperAnimator-Protocol.h"
#include "_UIHyperAnimator_Internal-Protocol.h"
#include "_UIHyperInteractor.h"
#include "_UISpringParameters.h"

@class NSString;

@interface _UIHyperInProcessViewAnimator : NSObject<_UIHyperAnimator_Internal, _UIHyperAnimator, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) UIViewSpringAnimationBehavior *_springAnimationBehavior;
@property (retain, nonatomic) NSObject<UIViewSpringAnimationBehaviorDescribing> *_overrideSpringAnimationBehavior;
@property (copy, nonatomic) _UISpringParameters *_trackingSpringParameters;
@property (copy, nonatomic) _UISpringParameters *_nonTrackingSpringParameters;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (weak, nonatomic) _UIHyperInteractor *_interactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDimensions:(unsigned long long)dimensions;
- (void)_setTrackingSpringParameters:(id)parameters;
- (void)_setNonTrackingSpringParameters:(id)parameters;
- (void)_interactionBegan;
- (void)_interactionChanged;
- (void)_interactionEndedMutatingState:(id /* block */)state;
- (void)_animateWithParameters:(id)parameters animations:(id /* block */)animations;
- (void)_animateInteractive:(BOOL)interactive animations:(id /* block */)animations;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)_setInteractor:(id)interactor;
- (void)_setOverrideSpringAnimationBehavior:(id)behavior;
@end

#endif /* _UIHyperInProcessViewAnimator_h */