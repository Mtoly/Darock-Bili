//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CADObjectChangeID_h
#define CADObjectChangeID_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CADObjectChangeID : NSObject<NSSecureCoding>

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) long long changeID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEntityType:(int)type changeID:(long long)id;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CADObjectChangeID_h */