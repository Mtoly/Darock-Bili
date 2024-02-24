//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNShowInAppStringSearchResultsSystemProtocolMetadata_h
#define LNShowInAppStringSearchResultsSystemProtocolMetadata_h
@import Foundation;

#include "LNSystemProtocolMetadata-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface LNShowInAppStringSearchResultsSystemProtocolMetadata : NSObject<LNSystemProtocolMetadata, NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSArray *searchScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSearchScopes:(id)scopes;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* LNShowInAppStringSearchResultsSystemProtocolMetadata_h */