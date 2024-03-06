//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef CLLocation_MNExtras_h
#define CLLocation_MNExtras_h
@import Foundation;

@interface CLLocation (MNExtras)
/* class methods */
+ (id)_navigation_stringWithType:(int)type;
+ (BOOL)_navigation_isLocation:(id)location equalTo:(id)to;

/* instance methods */
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate rawCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate course:(double)course rawCourse:(double)course courseAccuracy:(double)accuracy speed:(double)speed speedAccuracy:(double)accuracy altitude:(double)altitude timestamp:(double)timestamp horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy type:(int)type referenceFrame:(int)frame;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate rawCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate course:(double)course rawCourse:(double)course courseAccuracy:(double)accuracy speed:(double)speed speedAccuracy:(double)accuracy altitude:(double)altitude timestamp:(double)timestamp horizontalAccuracy:(double)accuracy verticalAccuracy:(double)accuracy type:(int)type referenceFrame:(int)frame serializedCoarseMetaData:(id)data;
- (id)initWithGeoLocation:(id)location;
- (BOOL)_navigation_isStale;
- (BOOL)_navigation_hasValidCourse;
- (id)_navigation_routeMatch;
- (id)_navigation_locationDescription;
- (BOOL)_navigation_isEqualToLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (double)_navigation_speedAccuracy;
- (BOOL)_navigation_hasMatch;
- (struct CLLocationCoordinate2D { double x0; double x1; })_navigation_rawShiftedCoordinate;
- (id)_navigation_detailedMatchInfo;
- (void)_navigation_setGtLog:(BOOL)log;
- (BOOL)_navigation_gtLog;
- (id)_navigation_geoLocation;
- (struct { double x0; double x1; })_navigation_geoCoordinate;
- (struct { double x0; double x1; double x2; })_navigation_geoCoordinate3D;
@end

#endif /* CLLocation_MNExtras_h */