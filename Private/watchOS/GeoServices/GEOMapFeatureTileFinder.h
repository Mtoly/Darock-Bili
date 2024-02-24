//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapFeatureTileFinder_h
#define GEOMapFeatureTileFinder_h
@import Foundation;

#include "GEOTileLoader.h"
#include "_GEOMapFeatureAccessRequest.h"
#include "_GEOMapFeatureAccessRequestParameters.h"

@class NSString;

@interface GEOMapFeatureTileFinder : NSObject {
  /* instance variables */
  _GEOMapFeatureAccessRequestParameters *_requestParameters;
  unsigned long long _zoomLevel;
  int _tileSize;
  int _tileScale;
  int _tileSetStyle;
  NSString *_tileLoaderClientIdentifier;
  GEOTileLoader *_tileLoader;
  _GEOMapFeatureAccessRequest *_tileFinderRequest;
}

/* instance methods */
- (id)initWithZoomLevel:(unsigned long long)level tileSize:(int)size tileScale:(int)scale tileSetStyle:(int)style requestParameters:(id)parameters;
- (void)setExistingRequest:(id)request;
- (struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; })tileKeyWithX:(unsigned int)x y:(unsigned int)y;
- (id)findTileWithKey:(struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; })key handler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)findTilesAround:(struct { double x0; double x1; })around radius:(double)radius handler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)findTileDataAround:(struct { double x0; double x1; })around radius:(double)radius handler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)preloadTilesAround:(struct { double x0; double x1; })around radius:(double)radius preloadToDiskOnly:(BOOL)only completionHandler:(id /* block */)handler;
- (id)_tileFinderRequest;
- (id)_findTilesInList:(id)list preloadToDiskOnly:(BOOL)only tileDecoder:(id /* block */)decoder handler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)_tileLoaderClientIdentifier;
@end

#endif /* GEOMapFeatureTileFinder_h */