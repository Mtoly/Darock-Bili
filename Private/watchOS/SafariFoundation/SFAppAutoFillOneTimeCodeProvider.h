//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFAppAutoFillOneTimeCodeProvider_h
#define SFAppAutoFillOneTimeCodeProvider_h
@import Foundation;

@class IMOneTimeCodeAccelerator, NSHashTable, NSMapTable, NSMutableDictionary, NSTimer, WBSAutoFillAssociatedDomainsManager;
@protocol OS_dispatch_queue, SFAppAutoFillOneTimeCodeProviderDelegate;

@interface SFAppAutoFillOneTimeCodeProvider : NSObject {
  /* instance variables */
  IMOneTimeCodeAccelerator *_messagesOneTimeCodeAccelerator;
  NSMutableDictionary *_currentReceivedOneTimeCodesBySource;
  NSHashTable *_observers;
  NSMapTable *_generatorObservers;
  NSObject<OS_dispatch_queue> *_internalQueue;
  NSTimer *_generatorTimer;
}

@property (weak, nonatomic) NSObject<SFAppAutoFillOneTimeCodeProviderDelegate> *delegate;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;

/* instance methods */
- (id)init;
- (id)initWithOptions:(unsigned long long)options;
- (void)didFocusOneTimeCodeField;
- (id)currentOneTimeCodesWithAuditToken:(struct { unsigned int x0[8] })token website:(id)website usernameHint:(id)hint fieldClassification:(long long)classification;
- (id)currentOneTimeCodesWithAppIdentifier:(id)identifier website:(id)website usernameHint:(id)hint fieldClassification:(long long)classification;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)urls fieldClassification:(long long)classification;
- (id)currentOneTimeCodesForWebBrowserWithWebsiteFrameURLs:(id)urls fieldClassification:(long long)classification inContext:(id)context;
- (long long)_domainBindingForRecievedOneTimeCode:(id)code forAppWithIdentifier:(id)identifier websiteURL:(id)url hasDomainBinding:(BOOL *)binding;
- (void)consumeCurrentOneTimeCode;
- (void)consumeMessagesOneTimeCodeWithGUID:(id)guid;
- (void)consumeOneTimeCode:(id)code;
- (void)_consumeOneTimeCode:(id)code;
- (id)_mostRecentlyReceivedOneTimeCode;
- (void)addObserver:(id)observer;
- (void)addObserver:(id)observer forOneTimeCode:(id)code;
- (void)removeObserver:(id)observer;
- (void)removeObserverForOneTimeCode:(id)code;
- (void)_notifyOneTimeCodeObserver;
- (void)_processOneTimeCodeFromMessages:(id)messages;
- (void)_processReceivedOneTimeCode:(id)code fromSource:(long long)source;
- (void)_validateCurrentOneTimeCodes;
- (long long)_url:(id)_url matchesURLFromOriginBoundCode:(id)code;
- (BOOL)_appWithAppIdentifierIsWebBrowser:(id)browser;
- (id)_secureURLWithDomain:(id)domain;
- (id)_savedAccountsWithPasswordsForURL:(id)url inContext:(id)context;
- (id)_sortedOneTimeCodesFromSavedAccounts:(id)accounts context:(id)context;
- (id)_associatedDomainEntriesForAppWithIdentifier:(id)identifier;
- (void)_startGeneratorTimer;
- (void)_stopGeneratorTimer;
- (void)test_deliverOneTimeCode:(id)code fromSource:(long long)source;
@end

#endif /* SFAppAutoFillOneTimeCodeProvider_h */