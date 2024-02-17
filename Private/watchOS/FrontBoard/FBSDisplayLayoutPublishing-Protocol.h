//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplayLayoutPublishing_Protocol_h
#define FBSDisplayLayoutPublishing_Protocol_h
@import Foundation;

@protocol FBSDisplayLayoutPublishing <NSObject>

@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

/* instance methods */
- (id)addElement:(id)element;
- (id)transitionAssertionWithReason:(id)reason;
- (void)flush;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)isTransitioning;
@end

#endif /* FBSDisplayLayoutPublishing_Protocol_h */