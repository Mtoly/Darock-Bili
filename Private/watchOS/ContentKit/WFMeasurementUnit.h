//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMeasurementUnit_h
#define WFMeasurementUnit_h
@import Foundation;

@interface WFMeasurementUnit : NSObject
/* class methods */
+ (id)availableUnitTypes;
+ (Class)unitClassForUnitType:(id)type;
+ (id)localizedStringForUnitType:(id)type;
+ (id)unitTypeForUnitClass:(Class)class;
+ (id)unitTypeMap;
+ (id)availableUnitsForUnitType:(id)type;
+ (BOOL)usesMetricSystemForUnitType:(id)type;
+ (id)defaultUnitForUnitType:(id)type;
+ (id)unitFromString:(id)string unitType:(id)type caseSensitive:(BOOL)sensitive;
+ (id)unitFromString:(id)string;
+ (id)unitTypeFromLinkMeasurementUnitType:(long long)type;
@end

#endif /* WFMeasurementUnit_h */