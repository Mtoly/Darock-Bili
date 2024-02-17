//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFWeatherUndergroundParser_h
#define WFWeatherUndergroundParser_h
@import Foundation;

#include "WFForecastDataParser-Protocol.h"

@class NSString;

@interface WFWeatherUndergroundParser : NSObject<WFForecastDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)expectedHourlyForecastCount;
+ (unsigned long long)expectedDailyForecastCount;
+ (id)componentsForCurrentForecast;
+ (id)componentsForHourlyForecasts;
+ (id)componentsForDailyForecasts;
+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)phrase;

/* instance methods */
- (id)parseForecastData:(id)data types:(unsigned long long)types location:(id)location locale:(id)locale date:(id)date error:(id *)error;
- (id)parseForecastData:(id)data types:(unsigned long long)types location:(id)location locale:(id)locale date:(id)date error:(id *)error rules:(id)rules;
- (id)parseHistoricalForecast:(id)forecast error:(id *)error;
- (void)logParsingErrorAtKeyPath:(id)path error:(id *)error;
- (id)sanitizedNumberForKeyPath:(id)path dict:(id)dict;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)path fahrenheitKeyPath:(id)path dict:(id)dict;
- (id)dateFromUTCDict:(id)utcdict toUnitGranularity:(unsigned long long)granularity;
@end

#endif /* WFWeatherUndergroundParser_h */