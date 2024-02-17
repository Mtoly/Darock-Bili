//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUILockBackOffViewController_h
#define CSLUILockBackOffViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CUISBlockedViewDataSource-Protocol.h"

@class CUISBlockedView, NSString;

@interface CSLUILockBackOffViewController : UIViewController<CUISBlockedViewDataSource> {
  /* instance variables */
  CUISBlockedView *_blockedView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)isPermanentlyBlockedForBlockedView:(id)view;
- (BOOL)isTemporarilyBlockedForBlockedView:(id)view;
- (long long)maxMinutesToBlockForBlockedView:(id)view;
- (double)remainingTimeInSecondsForBlockedView:(id)view;
@end

#endif /* CSLUILockBackOffViewController_h */