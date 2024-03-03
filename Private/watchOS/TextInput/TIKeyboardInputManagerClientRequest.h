//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardInputManagerClientRequest_h
#define TIKeyboardInputManagerClientRequest_h
@import Foundation;

@class NSInvocation;

@interface TIKeyboardInputManagerClientRequest : NSObject

@property (readonly, nonatomic) NSInvocation *invocation;
@property (nonatomic) unsigned long long errorCount;

/* class methods */
+ (id)untargetedInvocationWithInvocation:(id)invocation withCompletion:(BOOL)completion;

/* instance methods */
- (id)init;
- (id)initWithInvocation:(id)invocation;
@end

#endif /* TIKeyboardInputManagerClientRequest_h */