//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORouteBuilderOutput_h
#define GEORouteBuilderOutput_h
@import Foundation;

#include "GEOComposedRouteCellularCoverage.h"
#include "GEOComposedRouteCoordinateArray.h"
#include "GEOElevationProfile.h"
#include "GEOMapRegion.h"

@class NSArray;

@interface GEORouteBuilderOutput : NSObject

@property (retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray;
@property (retain, nonatomic) NSArray *legs;
@property (retain, nonatomic) NSArray *segments;
@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) NSArray *guidanceEvents;
@property (retain, nonatomic) NSArray *enrouteNotices;
@property (retain, nonatomic) NSArray *visualInfos;
@property (retain, nonatomic) NSArray *visualInfosForRouteNameLabels;
@property (retain, nonatomic) NSArray *cameraInfos;
@property (retain, nonatomic) GEOComposedRouteCellularCoverage *cellularCoverage;
@property (nonatomic) BOOL usesZilch;
@property (retain, nonatomic) NSArray *pointSections;
@property (retain, nonatomic) GEOMapRegion *boundingMapRegion;
@property (nonatomic) double distance;
@property (retain, nonatomic) GEOElevationProfile *elevationProfile;

/* instance methods */
@end

#endif /* GEORouteBuilderOutput_h */