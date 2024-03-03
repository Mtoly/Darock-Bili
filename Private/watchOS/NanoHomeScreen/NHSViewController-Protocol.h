//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NHSViewController_Protocol_h
#define NHSViewController_Protocol_h
@import Foundation;

@protocol NHSViewController <NSObject>

@property (weak, nonatomic) NSObject<NHSViewControllerDelegate> *delegate;
@property (nonatomic) BOOL iconType;
@property (nonatomic) BOOL isForeground;
@property (readonly, nonatomic) NHSInteractiveSwipeTransitionInteraction *swipeTransitionInteraction;

/* instance methods */
- (void)startInteractiveClockToHomeTransitionPresenting:(BOOL)presenting;
- (void)animateClockToHomeTransitionPresenting:(BOOL)presenting;
- (void)moveToPresentedStateWithContentOffsetLocation:(unsigned long long)location;
- (void)prepareForLauncherToHomeTransition;
- (void)animateToLauncher;
- (void)animateFromLauncher;
- (void)prepareForTransitionInPPT;
- (void)prepareForTransitionToLauncherPPT;
@end

#endif /* NHSViewController_Protocol_h */