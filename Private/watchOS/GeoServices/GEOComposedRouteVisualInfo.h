//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedRouteVisualInfo_h
#define GEOComposedRouteVisualInfo_h
@import Foundation;

#include "GEOComposedString.h"
#include "GEOFormattedString.h"
#include "GEOPBTransitArtwork.h"
#include "GEOServerFormattedString-Protocol.h"
#include "GEOStyleAttributes.h"
#include "GEOTransitArtworkDataSource-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface GEOComposedRouteVisualInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *detail;
@property (readonly, nonatomic) GEOComposedString *titleString;
@property (readonly, nonatomic) GEOComposedString *detailString;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *icon;
@property (readonly, nonatomic) NSArray *laneChangeInfos;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; } routeCoordinateRange;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } startCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } endCoordinate;

/* class methods */
+ (id)visualInfosForGeoWaypointRoute:(id)route coordinates:(id)coordinates updateable:(BOOL)updateable;
+ (id)visualInfosForRouteLabelsForGeoWaypointRoute:(id)route coordinates:(id)coordinates;
+ (id)cameraInfosForGeoWaypointRoute:(id)route coordinates:(id)coordinates updateable:(BOOL)updateable;
+ (id)visualInfosForRoute:(id)route etaRoute:(id)route;
+ (id)cameraInfosForRoute:(id)route etaRoute:(id)route;
+ (id)_infosForRouteLineStyleInfos:(id)infos pathIndex:(unsigned long long)index coordinates:(id)coordinates updateable:(BOOL)updateable;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title detail:(id)detail routeCoordinate:(struct { unsigned int x0; float x1; })coordinate locationCoordinate:(struct { double x0; double x1; double x2; })coordinate;
- (id)initWithTitle:(id)title routeCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })range;
- (id)initWithGeoRouteLineStyleInfo:(id)info pathIndex:(unsigned long long)index coordinates:(id)coordinates distanceOffset:(double)offset;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* GEOComposedRouteVisualInfo_h */