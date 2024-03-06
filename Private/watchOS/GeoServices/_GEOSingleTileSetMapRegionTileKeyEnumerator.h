//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOSingleTileSetMapRegionTileKeyEnumerator_h
#define _GEOSingleTileSetMapRegionTileKeyEnumerator_h
@import Foundation;

#include "GEOMapRegion.h"
#include "GEOTileKeyEnumerator-Protocol.h"

@class NSArray, NSString;

@interface _GEOSingleTileSetMapRegionTileKeyEnumerator : NSObject<GEOTileKeyEnumerator> {
  /* instance variables */
  GEOMapRegion *_region;
  int _style;
  int _size;
  int _scale;
  NSArray *_zoomLevels;
  long long _zoomMode;
  unsigned long long _currentZIndex;
  unsigned int _currentOffset;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMapRegion:(id)region tileSet:(id)set zoomMode:(long long)mode;
- (BOOL)continueEnumeratingTileKeysWithBlock:(id /* block */)block;
@end

#endif /* _GEOSingleTileSetMapRegionTileKeyEnumerator_h */