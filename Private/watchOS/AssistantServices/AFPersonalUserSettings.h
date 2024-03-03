//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFPersonalUserSettings_h
#define AFPersonalUserSettings_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFPersonalUserSettings : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *temperatureUnit;
@property (nonatomic) BOOL twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *preferredLanguage;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AFPersonalUserSettings_h */