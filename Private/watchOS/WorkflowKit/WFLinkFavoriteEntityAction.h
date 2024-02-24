//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkFavoriteEntityAction_h
#define WFLinkFavoriteEntityAction_h
@import Foundation;

#include "WFLinkEntityAction.h"

@interface WFLinkFavoriteEntityAction : WFLinkEntityAction
/* class methods */
+ (id)overrideInputParameterName;

/* instance methods */
- (id)entityParameterName;
- (id)overrideDescriptionSummary;
- (id)verb;
- (id)overrideLabelsByParameter;
- (id)overrideDefaultValuesByParameter;
@end

#endif /* WFLinkFavoriteEntityAction_h */