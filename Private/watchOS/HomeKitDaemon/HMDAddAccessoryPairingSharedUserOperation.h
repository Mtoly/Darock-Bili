//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAddAccessoryPairingSharedUserOperation_h
#define HMDAddAccessoryPairingSharedUserOperation_h
@import Foundation;

#include "HMDAddAccessoryPairingOperation.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDAddAccessoryPairingSharedUserOperation : HMDAddAccessoryPairingOperation<HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithAccessory:(id)accessory forSharedUser:(id)user sharedUserPairingIdentity:(id)identity asOwner:(BOOL)owner asSharedAdmin:(BOOL)admin;
- (id)initWithAccessoryUUID:(id)uuid accessoryIdentifier:(id)identifier forSharedUser:(id)user sharedUserPairingIdentity:(id)identity asOwner:(BOOL)owner asSharedAdmin:(BOOL)admin homeUUIDWhereAccessoryWasPaired:(id)paired;
- (BOOL)mainWithError:(id *)error;
- (id)attributeDescriptions;
- (id)logIdentifier;
@end

#endif /* HMDAddAccessoryPairingSharedUserOperation_h */