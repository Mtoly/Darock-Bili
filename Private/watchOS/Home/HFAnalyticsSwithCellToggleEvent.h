//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAnalyticsSwithCellToggleEvent_h
#define HFAnalyticsSwithCellToggleEvent_h
@import Foundation;

#include "HFAnalyticsEvent.h"

@class NSNumber, NSString;

@interface HFAnalyticsSwithCellToggleEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;
@property (retain, nonatomic) NSString *toggleTitle;
@property (retain, nonatomic) NSNumber *isOn;
@property (retain, nonatomic) NSString *processName;

/* instance methods */
- (id)initWithData:(id)data;
- (id)payload;
@end

#endif /* HFAnalyticsSwithCellToggleEvent_h */