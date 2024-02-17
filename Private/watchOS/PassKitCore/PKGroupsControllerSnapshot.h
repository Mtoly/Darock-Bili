//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKGroupsControllerSnapshot_h
#define PKGroupsControllerSnapshot_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKCatalog.h"

@class NSDictionary, NSSet;

@interface PKGroupsControllerSnapshot : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSSet *passes;
@property (readonly, copy, nonatomic) NSDictionary *states;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, copy, nonatomic) NSDictionary *annotationsByPassUniqueID;
@property (readonly, nonatomic) PKCatalog *catalog;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPasses:(id)passes annotationsByPassUniqueID:(id)id catalog:(id)catalog;
- (id)initWithPasses:(id)passes states:(id)states annotations:(id)annotations catalog:(id)catalog;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKGroupsControllerSnapshot_h */