//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXGestureRecorderStyleProvider_h
#define AXGestureRecorderStyleProvider_h
@import Foundation;

@interface AXGestureRecorderStyleProvider : NSObject
/* instance methods */
- (id)instructionsLabelFont;
- (id)instructionsLabelTextColor;
- (id)instructionsLabelBackgroundColor;
- (id)instructionsLabelShadowColor;
- (struct CGSize { double x0; double x1; })instructionsLabelShadowOffset;
- (double)instructionsLabelHorizontalInset;
- (id)gestureRecorderViewBackgroundColor;
- (id)gestureRecorderViewBackgroundGradientTopColor;
- (id)gestureRecorderViewBackgroundGradientBottomColor;
- (double)minimumFingerLineWidth;
- (double)maximumFingerLineWidth;
- (id)tracingDynamicFingerColor;
- (id)finalDynamicFingerColor;
- (id)staticFingerColor;
- (id)fingerLineGradientTopColor;
- (id)fingerLineGradientBottomColor;
- (float)fingerLineGradientTopColorLocation;
- (float)fingerLineGradientBottomColorLocation;
- (id)dynamicFingerLineGradientTopColor;
- (id)dynamicFingerLineGradientBottomColor;
- (float)dynamicFingerLineGradientTopColorLocation;
- (float)dynamicFingerLineGradientBottomColorLocation;
- (id)fingerLineOuterBevelColor;
- (double)fingerLineOuterBevelWidth;
- (id)dynamicFingerLineOuterBevelColor;
- (double)dynamicFingerLineOuterBevelWidth;
- (id)fingerLineDropDownShadowColor;
- (struct CGSize { double x0; double x1; })fingerLineDropDownShadowOffset;
- (double)fingerLineDropDownShadowRadius;
- (double)fingerLineDropDownShadowOpacity;
- (id)dynamicFingerLineDropDownShadowColor;
- (struct CGSize { double x0; double x1; })dynamicFingerLineDropDownShadowOffset;
- (double)dynamicFingerLineDropDownShadowRadius;
- (double)dynamicFingerLineDropDownShadowOpacity;
@end

#endif /* AXGestureRecorderStyleProvider_h */