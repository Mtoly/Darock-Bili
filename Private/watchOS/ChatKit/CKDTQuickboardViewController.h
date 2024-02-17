//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKDTQuickboardViewController_h
#define CKDTQuickboardViewController_h
@import Foundation;

#include "PUICQuickboardViewController.h"
#include "CKBrowserViewControllerSendDelegate-Protocol.h"

@class NSString, UIViewController;

@interface CKDTQuickboardViewController : PUICQuickboardViewController<CKBrowserViewControllerSendDelegate> {
  /* instance variables */
  UIViewController *_digitalTouchViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)viewDidLoad;
- (void)startEditingPayload:(id)payload;
- (void)startEditingPayload:(id)payload dismiss:(BOOL)dismiss;
- (void)openURL:(id)url pluginID:(id)id completionHandler:(id /* block */)handler;
- (void)openURL:(id)url applicationIdentifier:(id)identifier pluginID:(id)id completionHandler:(id /* block */)handler;
- (void)setLocalUserIsTyping:(BOOL)typing;
- (void)dismissAndReloadInputViews:(BOOL)views;
- (void)dismiss;
- (void)requestPresentationStyleExpanded:(BOOL)expanded;
- (void)commitPayload:(id)payload;
@end

#endif /* CKDTQuickboardViewController_h */