//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMActivityManager_h
#define SMActivityManager_h
@import Foundation;

@interface SMActivityManager : NSObject
/* class methods */
+ (void)startActivity;
+ (void)updateActivityWithState:(id)state;
+ (void)endActivities;
@end

#endif /* SMActivityManager_h */