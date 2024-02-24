//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 47.1.0.0.0
//
#ifndef RPTComposer_Protocol_h
#define RPTComposer_Protocol_h
@import Foundation;

@protocol RPTComposer <NSObject, RCPEventStreamComposer, RPTPointerAndFingerInteroppingComposer>

@property (readonly, nonatomic) RPTInteractionOptions *interactionOptions;

/* class methods */
+ (id)composerWrapping:(id)wrapping withInteractionOptions:(id)options;
/* instance methods */
- (void)pointerSetAbsolutePosition:(struct CGPoint { double x0; double x1; })position;
- (void)pointerMoveToPoint:(struct CGPoint { double x0; double x1; })point duration:(double)duration;
- (void)overrideInteractionOptions:(id)options withEventActionsBlock:(id /* block */)block;
@end

#endif /* RPTComposer_Protocol_h */