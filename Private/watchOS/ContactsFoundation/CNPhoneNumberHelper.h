//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNPhoneNumberHelper_h
#define CNPhoneNumberHelper_h
@import Foundation;

@interface CNPhoneNumberHelper : NSObject
/* class methods */
+ (id)lastFourDigitsForNumber:(id)number;
+ (id)defaultCountryCode;
+ (id)countryCodeForNumber:(id)number;
+ (id)internationalizedFormattedNumber:(id)number countryCode:(id)code;
+ (id)internationalizedUnformattedNumber:(id)number countryCode:(id)code;
+ (BOOL)isStringPhoneNumber:(id)number;
+ (id)makePhoneNumberRegex;
@end

#endif /* CNPhoneNumberHelper_h */