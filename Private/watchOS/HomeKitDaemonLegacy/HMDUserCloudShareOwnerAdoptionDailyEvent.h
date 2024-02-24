//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserCloudShareOwnerAdoptionDailyEvent_h
#define HMDUserCloudShareOwnerAdoptionDailyEvent_h
@import Foundation;

#include "HMDCloudShareTrustManagerLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSUUID;

@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent<HMMCoreAnalyticsLogging>

@property (readonly, copy) NSNumber *configureState;
@property (readonly, copy) NSNumber *isPrimaryResident;
@property (readonly, copy) NSNumber *hasSharedUser;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted;
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability;
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant;
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted;
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigureState:(long long)state isPrimaryResident:(BOOL)resident trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })counts;
@end

#endif /* HMDUserCloudShareOwnerAdoptionDailyEvent_h */