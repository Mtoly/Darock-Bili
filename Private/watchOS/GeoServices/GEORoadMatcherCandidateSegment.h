//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORoadMatcherCandidateSegment_h
#define GEORoadMatcherCandidateSegment_h
@import Foundation;

#include "GEOMapFeatureJunction.h"
#include "GEOMapFeatureRoad.h"

@interface GEORoadMatcherCandidateSegment : NSObject {
  /* instance variables */
  double _distanceInMetersFromJunction;
}

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) GEOMapFeatureRoad *road;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } coordinateOnSegment;
@property (readonly, nonatomic) double distanceFromSegment;
@property (readonly, nonatomic) double segmentAngle;
@property (readonly, nonatomic) GEOMapFeatureJunction *junction;
@property (readonly, nonatomic) double distanceFromJunction;

/* instance methods */
- (id)init;
- (id)initWithCoordinate:(struct { double x0; double x1; double x2; })coordinate angle:(double)angle road:(id)road startCoordinate:(struct { double x0; double x1; double x2; })coordinate endCoordinate:(struct { double x0; double x1; double x2; })coordinate penalties:(id)penalties;
@end

#endif /* GEORoadMatcherCandidateSegment_h */