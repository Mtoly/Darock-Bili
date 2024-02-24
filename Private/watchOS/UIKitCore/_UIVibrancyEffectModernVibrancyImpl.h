//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIVibrancyEffectModernVibrancyImpl_h
#define _UIVibrancyEffectModernVibrancyImpl_h
@import Foundation;

#include "_UIVibrancyEffectImpl.h"
#include "UIColor.h"

@class NSString;

@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {
  /* instance variables */
  NSString *_filterType;
  UIColor *_inputColor1;
  UIColor *_inputColor2;
  UIColor *_compositingColor;
  BOOL _inputReversed;
}

/* instance methods */
- (id)initWithFilter:(id)filter inputColor1:(id)color1 inputColor2:(id)color2 compositingColor:(id)color inputReversed:(BOOL)reversed;
- (id)implementationReplacingTintColor:(id)color;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)_updateEffectDescriptor:(id)descriptor forEnvironment:(id)environment usage:(long long)usage;
- (void)appendDescriptionTo:(id)to;
@end

#endif /* _UIVibrancyEffectModernVibrancyImpl_h */