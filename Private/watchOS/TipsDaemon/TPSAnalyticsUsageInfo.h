//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSAnalyticsUsageInfo_h
#define TPSAnalyticsUsageInfo_h
@import Foundation;

@class NSDate, NSPredicate, NSString, TPSContextualDuetEvent;

@interface TPSAnalyticsUsageInfo : NSObject

@property (nonatomic) BOOL overrideHoldout;
@property (retain, nonatomic) NSDate *firstShownDate;
@property (retain, nonatomic) NSDate *notifiedDate;
@property (retain, nonatomic) NSPredicate *usagePredicate;
@property (copy, nonatomic) TPSContextualDuetEvent *usageEvent;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long desiredOutcomeCount;

/* instance methods */
@end

#endif /* TPSAnalyticsUsageInfo_h */