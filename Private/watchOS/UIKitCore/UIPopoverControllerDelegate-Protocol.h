//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPopoverControllerDelegate_Protocol_h
#define UIPopoverControllerDelegate_Protocol_h
@import Foundation;

@protocol UIPopoverControllerDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)popoverControllerShouldDismissPopover:(id)popover;
- (void)popoverControllerDidDismissPopover:(id)popover;
- (void)popoverController:(id)controller willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)rect inView:(inout id *)view;
@end

#endif /* UIPopoverControllerDelegate_Protocol_h */