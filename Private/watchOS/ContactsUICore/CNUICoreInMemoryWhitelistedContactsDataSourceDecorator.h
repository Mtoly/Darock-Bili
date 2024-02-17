//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUICoreInMemoryWhitelistedContactsDataSourceDecorator_h
#define CNUICoreInMemoryWhitelistedContactsDataSourceDecorator_h
@import Foundation;

#include "CNUICoreContactEditingSession.h"
#include "CNUICoreContactStoreFacade-Protocol.h"
#include "CNUICoreContactTypeAssessor.h"
#include "CNUICoreFamilyInfoFetching-Protocol.h"
#include "CNUICoreFamilyMemberContactsObserver-Protocol.h"
#include "CNUICoreFamilyMemberWhitelistedContactsDataSource-Protocol.h"

@class NSArray, NSString;
@protocol CNCancelable, CNSchedulerProvider;

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject<CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource>

@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberWhitelistedContactsDataSource> *dataSource;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStore;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly, nonatomic) NSObject<CNUICoreFamilyInfoFetching> *familyInfoRetriever;
@property (readonly, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (retain, nonatomic) CNUICoreContactEditingSession *editingSession;
@property (retain, nonatomic) NSArray *familyMemberContactItemsSnapshot;
@property (retain, nonatomic) NSObject<CNCancelable> *endEditingNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;

/* class methods */
+ (id)modelBuilderForAddedContacts:(id)contacts withContactTypeAssessor:(id)assessor;
+ (id)modelBuilderForContacts:(id)contacts withContactTypeAssessor:(id)assessor;

/* instance methods */
- (id)initWithDataSource:(id)source schedulerProvider:(id)provider;
- (id)initWithDataSource:(id)source familyInfoRetriever:(id)retriever schedulerProvider:(id)provider;
- (void)dealloc;
- (id)contactTypeAssesor;
- (void)familyMemberContactItemsDidChange;
- (void)notifyObserverContactItemsChange;
- (void)executeBlockIfEditingSessionNotInProgress:(id /* block */)progress;
- (void)startEditingSessionIfNecessary;
- (void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)items;
- (void)flushEditingSession;
- (id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;
- (id)familyMemberContactItemsFromDataSource;
- (void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)items;
- (void)updateWhitelistByAddingContacts:(id)contacts;
- (void)updateWhitelistByUpdatingContacts:(id)contacts;
- (void)updateWhitelistByRemovingContacts:(id)contacts;
- (id)contactRepresentingItem:(id)item;
- (void)finishWhitelistedContactsTasks;
- (void)persistInMemoryContactsWhitelistState;
- (void)finishPersistenceOfInMemoryContactsWhitelistState;
@end

#endif /* CNUICoreInMemoryWhitelistedContactsDataSourceDecorator_h */