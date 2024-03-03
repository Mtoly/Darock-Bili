//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKBasicWebViewController_h
#define PKBasicWebViewController_h
@import Foundation;

#include "UIViewController.h"
#include "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, WKWebView;

@interface PKBasicWebViewController : UIViewController<WKNavigationDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURL:(id)url;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
@end

#endif /* PKBasicWebViewController_h */