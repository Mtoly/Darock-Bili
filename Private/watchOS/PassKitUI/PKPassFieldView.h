//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassFieldView_h
#define PKPassFieldView_h
@import Foundation;

#include "UIView.h"
#include "PKDiffView.h"
#include "PKPassColorProfile.h"
#include "PKPassFieldTemplate.h"

@class PKPassField, UILabel;

@interface PKPassFieldView : UIView {
  /* instance variables */
  BOOL _needsRecalculation;
  struct CGSize { double width; double height; } _cachedSize;
  long long _background;
}

@property (retain, nonatomic) PKDiffView *diffView;
@property (retain, nonatomic) PKPassField *field;
@property (retain, nonatomic) PKPassFieldTemplate *fieldTemplate;
@property (retain, nonatomic) PKPassColorProfile *colorProfile;
@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

/* class methods */
+ (id)newViewForField:(id)field fieldTemplate:(id)template;

/* instance methods */
- (id)initWithField:(id)field fieldTemplate:(id)template;
- (void)dealloc;
- (id)description;
- (void)setColorProfile:(id)profile background:(long long)background;
- (void)layoutSubviews;
- (void)invalidateCachedFieldSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)presentDiff:(id)diff inView:(id)view completion:(id /* block */)completion;
- (BOOL)_shouldDisplayLabel;
- (struct CGSize { double x0; double x1; })_resizeMultiLineValueFontForAvailableSize:(struct CGSize { double x0; double x1; })size;
- (id)_labelAttributedStringForColorProfile:(id)profile;
- (id)_valueAttributedStringForColorProfile:(id)profile;
@end

#endif /* PKPassFieldView_h */