//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBAction_h
#define HMBAction_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@interface HMBAction : HMFObject<NSCopying, NSMutableCopying>

@property (nonatomic) BOOL shouldUpdateClients;

/* class methods */
+ (id)shouldUpdateClientsAction;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMBAction_h */