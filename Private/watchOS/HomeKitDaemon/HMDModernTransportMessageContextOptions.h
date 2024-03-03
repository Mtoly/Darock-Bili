//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDModernTransportMessageContextOptions_h
#define HMDModernTransportMessageContextOptions_h
@import Foundation;

@class NSSet, NSString;

@interface HMDModernTransportMessageContextOptions : NSObject

@property (readonly) NSSet *transports;
@property (readonly) double timeoutOverride;
@property (readonly) double timeToLive;
@property (readonly) BOOL expectsMultipleResponses;
@property (readonly) BOOL trackingDeviceReachability;
@property (readonly) NSString *requestStartTimeHeaderKey;
@property (readonly) NSString *timeToLiveHeaderKey;
@property (readonly) BOOL expectRapportSuccess;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;

/* instance methods */
- (id)initWithBuilder:(id)builder;
- (BOOL)isTrackingDeviceReachability;
@end

#endif /* HMDModernTransportMessageContextOptions_h */