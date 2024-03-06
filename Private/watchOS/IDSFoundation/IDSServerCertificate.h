//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSServerCertificate_h
#define IDSServerCertificate_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface IDSServerCertificate : NSObject<NSCopying>

@property (readonly, nonatomic) NSData *dataRepresentation;

/* instance methods */
- (id)initWithDataRepresentation:(id)representation;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IDSServerCertificate_h */