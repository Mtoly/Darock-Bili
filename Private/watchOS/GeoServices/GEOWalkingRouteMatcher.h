//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOWalkingRouteMatcher_h
#define GEOWalkingRouteMatcher_h
@import Foundation;

#include "GEORouteMatcher.h"

@interface GEOWalkingRouteMatcher : GEORouteMatcher {
  /* instance variables */
  unsigned long long _newStepProgressions;
}

/* instance methods */
- (id)initWithRoute:(id)route auditToken:(id)token;
- (double)_maxMatchDistance:(double)distance routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })coordinate previousMatchGood:(BOOL)good;
- (double)_modifiedHorizontalAccuracy:(double)accuracy routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })coordinate;
- (id)_candidateForSegment:(id)segment location:(id)location previousRouteMatch:(id)match;
- (void)_finishRouteMatch:(id)match previousRouteMatch:(id)match forLocation:(id)location;
- (BOOL)_supportsSnapping;
@end

#endif /* GEOWalkingRouteMatcher_h */