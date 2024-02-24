//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRStaticRouteBannerRequest_h
#define MRStaticRouteBannerRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface MRStaticRouteBannerRequest : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *routeIdentifier;
@property (retain, nonatomic) NSString *routeName;
@property (retain, nonatomic) NSArray *outputDeviceNames;
@property (retain, nonatomic) NSString *routeSymbolName;
@property (retain, nonatomic) NSString *actionImageName;
@property (retain, nonatomic) NSString *soloModelID;
@property (retain, nonatomic) NSString *soloDeviceEnclosureColor;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* MRStaticRouteBannerRequest_h */