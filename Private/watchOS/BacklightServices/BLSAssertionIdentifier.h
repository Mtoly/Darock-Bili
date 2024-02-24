//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSAssertionIdentifier_h
#define BLSAssertionIdentifier_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface BLSAssertionIdentifier : NSObject<NSCopying, NSSecureCoding, BSXPCCoding>

@property (readonly, nonatomic) int hostPid;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)nextCount;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithClientPid:(int)pid hostPid:(int)pid count:(unsigned long long)count;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* BLSAssertionIdentifier_h */