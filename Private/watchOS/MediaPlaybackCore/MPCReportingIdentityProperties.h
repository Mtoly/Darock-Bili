//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCReportingIdentityProperties_h
#define MPCReportingIdentityProperties_h
@import Foundation;

@class ICPlayActivityEnqueuerProperties, NSString;

@interface MPCReportingIdentityProperties : NSObject

@property (copy, nonatomic) NSString *householdID;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) BOOL hasSubscriptionPlaybackCapability;
@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;

/* instance methods */
@end

#endif /* MPCReportingIdentityProperties_h */