//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNotificationRegistryCoreDataAdapter_h
#define HMDNotificationRegistryCoreDataAdapter_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHome.h"
#include "HMFLogging-Protocol.h"

@class NSSet, NSString;

@interface HMDNotificationRegistryCoreDataAdapter : HMFObject<HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly, copy) NSSet *characteristicRegistrations;
@property (readonly) NSSet *mediaRegistrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home;
- (id)_fetchMKFUserWithUUID:(id)uuid context:(id)context;
- (id)_fetchMKFHAPAccessoryWithUUID:(id)uuid context:(id)context;
- (BOOL)_deleteAllRegistrationsWithEntityName:(id)name withHomeKeypath:(id)keypath hmcContext:(id)context;
- (BOOL)_deleteAllCharacteristicRegistrationsWithContext:(id)context;
- (BOOL)_deleteAllRegistrationsForCharacteristicIIDs:(id)iids withAccessoryUUID:(id)uuid hmcContext:(id)context;
- (id)_requestToFetchMKFRegistrationsWithMediaProfileUUID:(id)uuid withMediaProperty:(id)property context:(id)context;
- (id)_fetchEnabledMKFRegistrationsForMediaProfileUUID:(id)uuid withMediaProperty:(id)property context:(id)context;
- (BOOL)_deleteAllMKFRegistrationsForMediaProfileUUID:(id)uuid withMediaProperty:(id)property hmcContext:(id)context;
- (id)_fetchEnabledMKFRegistrationsForHMDCharacteristics:(id)hmdcharacteristics context:(id)context;
- (id)_fetchMKFCharacteristicsFromHMDCharacteristics:(id)hmdcharacteristics context:(id)context;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)uuid withCharacteristicIIDs:(id)iids withAccessoryUUID:(id)uuid withDeviceIdsDestination:(id)destination withPrefetchPaths:(id)paths context:(id)context;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)uuid withCharacteristicIIDs:(id)iids withAccessoryUUIDs:(id)uuids withDeviceIdsDestination:(id)destination withPrefetchPaths:(id)paths context:(id)context;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)uuid withCharacteristicIIDs:(id)iids withAccessoryUUID:(id)uuid withDeviceIdsDestination:(id)destination withPrefetchPaths:(id)paths outUser:(id *)user context:(id)context;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)uuid withCharacteristicIIDs:(id)iids withAccessoryUUIDs:(id)uuids withDeviceIdsDestination:(id)destination withPrefetchPaths:(id)paths outUser:(id *)user context:(id)context;
- (id)_fetchMKFRegistrationsWithUserUUID:(id)uuid withMediaProfileUUID:(id)uuid withMediaPropertyIn:(id)in withDeviceIdsDestination:(id)destination withAccessoryUUID:(id)uuid withPrefetchPaths:(id)paths context:(id)context;
- (id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)uuid withMediaProfileUUID:(id)uuid withMediaPropertyIn:(id)in withDeviceIdsDestination:(id)destination withAccessoryUUID:(id)uuid withPrefetchPaths:(id)paths outUser:(id *)user context:(id)context;
- (id)_fetchRequestForCharacteristicRegistrationsWithoutAllowedDestinations:(id)destinations;
- (id)_fetchRequestForMediaProfileRegistrationsWithoutAllowedDestinations:(id)destinations;
- (id)_fetchRequestForAllCharacteristicRegistrations;
- (id)_fetchRequestForAllMediaProfileRegistrations;
- (BOOL)enableNotificationsForCharacteristics:(id)characteristics user:(id)user deviceIdsDestination:(id)destination;
- (id)disableNotificationForCharacteristics:(id)characteristics user:(id)user deviceIdsDestination:(id)destination;
- (id)processCharacteristicsRequests:(id)requests;
- (id)_processGroupedCharacteristicsRequests:(id)requests user:(id)user destination:(id)destination context:(id)context;
- (id)_processEnableCharacteristicsRequest:(id)request mkfUser:(id)user registrationsForAccessory:(id)accessory context:(id)context;
- (id)_processDisableCharacteristicsRequest:(id)request registrationsForAccessory:(id)accessory context:(id)context;
- (void)removeRegistrationsForCharacteristics:(id)characteristics;
- (id)destinationsToNotifyForCharacteristic:(id)characteristic;
- (void)removeAllCharacteristicRegistrations;
- (void)disableAllCharacteristicRegistrations;
- (id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)destinations;
- (BOOL)enableNotificationForMediaProfile:(id)profile mediaProperties:(id)properties user:(id)user deviceIdsDestination:(id)destination;
- (BOOL)disableNotificationForMediaProfile:(id)profile mediaProperties:(id)properties user:(id)user deviceIdsDestination:(id)destination;
- (BOOL)removeRegistrationsForMediaProfile:(id)profile;
- (id)destinationsToNotifyForMediaPropertyResponse:(id)response;
- (id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)identifier;
- (id)removeAllMediaProfileRegistrations;
- (id)disableAllMediaProfileRegistrations;
- (id)removeMediaRegistrationsWithoutAllowedDestinations:(id)destinations;
- (BOOL)_enableRegistration:(id)registration;
- (BOOL)_disableRegistration:(id)registration;
- (BOOL)_insertNotificationRegistrationForCharacteristic:(id)characteristic deviceIdsDestination:(id)destination user:(id)user mkfCharacteristic:(id)characteristic context:(id)context;
- (BOOL)_insertNotificationRegistrationForMediaProperty:(id)property mediaProfile:(id)profile deviceIdsDestination:(id)destination user:(id)user accessory:(id)accessory context:(id)context;
- (id)shortDescription;
@end

#endif /* HMDNotificationRegistryCoreDataAdapter_h */