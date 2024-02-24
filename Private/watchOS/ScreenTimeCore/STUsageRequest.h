//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STUsageRequest_h
#define STUsageRequest_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSNumber;

@interface STUsageRequest : NSManagedObject

@property (retain, @dynamic, nonatomic) NSDate *acknowledgedDate;
@property (retain, @dynamic, nonatomic) NSNumber *forUserDSID;
@property (retain, @dynamic, nonatomic) NSDate *requestedDate;
@property (@dynamic, nonatomic) BOOL isBackgroundTask;

/* class methods */
+ (id)fetchRequestForLocalUsageRequests;
+ (id)fetchRequestForUsageRequestsThatAreForRemoteUsers;
+ (id)fetchOrCreateUsageRequestForUserWithDSID:(id)dsid inContext:(id)context error:(id *)error;
+ (id)fetchOrCreateUsageRequestForUser:(id)user inContext:(id)context error:(id *)error;
+ (id)fetchOrCreateUsageRequestForLocalUserInContext:(id)context error:(id *)error;
+ (id)fetchOrCreateUsageRequestForRemoteUserWithDSID:(id)dsid inContext:(id)context error:(id *)error;
@end

#endif /* STUsageRequest_h */