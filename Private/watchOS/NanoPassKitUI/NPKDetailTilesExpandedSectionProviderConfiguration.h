//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKDetailTilesExpandedSectionProviderConfiguration_h
#define NPKDetailTilesExpandedSectionProviderConfiguration_h
@import Foundation;

#include "NPKPassDetailSectionProviderConfiguration.h"
#include "NPKTileItem.h"

@interface NPKDetailTilesExpandedSectionProviderConfiguration : NPKPassDetailSectionProviderConfiguration

@property (weak, nonatomic) NPKTileItem *item;

/* instance methods */
- (id)initWithPass:(id)pass item:(id)item;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)configurationByApplyingConfiguration:(id)configuration;
@end

#endif /* NPKDetailTilesExpandedSectionProviderConfiguration_h */