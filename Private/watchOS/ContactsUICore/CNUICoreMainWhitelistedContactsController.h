//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUICoreMainWhitelistedContactsController_h
#define CNUICoreMainWhitelistedContactsController_h
@import Foundation;

#include "CNUICoreContactStoreFacade-Protocol.h"
#include "CNUICoreFamilyMemberContactsModelFetching-Protocol.h"
#include "CNUICoreFamilyMemberContactsObserver-Protocol.h"
#include "CNUICoreFamilyMemberWhitelistedContactsDataSource-Protocol.h"

@class CNFuture, NSArray, NSString;
@protocol CNCancelable, CNDowntimeWhitelistContainerFetching, CNScheduler, CNSchedulerProvider;

@interface CNUICoreMainWhitelistedContactsController : NSObject<CNUICoreFamilyMemberWhitelistedContactsDataSource>

@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsModelFetching> *modelFetcher;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStoreFacade;
@property (readonly, nonatomic) NSObject<CNDowntimeWhitelistContainerFetching> *downtimeContainerFetcher;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundOrImmediateScheduler;
@property (retain, nonatomic) NSArray *familyMemberContactItems;
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture;
@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture;
@property (readonly, nonatomic) NSObject<CNCancelable> *contactStoreDidChangeToken;
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)controllerWithOptions:(id)options schedulerProvider:(id)provider;

/* instance methods */
- (id)init;
- (id)initWiththOptions:(id)options mainContactStoreFacade:(id)facade schedulerProvider:(id)provider;
- (id)initWithModelFetcher:(id)fetcher mainContactStoreFacade:(id)facade downtimeContainerFetcher:(id)fetcher schedulerProvider:(id)provider;
- (void)setupChangeNotificationResponse;
- (void)dealloc;
- (BOOL)hasDowntimeWhitelistContainer;
- (void)triggerContactItemsFetch;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (void)updateWhitelistByAddingContacts:(id)contacts;
- (void)updateWhitelistByUpdatingContacts:(id)contacts;
- (void)updateWhitelistByRemovingContacts:(id)contacts;
- (id)contactRepresentingItem:(id)item;
- (void)finishWhitelistedContactsTasks;
@end

#endif /* CNUICoreMainWhitelistedContactsController_h */