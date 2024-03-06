//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMobilityWalkingSteadinessOnboardingFlowManager_h
#define HKMobilityWalkingSteadinessOnboardingFlowManager_h
@import Foundation;

#include "HKMobilityWalkingSteadinessFeatureStatusManager.h"

@class HKHealthStore, NSString;
@protocol HKFeatureAvailabilityProviding, HKFeatureStatusProviding, HKRegulatoryDomainProvider, OS_dispatch_queue;

@interface HKMobilityWalkingSteadinessOnboardingFlowManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<HKFeatureStatusProviding> *classificationsFeatureStatusProvider;
@property (retain, nonatomic) NSObject<HKFeatureAvailabilityProviding> *notificationsFeatureAvailabilityStore;
@property (retain, nonatomic) HKMobilityWalkingSteadinessFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) NSObject<HKRegulatoryDomainProvider> *mobileCountryCodeManager;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long countryCodeProvenance;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)initWithHealthStore:(id)store classificationsFeatureStatusProvider:(id)provider notificationsFeatureAvailabilityStore:(id)store featureStatusManager:(id)manager;
- (void)fetchUserCanContinueOnboardingForCountryCode:(id)code countryCodeProvenance:(long long)provenance completion:(id /* block */)completion;
- (id)_findAnyOnboardingCompletionWithError:(id *)error;
- (BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)components;
- (void)markOnboardingCompleteForCountryCode:(id)code countryCodeProvenance:(long long)provenance shouldTurnOnNotifications:(BOOL)notifications completion:(id /* block */)completion;
@end

#endif /* HKMobilityWalkingSteadinessOnboardingFlowManager_h */