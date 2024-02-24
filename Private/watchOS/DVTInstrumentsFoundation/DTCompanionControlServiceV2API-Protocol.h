//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTCompanionControlServiceV2API_Protocol_h
#define DTCompanionControlServiceV2API_Protocol_h
@import Foundation;

@protocol DTCompanionControlServiceV2API <DTXAllowedRPC>
/* instance methods */
- (id)willInstallWatchAppForCompanionIdentifier:(id)identifier;
- (id)launchWatchAppForCompanionIdentifier:(id)identifier options:(id)options;
- (id)terminateWatchAppForCompanionIdentifier:(id)identifier options:(id)options;
@end

#endif /* DTCompanionControlServiceV2API_Protocol_h */