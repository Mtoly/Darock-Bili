//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKIDSDestination_h
#define PKIDSDestination_h
@import Foundation;

@class NSString;

@interface PKIDSDestination : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *name;

/* class methods */
+ (id)destinationWithDeviceIdentifier:(id)identifier name:(id)name;

/* instance methods */
- (id)initWithDeviceIdentifier:(id)identifier name:(id)name;
- (id)description;
@end

#endif /* PKIDSDestination_h */