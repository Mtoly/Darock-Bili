//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKRPOxygenSaturationOnboardingManagerDataSource_Protocol_h
#define HKRPOxygenSaturationOnboardingManagerDataSource_Protocol_h
@import Foundation;

@protocol HKRPOxygenSaturationOnboardingManagerDataSource <NSObject>

@property (readonly, nonatomic) BOOL bloodOxygenSaturationEnabled;
@property (readonly, nonatomic) BOOL ageGated;
@property (readonly, nonatomic) BOOL shouldAdvertise;
@property (readonly, nonatomic) NSString *countryCodeFromCurrentLocale;
@property (readonly, nonatomic) BOOL skipHardwareCheck;
@property (readonly, nonatomic) NRDevice *device;
@property (readonly, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityProvider;
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (readonly, nonatomic) HKRPOxygenSaturationOnboardingCache *onboardingCache;
@property (readonly, nonatomic) NSObject<HKRegulatoryDomainProvider> *mobileCountryCodeManager;

/* instance methods */
- (BOOL)isBloodOxygenSaturationEnabled;
- (BOOL)isAgeGated;
@end

#endif /* HKRPOxygenSaturationOnboardingManagerDataSource_Protocol_h */