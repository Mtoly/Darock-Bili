//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKEncryptedDetailCollectionViewSectionProviderConfiguration_h
#define NPKEncryptedDetailCollectionViewSectionProviderConfiguration_h
@import Foundation;

#include "NPKCardInformationSectionProviderConfiguration.h"

@class LAContext;

@interface NPKEncryptedDetailCollectionViewSectionProviderConfiguration : NPKCardInformationSectionProviderConfiguration

@property (retain, nonatomic) LAContext *evaluatedLocalAuthContext;

/* instance methods */
- (id)initWithPass:(id)pass evaluatedLocalAuthContext:(id)context;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)configurationByApplyingConfiguration:(id)configuration;
@end

#endif /* NPKEncryptedDetailCollectionViewSectionProviderConfiguration_h */