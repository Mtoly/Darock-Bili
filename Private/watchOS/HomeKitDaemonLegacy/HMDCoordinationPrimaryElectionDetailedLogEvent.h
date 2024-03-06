//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoordinationPrimaryElectionDetailedLogEvent_h
#define HMDCoordinationPrimaryElectionDetailedLogEvent_h
@import Foundation;

#include "HMDCoordinationPrimaryElectionLogEvent.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDCoordinationPrimaryElectionDetailedLogEvent : HMDCoordinationPrimaryElectionLogEvent<HMMCoreAnalyticsLogging>

@property (readonly) unsigned long long electionTriggerReason;
@property (readonly) unsigned long long confirmationCriteria;
@property (readonly) BOOL meshAndPrimaryCandidateCountEqual;
@property (readonly) BOOL previousPrimaryInMesh;
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
- (id)initWithIsPrimary:(BOOL)primary didChangePrimary:(BOOL)primary electionTriggerReason:(unsigned long long)reason confirmationCriteria:(unsigned long long)criteria meshAndPrimaryCandidateCountEqual:(BOOL)equal previousPrimaryInMesh:(BOOL)mesh;
@end

#endif /* HMDCoordinationPrimaryElectionDetailedLogEvent_h */