//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKChooseDefaultPassListSectionProviderConfiguration_h
#define NPKChooseDefaultPassListSectionProviderConfiguration_h
@import Foundation;

#include "NPKListCollectionViewSectionProviderConfiguration.h"

@class NSArray, PKSecureElementPass;

@interface NPKChooseDefaultPassListSectionProviderConfiguration : NPKListCollectionViewSectionProviderConfiguration

@property (retain, nonatomic) NSArray *eligiblePasses;
@property (retain, nonatomic) PKSecureElementPass *defaultPass;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)configurationByApplyingConfiguration:(id)configuration;
@end

#endif /* NPKChooseDefaultPassListSectionProviderConfiguration_h */