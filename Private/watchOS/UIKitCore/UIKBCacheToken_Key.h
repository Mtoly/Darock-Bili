//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBCacheToken_Key_h
#define UIKBCacheToken_Key_h
@import Foundation;

#include "UIKBCacheToken.h"

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {
  /* instance variables */
  union { struct { unsigned int x :6 idiom; unsigned int x :1 landscape; unsigned int x :1 split; unsigned int x :8 appearance; unsigned int x :8 rendering; unsigned int x :8 padding; } styling; int intValue; } _style;
  NSString *_cacheDisplayString;
  NSString *_cacheSecondaryDisplayString;
  NSString *_annotationString;
  int _displayTypeHint;
  int _displayRowHint;
  struct CGSize { double width; double height; } _size;
  int _state;
  unsigned long long _clipCorners;
  unsigned long long _groupNeighbors;
  BOOL _usesInsets;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _displayInsets;
}

/* class methods */
+ (id)tokenForKey:(id)key style:(struct { unsigned int x0 :6; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :8; })style;
+ (id)tokenForKey:(id)key style:(struct { unsigned int x0 :6; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :8; })style displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

/* instance methods */
- (id)_initWithKey:(id)key style:(struct { unsigned int x0 :6; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :8; })style displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (int)rowHint;
- (void)setRowHint:(int)hint;
- (int)displayHint;
- (void)setDisplayHint:(int)hint;
- (struct { unsigned int x0 :6; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :8; })styling;
- (void)setStyling:(struct { unsigned int x0 :6; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :8; })styling;
- (BOOL)hasKey;
- (void)annotateWithString:(id)string;
- (void)resetAnnotations;
- (void)annotateWithBool:(BOOL)bool;
- (void)annotateWithInt:(int)int;
- (id)_stringWithAdditionalValues:(id /* block */)values;
- (id)string;
- (id)stringForRenderFlags:(long long)flags lightKeyboard:(BOOL)keyboard;
@end

#endif /* UIKBCacheToken_Key_h */