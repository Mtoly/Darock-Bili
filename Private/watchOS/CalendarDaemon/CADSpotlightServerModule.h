//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADSpotlightServerModule_h
#define CADSpotlightServerModule_h
@import Foundation;

#include "CADModule-Protocol.h"
#include "CADSpotlightIndexer.h"
#include "SpotlightDaemonClient-Protocol.h"

@class NSString;

@interface CADSpotlightServerModule : NSObject<SpotlightDaemonClient, CADModule>

@property (readonly, nonatomic) CADSpotlightIndexer *indexer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)activate;
- (void)deactivate;
- (void)receivedNotificationNamed:(id)named;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)named;
- (void)protectedDataDidBecomeAvailable;
- (void)provideDataForBundleID:(id)id protectionClass:(id)class itemIdentifier:(id)identifier typeIdentifier:(id)identifier options:(long long)options completionHandler:(id /* block */)handler;
- (void)provideFileURLForBundleID:(id)id protectionClass:(id)class itemIdentifier:(id)identifier typeIdentifier:(id)identifier options:(long long)options completionHandler:(id /* block */)handler;
- (void)reindexAllItemsForBundleID:(id)id protectionClass:(id)class acknowledgementHandler:(id /* block */)handler;
- (void)reindexItemsWithIdentifiers:(id)identifiers bundleID:(id)id protectionClass:(id)class acknowledgementHandler:(id /* block */)handler;
@end

#endif /* CADSpotlightServerModule_h */