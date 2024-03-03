//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKPuckAnimatorLocationProjector_h
#define VKPuckAnimatorLocationProjector_h
@import Foundation;

@class GEORouteMatch;
@protocol struct Matrix<double, 3, 1> { double x0[3] }, struct optional<double> { union { char x0; double x1; } x0; BOOL x1; }, struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3] } x0; struct Mercator3<double> { double x0[3] } x1; } x1; } x0; BOOL x1; }, {Matrix<double, 3, 1>="_e"[3d]}, {optional<double>=""(?="__null_state_"c"__val_"d)"__engaged_"B}, {optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>>=""(?="__null_state_"c"__val_"{pair<geo::Mercator3<double>, geo::Mercator3<double>>="first"{Mercator3<double>="_e"[3d]}"second"{Mercator3<double>="_e"[3d]}})"__engaged_"B};

@interface VKPuckAnimatorLocationProjector : NSObject {
  /* instance variables */
  struct optional<double> { union { char __null_state_; double __val_; } x0; BOOL __engaged_; } _elevationInProjectedPosition;
  struct PolylineCoordinate { unsigned int index; float offset; } _maxTravelledCoordinate;
}

@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3] } projectedPosition;
@property (readonly, nonatomic) BOOL isProjectedPositionBehind;
@property (readonly, nonatomic) struct { double x0; double x1; } projectedLocation;
@property (readonly, nonatomic) struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } elevationInProjectedPostion;
@property (readonly, nonatomic) double projectedCourse;
@property (readonly, nonatomic) BOOL projectedLocationOnRoute;
@property (readonly, nonatomic) struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> { union { char x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3] } x0; struct Mercator3<double> { double x0[3] } x1; } x1; } x0; BOOL x1; } currentSnappedSegment;
@property (nonatomic) BOOL alwaysUseGoodRouteMatch;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_updateCourseAndPositionFromRouteMatch:(id)match;
- (void)projectFromLocation:(id)location routeMatch:(id)match speedMultiplier:(double)multiplier routeLine:(id)line;
- (id)detailedDescription;
@end

#endif /* VKPuckAnimatorLocationProjector_h */