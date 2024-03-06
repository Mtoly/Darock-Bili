//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSleepWidgetManager_h
#define HKSPSleepWidgetManager_h
@import Foundation;

#include "HKSPSleepStore.h"
#include "NAScheduler-Protocol.h"

@class NSArray;

@interface HKSPSleepWidgetManager : NSObject

@property (readonly, weak, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) NSArray *timelineControllers;
@property (readonly, nonatomic) NSObject<NAScheduler> *reloadScheduler;

/* class methods */
+ (id)defaultTimelineControllers;
+ (id)widgetBundleIdentifierForCurrentDevice;
+ (BOOL)_shouldForceWidgetReload:(unsigned long long)reload;
+ (id)_widgetReloadDescription:(unsigned long long)description;

/* instance methods */
- (id)initWithSleepStore:(id)store;
- (id)initWithSleepStore:(id)store timelineControllers:(id)controllers;
- (void)reloadWidgetsWithReason:(unsigned long long)reason;
@end

#endif /* HKSPSleepWidgetManager_h */