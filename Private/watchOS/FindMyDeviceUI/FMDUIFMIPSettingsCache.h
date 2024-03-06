//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 136.1.1.0.0
//
#ifndef FMDUIFMIPSettingsCache_h
#define FMDUIFMIPSettingsCache_h
@import Foundation;

@interface FMDUIFMIPSettingsCache : NSObject

@property (nonatomic) BOOL fmipStateAvailable;
@property (nonatomic) unsigned long long fmipState;
@property (nonatomic) BOOL lowBatteryLocateStateAvailable;
@property (nonatomic) BOOL lowBatteryLocateEnabled;
@property (readonly, nonatomic) BOOL fmipEnabled;
@property (readonly, nonatomic) BOOL fmipStateChangeInProgress;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_loadLowBatteryState;
- (void)_loadFMIPState;
@end

#endif /* FMDUIFMIPSettingsCache_h */