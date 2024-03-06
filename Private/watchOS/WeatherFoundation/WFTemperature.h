//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFTemperature_h
#define WFTemperature_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface WFTemperature : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  struct { double celsiusVal; double kelvinVal; double fahrenheitVal; } _temperatureValues;
}

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTemperatureUnit:(int)unit value:(double)value;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isEqualToTemperature:(id)temperature;
- (double)temperatureForUnit:(int)unit;
- (id)description;
- (void)_setValue:(double)value forUnit:(int)unit;
- (BOOL)_unitIsHydrated:(int)hydrated outputValue:(out double *)value;
- (void)_resetTemperatureValues;
@end

#endif /* WFTemperature_h */