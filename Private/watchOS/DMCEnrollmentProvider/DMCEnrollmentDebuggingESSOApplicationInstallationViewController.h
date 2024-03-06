//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCEnrollmentDebuggingESSOApplicationInstallationViewController_h
#define DMCEnrollmentDebuggingESSOApplicationInstallationViewController_h
@import Foundation;

#include "DMCEnrollmentTemplateTableViewController.h"
#include "DMCEnrollmentConfirmationView.h"
#include "DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate-Protocol.h"

@class NSArray;

@interface DMCEnrollmentDebuggingESSOApplicationInstallationViewController : DMCEnrollmentTemplateTableViewController

@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;
@property (weak) NSObject<DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *requiredEntitlements;
@property (nonatomic) BOOL requiredAppInstalled;

/* instance methods */
- (id)initWithDelegate:(id)delegate appBundleIDs:(id)ids requiredEntitlements:(id)entitlements;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)_setupNavigationBar;
- (void)leftBarButtonTapped:(id)tapped;
- (void)updateContinueButtonStatus;
@end

#endif /* DMCEnrollmentDebuggingESSOApplicationInstallationViewController_h */