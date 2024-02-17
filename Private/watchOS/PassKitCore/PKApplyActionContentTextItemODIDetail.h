//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyActionContentTextItemODIDetail_h
#define PKApplyActionContentTextItemODIDetail_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKApplyODIAttributesDictionaryProtocol-Protocol.h"
#include "PKIdentifiable-Protocol.h"

@class NSString;

@interface PKApplyActionContentTextItemODIDetail : NSObject<PKApplyODIAttributesDictionaryProtocol, NSCopying, PKIdentifiable>

@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSString *odiValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)odiAttributesDictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKApplyActionContentTextItemODIDetail_h */