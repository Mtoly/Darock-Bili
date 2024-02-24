//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardInteractionProtocolBase_h
#define TIKeyboardInteractionProtocolBase_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject<NSSecureCoding>

@property (readonly, nonatomic) TIKeyboardState *keyboardState;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithKeyboardState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TIKeyboardInteractionProtocolBase_h */