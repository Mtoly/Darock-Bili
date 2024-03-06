//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCBaseURLConfiguration_h
#define FCBaseURLConfiguration_h
@import Foundation;

#include "FCCoreConfiguration-Protocol.h"

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) NSObject<FCCoreConfiguration> *coreConfiguration;

/* class methods */
+ (id)fairPlayBaseURLForConfiguration:(id)configuration;
+ (id)notificationsBaseURLForConfiguration:(id)configuration;
+ (id)newsletterBaseURLForConfiguration:(id)configuration;
+ (id)CAPIBaseURLForConfiguration:(id)configuration;
+ (id)searchBaseURLForConfiguration:(id)configuration;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)configuration;
+ (id)authTokenBaseURLForConfiguration:(id)configuration;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)configuration;
+ (id)liveActivityBaseURLForConfiguration:(id)configuration;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)configuration;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)configuration;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)configuration;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)configuration;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)configuration;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)configuration;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)configuration;
+ (BOOL)hasOverrideCAPIURL;
+ (id)overrideCAPIURLString;

/* instance methods */
- (id)initWithCoreConfiguration:(id)configuration;
- (id)fairPlayBaseURL;
- (id)notificationsBaseURL;
- (id)newsletterBaseURL;
- (id)CAPIBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)urlstring fallback:(undefined *)fallback;
- (id)baseURL:(id /* block */)url fallback:(undefined *)fallback;
@end

#endif /* FCBaseURLConfiguration_h */