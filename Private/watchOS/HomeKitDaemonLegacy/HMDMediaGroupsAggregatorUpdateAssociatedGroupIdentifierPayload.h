//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload_h
#define HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload_h
@import Foundation;

#include "HMFObject.h"
#include "HMMessageEncoding-Protocol.h"

@class NSString, NSUUID;

@interface HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload : HMFObject<HMMessageEncoding>

@property (readonly, copy) NSUUID *groupIdentifier;
@property (readonly, copy) NSUUID *associatedGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)messageName;

/* instance methods */
- (id)initWithGroupIdentifier:(id)identifier associatedGroupIdentifier:(id)identifier;
- (id)attributeDescriptions;
- (id)initWithPayload:(id)payload;
- (id)payloadCopy;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload_h */