//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKServiceAddPaymentPassViewController_h
#define PKServiceAddPaymentPassViewController_h
@import Foundation;

#include "PKNavigationController.h"
#include "PKServiceAddPaymentPassViewControllerProtocol-Protocol.h"

@class NSArray, NSString, PKAddPaymentPassRequestConfiguration, PKPaymentWebService;

@interface PKServiceAddPaymentPassViewController : PKNavigationController<PKServiceAddPaymentPassViewControllerProtocol> {
  /* instance variables */
  PKAddPaymentPassRequestConfiguration *_configuration;
  NSArray *_webServices;
  PKPaymentWebService *_managingDeviceWebService;
  BOOL _entitled;
  NSString *_teamID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

/* instance methods */
- (id)init;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)_hostApplicationWillEnterForeground;
- (void)_hostApplicationDidEnterBackground;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillAppear:(BOOL)appear;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (void)setConfiguration:(id)configuration completionHandler:(id /* block */)handler;
- (void)_launchFlowWithFlowManager;
- (void)generateRequestWithCertificateChain:(id)chain nonce:(id)nonce nonceSignature:(id)signature completionHandler:(id /* block */)handler;
- (void)_applyCancelItem:(id)item;
- (void)_cancel;
@end

#endif /* PKServiceAddPaymentPassViewController_h */