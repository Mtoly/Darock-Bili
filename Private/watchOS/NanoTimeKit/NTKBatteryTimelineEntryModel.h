//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBatteryTimelineEntryModel_h
#define NTKBatteryTimelineEntryModel_h
@import Foundation;

#include "NTKTimelineEntryModel.h"

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel

@property (nonatomic) float level;
@property (nonatomic) long long state;

/* instance methods */
- (id)templateForComplicationFamily:(long long)family;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newBatteryTemplateForFamily:(long long)family;
- (id)_signatureCornerTemplate;
- (id)_signatureCircularTemplate;
- (id)_graphicExtraLargeCircularTemplate;
- (id)_signatureBezelTemplate;
- (id)_levelTintColor;
- (id)_ringTextProvider;
@end

#endif /* NTKBatteryTimelineEntryModel_h */