//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKModularSmallColumnTemplateView_h
#define NTKModularSmallColumnTemplateView_h
@import Foundation;

#include "NTKModularTemplateView.h"

@class CLKComplicationTemplateModularSmallColumnsText, CLKUIColoringLabel;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
  /* instance variables */
  CLKUIColoringLabel *_row1Column1Label;
  CLKUIColoringLabel *_row1Column2Label;
  CLKUIColoringLabel *_row2Column1Label;
  CLKUIColoringLabel *_row2Column2Label;
  BOOL _calculatedFontSize;
}

@property (readonly, @dynamic, nonatomic) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;
+ (BOOL)supportsComplicationFamily:(long long)family;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_newLabelSubview;
- (id)_headerFontOfSize:(double)size;
- (id)_bodyFontOfSize:(double)size;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)block;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)block;
- (void)_layoutContentView;
- (void)_update;
@end

#endif /* NTKModularSmallColumnTemplateView_h */