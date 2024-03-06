//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardInputManagerPolymorph_h
#define TIKeyboardInputManagerPolymorph_h
@import Foundation;

#include "TIKeyboardInputManagerWrapper.h"

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper
/* instance methods */
- (void)dealloc;
- (void)handleKeyboardState:(id)state;
- (void)setInputManagerForKeyboardState:(id)state;
- (void)setInputManagerForInputMode:(id)mode withKeyboardState:(id)state class:(Class)class;
- (void)handleKeyboardInput:(id)input keyboardState:(id)state completionHandler:(id /* block */)handler;
- (void)skipHitTestForTouchEvent:(id)event keyboardState:(id)state;
- (void)syncToKeyboardState:(id)state completionHandler:(id /* block */)handler;
@end

#endif /* TIKeyboardInputManagerPolymorph_h */