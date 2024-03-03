//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISMutableDisplayContext_h
#define UISMutableDisplayContext_h
@import Foundation;

#include "UISDisplayContext.h"
#include "UISApplicationSupportDisplayEdgeInfo.h"
#include "UISDisplayShape.h"

@class FBSDisplayConfiguration;

@interface UISMutableDisplayContext : UISDisplayContext

@property (retain, @dynamic, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, @dynamic, nonatomic) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (@dynamic, nonatomic) unsigned long long artworkSubtype;
@property (@dynamic, nonatomic) unsigned long long userInterfaceStyle;
@property (retain, @dynamic, nonatomic) UISDisplayShape *exclusionArea;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UISMutableDisplayContext_h */