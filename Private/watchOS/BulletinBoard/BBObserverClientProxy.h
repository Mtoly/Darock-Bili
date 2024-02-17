//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBObserverClientProxy_h
#define BBObserverClientProxy_h
@import Foundation;

#include "BBObserverClientInterface-Protocol.h"
#include "BBObserverServerInterface-Protocol.h"
#include "BBServer.h"

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBObserverClientProxy : NSObject<BBObserverServerInterface, BBObserverClientInterface>

@property (weak, nonatomic) BBServer *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSMutableDictionary *bulletinIDsToTransaction;
@property (copy, nonatomic) NSString *clientBundleIdentifier;

/* class methods */
+ (id)xpcInterface;

/* instance methods */
- (id)initWithServer:(id)server connection:(id)connection calloutQueue:(id)queue;
- (id)initWithServer:(id)server connection:(id)connection queue:(id)queue calloutQueue:(id)queue;
- (void)dealloc;
- (id)description;
- (void)removeTransaction:(id)transaction;
- (id)transactionBulletinIDs;
- (id)currentTransactionForBulletinID:(id)id;
- (unsigned long long)incrementedTransactionIDForBulletinID:(id)id;
- (void)updateBulletin:(id)bulletin withHandler:(id /* block */)handler;
- (void)updateSectionInfo:(id)info;
- (void)updateSectionParameters:(id)parameters forSectionID:(id)id;
- (void)removeSection:(id)section;
- (void)updateGlobalSettings:(id)settings;
- (void)noteServerReceivedResponseForBulletin:(id)bulletin;
- (void)noteBulletinsLoadedForSectionID:(id)id;
- (void)getObserverDebugInfo:(id /* block */)info;
- (void)setObserverFeed:(unsigned long long)feed attachToLightsAndSirensGateway:(id)gateway;
- (void)setObserverFeed:(unsigned long long)feed asLightsAndSirensGateway:(id)gateway priority:(unsigned long long)priority;
- (void)handleResponse:(id)response withCompletion:(id /* block */)completion;
- (void)finishedWithBulletinID:(id)id transactionID:(unsigned long long)id;
- (void)clearSection:(id)section;
- (void)clearBulletinsFromDate:(id)date toDate:(id)date inSections:(id)sections;
- (void)clearBulletinIDs:(id)ids inSection:(id)section;
- (void)removeBulletins:(id)bulletins inSection:(id)section fromFeeds:(unsigned long long)feeds;
- (void)requestNoticesBulletinsForSectionID:(id)id;
- (void)requestNoticesBulletinsForAllSections;
- (void)getSectionInfoWithHandler:(id /* block */)handler;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)handler;
- (void)getSectionInfoForSectionIDs:(id)ids withHandler:(id /* block */)handler;
- (void)getSectionParametersForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)getUniversalSectionIDForSectionID:(id)id withHandler:(id /* block */)handler;
- (void)getBulletinsWithHandler:(id /* block */)handler;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)date withHandler:(id /* block */)handler;
- (void)getBulletinsForPublisherMatchIDs:(id)ids sectionID:(id)id withHandler:(id /* block */)handler;
@end

#endif /* BBObserverClientProxy_h */