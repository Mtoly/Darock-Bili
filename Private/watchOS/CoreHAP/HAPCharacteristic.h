//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPCharacteristic_h
#define HAPCharacteristic_h
@import Foundation;

#include "HMFObject.h"
#include "HAP2CharacteristicTupleValue-Protocol.h"
#include "HAPCharacteristicMetadata.h"
#include "HAPService.h"
#include "HMFMerging-Protocol.h"
#include "NSCopying-Protocol.h"

@class CBCharacteristic, NSData, NSDate, NSNumber, NSString;

@interface HAPCharacteristic : HMFObject<HAP2CharacteristicTupleValue, HMFMerging, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) CBCharacteristic *cbCharacteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSNumber *instanceID;
@property (weak, nonatomic) HAPService *service;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) BOOL eventNotificationsEnabled;
@property (copy, nonatomic) HAPCharacteristicMetadata *metadata;
@property (readonly, nonatomic) HAPCharacteristicMetadata *accessoryMetadata;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (nonatomic) BOOL shouldValidateValueAfterReading;
@property (readonly, nonatomic) BOOL implicitWriteWithResponse;
@property (copy, nonatomic) id value;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) BOOL supportsAdditionalAuthorizationData;
@property (readonly, nonatomic) BOOL supportsWriteWithResponse;
@property (nonatomic) BOOL prohibitCaching;
@property (readonly, nonatomic) BOOL supportsEventNotificationContext;
@property (retain, nonatomic) NSData *notificationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)hap2_shortTypeFromUUID:(id)uuid;

/* instance methods */
- (void)_updateMetadata:(id)metadata withProvidedMetadata:(id)metadata;
- (id)_generateValidMetadata:(id)metadata;
- (id)validateValue:(id)value outValue:(id *)value;
- (BOOL)hap2_mergeWithCharacteristic:(id)characteristic;
- (BOOL)hap2_canUseCachedValue;
- (void)setCBCharacteristic:(id)cbcharacteristic;
- (id)initWithType:(id)type instanceID:(id)id value:(id)value stateNumber:(id)number properties:(unsigned long long)properties eventNotificationsEnabled:(BOOL)enabled metadata:(id)metadata;
- (id)initWithType:(id)type instanceID:(id)id value:(id)value stateNumber:(id)number properties:(unsigned long long)properties eventNotificationsEnabled:(BOOL)enabled implicitWriteWithResponse:(BOOL)response metadata:(id)metadata;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToCharacteristic:(id)characteristic;
- (id)shortDescription;
- (id)propertiesDescription;
- (BOOL)shouldMergeObject:(id)object;
- (BOOL)mergeObject:(id)object;
- (BOOL)isWriteWithResponseImplicitlySupported;
@end

#endif /* HAPCharacteristic_h */