//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISplitViewControllerDisplayModeBarButtonItem_h
#define UISplitViewControllerDisplayModeBarButtonItem_h
@import Foundation;

#include "UIBarButtonItem.h"
#include "UISplitViewControllerImpl-Protocol.h"

@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem

@property (weak, nonatomic) NSObject<UISplitViewControllerImpl> *impl;
@property (readonly, nonatomic) BOOL hasBeenUsed;

/* instance methods */
- (void)_setOwningNavigationItem:(id)item;
- (id)target;
- (SEL)action;
- (void)_wasUsed;
- (id)_impl;
- (void)_setImpl:(id)impl;
- (BOOL)_hasBeenUsed;
@end

#endif /* UISplitViewControllerDisplayModeBarButtonItem_h */