//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemAdditionalPlaceInfo_h
#define GEOMapItemAdditionalPlaceInfo_h
@import Foundation;

#include "GEOMapItem-Protocol.h"
#include "GEOMapRegion.h"
#include "GEOPlace.h"

@class NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {
  /* instance variables */
  GEOPlace *_place;
}

@property (readonly, nonatomic) NSObject<GEOMapItem> *mapItem;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) double areaInMeters;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) float photosMemoryScore;

/* instance methods */
- (id)initWithPlace:(id)place;
- (id)initWithMapItem:(id)item;
- (id)initWithName:(id)name placeType:(int)type areaInMeters:(double)meters;
@end

#endif /* GEOMapItemAdditionalPlaceInfo_h */