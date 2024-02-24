//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTNumberUtil_h
#define MTNumberUtil_h
@import Foundation;

@interface MTNumberUtil : NSObject
/* class methods */
+ (id)deResNumber:(id)number;
+ (id)deResNumber:(id)number magnitude:(id)magnitude significantDigits:(id)digits;
+ (double)deResDouble:(double)double magnitude:(long long)magnitude significantDigits:(long long)digits;
@end

#endif /* MTNumberUtil_h */