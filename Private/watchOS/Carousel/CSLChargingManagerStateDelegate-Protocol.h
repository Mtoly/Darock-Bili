//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLChargingManagerStateDelegate_Protocol_h
#define CSLChargingManagerStateDelegate_Protocol_h
@import Foundation;

@protocol CSLChargingManagerStateDelegate <NSObject>
/* instance methods */
- (void)beginObservingOrientationChanges;
- (void)alertWithoutOrientation:(BOOL)orientation;
- (void)offACBeforeAlertingForOrientation;
- (void)offACAfterAlertingForOrientation;
- (void)offAC;
- (BOOL)shouldObserveOrientationEvents;
- (void)turnBacklightOn;
- (void)turnBacklightOff;
- (BOOL)launchIsComplete;
- (BOOL)setupIsComplete;
- (void)transitionedFrom:(long long)from toState:(long long)state onEvent:(long long)event;
- (void)setEventTimeout:(double)timeout;
@end

#endif /* CSLChargingManagerStateDelegate_Protocol_h */