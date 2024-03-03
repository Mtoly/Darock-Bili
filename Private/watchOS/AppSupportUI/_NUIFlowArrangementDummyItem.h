//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef _NUIFlowArrangementDummyItem_h
#define _NUIFlowArrangementDummyItem_h
@import Foundation;

#include "NUIArrangementItem-Protocol.h"

@class NSString;

@interface _NUIFlowArrangementDummyItem : NSObject<NUIArrangementItem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (float)contentCompressionResistancePriorityForAxis:(long long)axis;
- (float)contentHuggingPriorityForAxis:(long long)axis;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
@end

#endif /* _NUIFlowArrangementDummyItem_h */