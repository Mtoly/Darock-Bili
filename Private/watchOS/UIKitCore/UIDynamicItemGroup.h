//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDynamicItemGroup_h
#define UIDynamicItemGroup_h
@import Foundation;

#include "UIBezierPath.h"
#include "UIDynamicItem-Protocol.h"

@class NSArray, NSMapTable, NSString;

@interface UIDynamicItemGroup : NSObject<UIDynamicItem> {
  /* instance variables */
  NSMapTable *_itemsToOffsets;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items;
@end

#endif /* UIDynamicItemGroup_h */