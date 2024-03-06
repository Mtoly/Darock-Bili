//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDictionaryInvitationContext_h
#define IDSDictionaryInvitationContext_h
@import Foundation;

#include "IDSInvitationContext-Protocol.h"

@class NSDictionary, NSString;

@interface IDSDictionaryInvitationContext : NSObject<IDSInvitationContext>

@property (readonly, copy) NSString *schemaIdentifier;
@property (readonly) long long contextType;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary schema:(id)schema;
- (id)initWithPayload:(id)payload;
- (id)payload;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IDSDictionaryInvitationContext_h */