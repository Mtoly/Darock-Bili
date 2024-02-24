//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDepthInteractionStateMachineForegroundState_h
#define CSLDepthInteractionStateMachineForegroundState_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CSLDepthInteractionStateMachineForegroundState : NSObject<NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *analyticsBundleID;

/* class methods */
+ (id)clockState;
+ (id)noneState;
+ (id)applicationStateWithBundleID:(id)id;

/* instance methods */
- (id)initWithType:(long long)type bundleID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CSLDepthInteractionStateMachineForegroundState_h */