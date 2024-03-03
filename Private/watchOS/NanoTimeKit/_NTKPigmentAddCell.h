//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKPigmentAddCell_h
#define _NTKPigmentAddCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "NTKPigmentEditOption.h"

@class CLKDevice, UIColor, UIImageView;

@interface _NTKPigmentAddCell : UICollectionViewCell

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption;
@property (readonly, nonatomic) UIImageView *swatch;
@property (readonly, nonatomic) UIImageView *check;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateCheck;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)selected;
- (void)setImage:(id)image;
@end

#endif /* _NTKPigmentAddCell_h */