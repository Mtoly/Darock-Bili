//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVFenceHandle_h
#define UVFenceHandle_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"

@class BKSAnimationFenceHandle, NSString;

@interface UVFenceHandle : NSObject<BSXPCSecureCoding>

@property (readonly, nonatomic) BKSAnimationFenceHandle *underlying;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createForAllScenes;
+ (id)createForScene:(id)scene;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)initWithUnderlying:(id)underlying;
- (void)applyToAllScenes;
- (void)applyToScene:(id)scene;
- (void)invalidate;
- (id)copy;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* UVFenceHandle_h */