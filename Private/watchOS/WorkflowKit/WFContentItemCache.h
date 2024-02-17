//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContentItemCache_h
#define WFContentItemCache_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface WFContentItemCache : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSMapTable *cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCache:(id)cache;
- (void)addContentCollection:(id)collection;
- (void)deleteContentCollection:(id)collection;
- (id)contentItemForUUID:(id)uuid;
- (void)clear;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFContentItemCache_h */