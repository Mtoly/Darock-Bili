//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFActionBuilderFactory_Protocol_h
#define HFActionBuilderFactory_Protocol_h
@import Foundation;

@protocol HFActionBuilderFactory <NSObject>
/* instance methods */
- (BOOL)containsActions;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)home;
@end

#endif /* HFActionBuilderFactory_Protocol_h */