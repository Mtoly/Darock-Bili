//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFSetAppAssociatedDomainsRequest_h
#define DMFSetAppAssociatedDomainsRequest_h
@import Foundation;

#include "DMFAppRequest.h"

@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest

@property (copy, nonatomic) NSArray *associatedDomains;

/* class methods */
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DMFSetAppAssociatedDomainsRequest_h */