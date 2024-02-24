//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef UINavigationItem_PUICSearchController_h
#define UINavigationItem_PUICSearchController_h
@import Foundation;

#include "UIViewController.h"
#include "PUICSearchField.h"
#include "PUICSearchFieldDelegate-Protocol.h"
#include "PUICTextFieldDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol PUICSearchResultsUpdating;

@interface UINavigationItem (PUICSearchController)
/* instance methods */
- (id)puic_searchController;
- (void)puic_setSearchController:(id)controller;
@end

#endif /* UINavigationItem_PUICSearchController_h */