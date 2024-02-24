//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedRouteStep_h
#define GEOComposedRouteStep_h
@import Foundation;

#include "GEOComposedRoute.h"
#include "GEOComposedRouteEVStepInfo.h"
#include "GEOComposedRouteSegment.h"
#include "GEOComposedRouteStep.h"
#include "GEOComposedRouteStepTravelTimeProvider-Protocol.h"
#include "GEOComposedString.h"
#include "GEOComposedTransitTripRouteStep.h"
#include "GEOInstructionSet.h"
#include "GEOJunction.h"
#include "GEOPBTransitStop.h"
#include "GEOStep.h"
#include "GEOTransitArtworkDataSource-Protocol.h"
#include "GEOTransitStep.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface GEOComposedRouteStep : NSObject<GEOComposedRouteStepTravelTimeProvider, NSSecureCoding>

@property (readonly, nonatomic) BOOL shouldCreateEnterBoardGroup;
@property (readonly, nonatomic) BOOL shouldCreateAlightExitGroup;
@property (readonly, nonatomic) BOOL shouldCreateTransferGroup;
@property (readonly, nonatomic) BOOL shouldCreateTripProgressionGroup;
@property (readonly, nonatomic) BOOL shouldCreateFerryProgressionGroup;
@property (readonly, nonatomic) BOOL shouldCreateArrivalGroup;
@property (weak, nonatomic) GEOComposedRoute *composedRoute;
@property (readonly, nonatomic) GEOComposedRouteSegment *segment;
@property (readonly, nonatomic) GEOComposedRouteStep *previousStep;
@property (readonly, nonatomic) GEOComposedRouteStep *nextStep;
@property (readonly, nonatomic) long long routeSegmentType;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } startRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } endRouteCoordinate;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } maneuverStartRouteCoordinate;
@property (readonly, nonatomic) NSString *maneuverRoadOrExitName;
@property (readonly, nonatomic) NSString *maneuverRoadName;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) unsigned long long pathIndex;
@property (readonly, nonatomic) BOOL isStartOrResumeStep;
@property (readonly, nonatomic) BOOL isUncertainArrival;
@property (readonly, nonatomic) BOOL isArrivalStep;
@property (readonly, nonatomic) BOOL isChargingStop;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } startGeoCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } endGeoCoordinate;
@property (readonly, nonatomic) GEOStep *geoStep;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) GEOJunction *junction;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkOverride;
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) unsigned int stepID;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (readonly, nonatomic) GEOComposedTransitTripRouteStep *closestLogicalBoardOrAlightStep;
@property (readonly, nonatomic) GEOPBTransitStop *startingStop;
@property (readonly, nonatomic) GEOPBTransitStop *endingStop;
@property (readonly, nonatomic) unsigned int startTime;
@property (readonly, nonatomic) GEOPBTransitStop *previousStop;
@property (readonly, nonatomic) GEOPBTransitStop *nextStop;
@property (readonly, nonatomic) NSArray *transitIncidents;
@property (readonly, nonatomic) NSArray *advisories;
@property (readonly, nonatomic) GEOTransitStep *transitStep;
@property (readonly, nonatomic) GEOInstructionSet *instructions;
@property (readonly, nonatomic) GEOComposedString *distanceStringForListView;
@property (readonly, nonatomic) NSArray *instructionStringsForListView;
@property (readonly, nonatomic) GEOComposedString *distanceStringForSignView;
@property (readonly, nonatomic) NSArray *normalInstructionStringsForSignView;
@property (readonly, nonatomic) NSArray *steppingArtwork;
@property (readonly, nonatomic) NSArray *routeDetailsPrimaryArtwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *routeDetailsSecondaryArtwork;
@property (readonly, nonatomic) GEOComposedRouteEVStepInfo *evInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (int)maneuver;
- (BOOL)_belongsToTransferGroup;
- (BOOL)shouldPreloadWithHighPriority;
- (id)initWithComposedRoute:(id)route geoRouteLeg:(id)leg geoStep:(id)step routeSegmentType:(long long)type stepIndex:(unsigned long long)index startRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate endRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate maneuverStartRouteCoordinate:(struct { unsigned int x0; float x1; })coordinate;
- (id)initWithComposedRoute:(id)route routeSegmentType:(long long)type stepIndex:(unsigned long long)index pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithComposedRoute:(id)route geoRouteLeg:(id)leg geoStep:(id)step routeSegmentType:(long long)type stepIndex:(unsigned long long)index pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })pointRange;
- (unsigned int)startPointIndex;
- (unsigned int)endPointIndex;
- (unsigned int)pointCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maneuverPointRange;
- (unsigned int)maneuverStartPointIndex;
- (unsigned int)maneuverEndPointIndex;
- (id)getPreviousStep;
- (id)getNextStep;
- (id)firstNameOrBranch;
- (id)maneuverDescription;
- (id)instructionDescription;
- (id)maneuverAndInstructionDescription;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })routeCoordinateRange;
- (double)travelTime;
- (id)timeCheckpoints;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* GEOComposedRouteStep_h */