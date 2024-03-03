//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewSetPlacementOffScreenDownByScreenHeight_h
#define UIInputViewSetPlacementOffScreenDownByScreenHeight_h
@import Foundation;

#include "UIInputViewSetPlacement.h"
#include "NSSecureCoding-Protocol.h"

@interface UIInputViewSetPlacementOffScreenDownByScreenHeight : UIInputViewSetPlacement<NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)verticalConstraintForInputViewSet:(id)set hostView:(id)view containerView:(id)view;
@end

#endif /* UIInputViewSetPlacementOffScreenDownByScreenHeight_h */