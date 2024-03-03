//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSListControllerAppearanceProvider_Protocol_h
#define PSListControllerAppearanceProvider_Protocol_h
@import Foundation;

@protocol PSListControllerAppearanceProvider <NSObject>
/* instance methods */
- (long long)tableViewStyleForListController:(id)controller;
- (void)customizeTableView:(id)view inContainerView:(id)view hostedInSetupController:(BOOL)controller forListController:(id)controller;
- (id)cellForSpecifier:(id)specifier inController:(id)controller;
- (double)estimatedHeightOfRowForCellWithIndexPath:(id)path inController:(id)controller;
- (void)listController:(id)controller updateSectionContentInsetAnimated:(BOOL)animated isRegularWidth:(BOOL)width contentInsetInitialized:(BOOL)initialized contentInsetInitializedApplicator:(id /* block */)applicator;
@end

#endif /* PSListControllerAppearanceProvider_Protocol_h */