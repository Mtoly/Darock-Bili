//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKMacToolbarItemProvider_Protocol_h
#define CKMacToolbarItemProvider_Protocol_h
@import Foundation;

@protocol CKMacToolbarItemProvider <NSObject>
/* instance methods */
- (void)configureWithToolbarController:(id)controller;
- (void)providerWillBeRemovedFromToolbarController:(id)controller;
- (id)toolbarItemForIdentifier:(id)identifier;
@optional
/* instance methods */
- (id)virtualView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })virtualToolbarContentInsets;
- (BOOL)prefersBottomDividerHidden;
- (double)virtualToolbarPreferredHeight;
- (void)toolbarWillAddItem:(id)item;
- (void)toolbarDidRemoveItem:(id)item;
- (BOOL)reparentToolbarItem:(id)item;
- (BOOL)itemProviderDisablesTouches;
- (void)toolbarSizeMetricsDidChange;
@end

#endif /* CKMacToolbarItemProvider_Protocol_h */