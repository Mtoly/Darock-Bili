//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNEHelperClient_Protocol_h
#define HMDNEHelperClient_Protocol_h
@import Foundation;

#include "HMDNEHelperClient-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSArray, NSString;

@protocol HMDNEHelperClient <NSObject>
/* instance methods */
- (id)cacheCopyAppUUIDForSigningIdentifier:(id)identifier executablePath:(id)path;
- (id)cacheCopySigningIdentifierForProcessIdentifier:(id)identifier;
- (void)cacheClearUUIDs;
@end

#endif /* HMDNEHelperClient_Protocol_h */