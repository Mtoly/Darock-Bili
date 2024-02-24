//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef INIntent_MTAlarmIntent_h
#define INIntent_MTAlarmIntent_h
@import Foundation;

@interface INIntent (MTAlarmIntent)
/* class methods */
+ (id)mt_intentForAlarmCreate:(id)create;
+ (id)mt_intentForAlarmUpdate:(id)update;
+ (id)mt_intentForAlarmEnable:(id)enable;
+ (id)mt_intentForAlarmDisable:(id)disable;
+ (void)mt_deleteDonationsForAlarm:(id)alarm completion:(id /* block */)completion;
+ (id)mt_nanoAlarmBundleIDForAlarm:(id)alarm;

/* instance methods */
- (id)mt_initWithAlarm:(id)alarm verb:(id)verb;
@end

#endif /* INIntent_MTAlarmIntent_h */