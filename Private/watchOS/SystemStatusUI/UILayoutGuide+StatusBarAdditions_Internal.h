//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef UILayoutGuide_StatusBarAdditions_Internal_h
#define UILayoutGuide_StatusBarAdditions_Internal_h
@import Foundation;

@interface UILayoutGuide (StatusBarAdditions_Internal) <UILayoutItem_Internal>
/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_ui_frame;
- (void)set_ui_frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })set_ui_frame;
- (id)_ui_superview;
- (id)_ui_view;
- (BOOL)_ui_usesManualLayout;
- (void)set_ui_usesManualLayout:(BOOL)layout;
- (void)_ui_addToView:(id)view atIndex:(long long)index;
- (void)_ui_addSubLayoutItem:(id)item;
- (void)_ui_insertSubLayoutItem:(id)item atIndex:(long long)index;
- (void)_ui_removeFromParentLayoutItem;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)change;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
@end

#endif /* UILayoutGuide_StatusBarAdditions_Internal_h */