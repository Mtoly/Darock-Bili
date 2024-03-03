//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKARWalkingContinueFeature_h
#define VKARWalkingContinueFeature_h
@import Foundation;

#include "VKARWalkingFeature.h"

@class GEOComposedRoute, NSString;
@protocol {_retain_ptr<GEOComposedRoute *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>="_vptr$_retain_ptr"^^?"_obj"@"GEOComposedRoute""_retain"{_retain_objc_arc=}"_release"{_release_objc_arc=}}, {_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>="_vptr$_retain_ptr"^^?"_obj"@"NSString""_retain"{_retain_objc_arc=}"_release"{_release_objc_arc=}};

@interface VKARWalkingContinueFeature : VKARWalkingFeature

@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; } range;
@property (readonly, nonatomic) GEOComposedRoute *route;

/* instance methods */
- (id)initWithRoute:(id)route range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })range displayText:(id)text;
- (id)initWithRoute:(id)route range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })range displayText:(id)text continuePriority:(unsigned long long)priority;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* VKARWalkingContinueFeature_h */