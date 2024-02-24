//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 187.4.0.0.0
//
#ifndef MTTintingMaterialSettings_h
#define MTTintingMaterialSettings_h
@import Foundation;

#include "MTTinting-Protocol.h"

@class NSDictionary, NSString;

@interface MTTintingMaterialSettings : NSObject<MTTinting>

@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, nonatomic) struct CGColor * tintColor;
@property (readonly, nonatomic) double tintAlpha;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) long long tintColorUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTintingDescription:(id)description andDescendantDescriptions:(id)descriptions;
- (void)dealloc;
- (void)_processTintingDescription:(id)description defaultingToIdentity:(BOOL)identity;
@end

#endif /* MTTintingMaterialSettings_h */