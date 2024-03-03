//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCNewsPlusLabelConfigGroup_h
#define FCNewsPlusLabelConfigGroup_h
@import Foundation;

#include "FCNewsPlusLabelConfig.h"

@interface FCNewsPlusLabelConfigGroup : NSObject

@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForTrialists;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForSubscribers;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForPaidBundleViaOffer;

/* instance methods */
- (id)initWithConfigDictionary:(id)dictionary;
@end

#endif /* FCNewsPlusLabelConfigGroup_h */