//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFColorPaletteColor_h
#define HFColorPaletteColor_h
@import Foundation;

#include "HFColorCollection.h"
#include "HFColorLikeObject-Protocol.h"
#include "NAEquatable-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, UIColor;

@interface HFColorPaletteColor : NSObject<NAEquatable, NSCopying>

@property (readonly, nonatomic) HFColorCollection *colorCollection;
@property (readonly, nonatomic) NSObject<HFColorLikeObject> *colorValue;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) BOOL isNaturalLightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;
- (id)initWithUIColor:(id)uicolor;
- (id)initWithColorValue:(id)value;
- (id)initWithColorCollection:(id)collection;
- (id)initWithNaturalLightColor;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)colorByAdjustingToColorProfile:(id)profile;
- (BOOL)isSimilarToColor:(id)color;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFColorPaletteColor_h */