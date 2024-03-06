//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKRouteContext_h
#define VKRouteContext_h
@import Foundation;

#include "VKRouteInfo.h"

@class GEOComposedWaypoint, NSArray, NSHashTable, NSString;
@protocol {multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>>="__tree_"{__tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>>="__value_"Q}}};

@interface VKRouteContext : NSObject {
  /* instance variables */
  BOOL _hasContextChangedForLabels;
  NSHashTable *_labelObservers;
  BOOL _hasContextChangedForRouteLine;
  NSHashTable *_routeLineObservers;
  BOOL _hasContextChangedForAlternateRouteLines;
  NSHashTable *_alternateRouteLineObservers;
  struct multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>> { struct __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _shareSections;
}

@property (readonly, nonatomic) VKRouteInfo *routeInfo;
@property (readonly, nonatomic) unsigned char useType;
@property (nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffset;
@property (nonatomic) long long currentSegmentIndex;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) BOOL snappingToTransitLines;
@property (readonly, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (readonly, nonatomic) unsigned char currentWaypointProximity;
@property (nonatomic) long long inspectedSegmentIndex;
@property (nonatomic) long long inspectedStepIndex;
@property (nonatomic) struct { double x0; double x1; } puckLocation;
@property (nonatomic) float puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *accessPointEntryName;
@property (retain, nonatomic) NSString *accessPointExitName;
@property (retain, nonatomic) NSArray *alternateRoutes;
@property (readonly, nonatomic) unsigned long long totalRouteCount;

/* instance methods */
- (id)initWithComposedRoute:(id)route useType:(unsigned char)type;
- (id)initWithRouteInfo:(id)info useType:(unsigned char)type;
- (id)_hashTableForObserverType:(unsigned char)type;
- (void)_setHasContextChangedForObserverType:(unsigned char)type withValue:(BOOL)value;
- (void)addObserver:(id)observer withType:(unsigned char)type;
- (void)removeObserver:(id)observer withType:(unsigned char)type;
- (void)resetNotificationsForObserverType:(unsigned char)type;
- (void)setCurrentWaypoint:(id)waypoint withProximity:(unsigned char)proximity;
- (void)addShareSections:(const struct { id x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; struct PolylineCoordinate { unsigned int x0; float x1; } x2; } *)sections shareCount:(unsigned int)count;
- (void)forEachSectionWithShareCount:(unsigned int)count dothis:(id /* block */)dothis;
- (void)forEachRouteInfo:(id /* block */)info;
- (id)description;
@end

#endif /* VKRouteContext_h */