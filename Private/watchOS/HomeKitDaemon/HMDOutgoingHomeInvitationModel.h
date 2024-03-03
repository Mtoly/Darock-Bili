//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDOutgoingHomeInvitationModel_h
#define HMDOutgoingHomeInvitationModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) NSDictionary *user;
@property (retain, @dynamic, nonatomic) NSUUID *idsInvitationUUID;
@property (retain, @dynamic, nonatomic) NSDate *dateSent;
@property (retain, @dynamic, nonatomic) NSNumber *announceAccessLevel;
@property (retain, @dynamic, nonatomic) NSString *accessCode;
@property (retain, @dynamic, nonatomic) NSData *shareToken;
@property (retain, @dynamic, nonatomic) NSUUID *pendingUserUUID;
@property (retain, @dynamic, nonatomic) NSNumber *invitationState;
@property (retain, @dynamic, nonatomic) NSDate *expiryDate;
@property (retain, @dynamic, nonatomic) NSString *messageIdentifier;
@property (retain, @dynamic, nonatomic) NSNumber *responseReceived;
@property (retain, @dynamic, nonatomic) NSString *inviteeDestinationAddress;
@property (retain, @dynamic, nonatomic) NSArray *operations;
@property (retain, @dynamic, nonatomic) NSArray *operationIdentifiers;

/* class methods */
+ (id)cd_parentReferenceName;
+ (Class)cd_entityClass;
+ (id)properties;

/* instance methods */
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
- (id)dependentUUIDs;
@end

#endif /* HMDOutgoingHomeInvitationModel_h */