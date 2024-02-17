//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKGraphTileBackgroundRenderingContext_h
#define _HKGraphTileBackgroundRenderingContext_h
@import Foundation;

#include "HKGraphTile.h"
#include "HKGraphViewRenderer.h"
#include "HKGraphViewTileThreadRenderer-Protocol.h"

@interface _HKGraphTileBackgroundRenderingContext : NSObject<HKGraphViewTileThreadRenderer>

@property (readonly, nonatomic) HKGraphTile *graphTile;
@property (readonly, nonatomic) HKGraphViewRenderer *graphViewRenderer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tileSize;
@property (readonly, nonatomic) long long configurationChangedCounter;

/* instance methods */
- (id)initWithGraphTile:(id)tile graphViewRenderer:(id)renderer tileSize:(struct CGSize { double x0; double x1; })size configurationChangedCounter:(long long)counter;
- (id)debugDescription;
- (void)renderTileContent;
- (BOOL)sameForRendering:(id)rendering;
@end

#endif /* _HKGraphTileBackgroundRenderingContext_h */