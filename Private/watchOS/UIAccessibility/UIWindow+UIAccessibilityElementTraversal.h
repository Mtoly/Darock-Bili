//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef UIWindow_UIAccessibilityElementTraversal_h
#define UIWindow_UIAccessibilityElementTraversal_h
@import Foundation;

@interface UIWindow (UIAccessibilityElementTraversal)
/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axConvertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toWindow:(id)window;
- (BOOL)_accessibilityIsModalWithKeyboard;
@end

#endif /* UIWindow_UIAccessibilityElementTraversal_h */