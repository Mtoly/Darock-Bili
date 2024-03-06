//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUMetadataDestinationID_h
#define TUMetadataDestinationID_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUHandle.h"

@class NSString;

@interface TUMetadataDestinationID : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;

/* class methods */
+ (id)metadataDestinationIDsForCHRecentCall:(id)call;
+ (id)metadataDestinationIDsForCHRecentCalls:(id)calls;
+ (id)metadataDestinationIDForCall:(id)call;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDestinationID:(id)id isoCountryCode:(id)code;
- (id)initWithHandle:(id)handle;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToMetadataDestinationID:(id)id;
@end

#endif /* TUMetadataDestinationID_h */