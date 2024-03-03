//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef TWRBSXPCCodingSet_h
#define TWRBSXPCCodingSet_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface TWRBSXPCCodingSet : NSObject<BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSSet *set;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)BSXPCCodingSetWithSet:(id)set;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)initWithSet:(id)set;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* TWRBSXPCCodingSet_h */