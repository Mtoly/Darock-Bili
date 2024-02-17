//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOCompanionManeuverStep_Protocol_h
#define GEOCompanionManeuverStep_Protocol_h
@import Foundation;

@protocol GEOCompanionManeuverStep <NSObject>

@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSMutableArray *maneuverNames;
@property (retain, nonatomic) NSMutableArray *signposts;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) int junctionType;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (readonly, nonatomic) struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; } x3; } * junctionElements;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *maneuverArtworkOverride;

/* instance methods */
- (void)clearManeuverNames;
- (void)addManeuverName:(id)name;
- (unsigned long long)maneuverNamesCount;
- (id)maneuverNameAtIndex:(unsigned long long)index;
- (void)clearSignposts;
- (void)addSignpost:(id)signpost;
- (unsigned long long)signpostsCount;
- (id)signpostAtIndex:(unsigned long long)index;
@end

#endif /* GEOCompanionManeuverStep_Protocol_h */