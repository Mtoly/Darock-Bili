//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFTemperatureFormatter_h
#define WFTemperatureFormatter_h
@import Foundation;

#include "NSFormatter.h"

@class NSLocale, NSString;

@interface WFTemperatureFormatter : NSFormatter

@property (nonatomic) struct UAMeasureFormat * measureFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *fallbackTemperatureString;
@property (nonatomic) int inputUnit;
@property (nonatomic) int outputUnit;
@property (nonatomic) unsigned long long roundingMode;
@property (nonatomic) unsigned long long maximumFractionDigits;
@property (nonatomic) int symbolType;
@property (nonatomic) BOOL includeDegreeSymbol;

/* class methods */
+ (id)temperatureFormatterWithInputUnit:(int)unit outputUnit:(int)unit;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;
- (id)stringForObjectValue:(id)value;
- (id)formattedStringFromTemperature:(id)temperature;
- (id)formattedTemperatureFromString:(id)string;
- (id)_formatTemperatureValue:(id)value toUnit:(int)unit;
- (void)_localeDidChangeNotification:(id)notification;
@end

#endif /* WFTemperatureFormatter_h */