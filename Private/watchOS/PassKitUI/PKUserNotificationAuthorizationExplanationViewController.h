//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKUserNotificationAuthorizationExplanationViewController_h
#define PKUserNotificationAuthorizationExplanationViewController_h
@import Foundation;

#include "PKExplanationViewController.h"

@class NSString, PKUserNotificationAuthorizationController;
@protocol PKPassLibraryDataProvider;

@interface PKUserNotificationAuthorizationExplanationViewController : PKExplanationViewController {
  /* instance variables */
  PKUserNotificationAuthorizationController *_controller;
  NSObject<PKPassLibraryDataProvider> *_dataProvider;
  unsigned long long _contentTypeToDisplay;
  BOOL _didBeginWalletSettingsSubject;
  NSString *_referralSource;
  NSString *_productType;
}

@property (copy, nonatomic) id /* block */ nextStepHandler;
@property (readonly, nonatomic) BOOL isPresentingNotificationAuthorizationPrompt;

/* instance methods */
- (id)initWithController:(id)controller context:(long long)context dataProvider:(id)provider;
- (id)initWithController:(id)controller contentType:(unsigned long long)type context:(long long)context dataProvider:(id)provider;
- (void)viewDidAppear:(BOOL)appear;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)explanationViewDidSelectSetupLater:(id)later;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)_reportViewDidAppear;
- (void)_reportNotificationPromptDidAppear;
- (void)_reportContinueButtonTapped;
- (void)_reportNotNowButtonTapped;
- (void)_reportNotificationAuthorizationButtonTapped:(BOOL)tapped;
- (id)_analyticsPartialEventDictionaryWithButtonTag:(id)tag pageTag:(id)tag;
@end

#endif /* PKUserNotificationAuthorizationExplanationViewController_h */