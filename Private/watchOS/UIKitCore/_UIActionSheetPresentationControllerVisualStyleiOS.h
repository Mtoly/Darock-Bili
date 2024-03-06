//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIActionSheetPresentationControllerVisualStyleiOS_h
#define _UIActionSheetPresentationControllerVisualStyleiOS_h
@import Foundation;

#include "UIActionSheetPresentationControllerVisualStyle-Protocol.h"
#include "UIActionSheetiOSDismissActionView.h"
#include "UIColor.h"

@class NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject<UIActionSheetPresentationControllerVisualStyle>

@property (retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView;
@property (readonly) double dismissToContentSpacing;
@property (readonly) UIColor *dimmingViewColor;
@property (readonly) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)view;
@end

#endif /* _UIActionSheetPresentationControllerVisualStyleiOS_h */