//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef SpotlightDaemon_h
#define SpotlightDaemon_h

#import "CSDecryptInfo.h"
#import "CSImportInfo.h"
#import "CSIndexAgent.h"
#import "CSIndexClientConnection.h"
#import "CSIndexClientConnectionKey.h"
#import "CSRecieverState.h"
#import "CSSearchAgent.h"
#import "CSSearchClientConnection.h"
#import "CSSearchClientConnectionKey.h"
#import "MDAgent.h"
#import "MDSearchableIndexService.h"
#import "SDConnectionConfiguration.h"
#import "SDDirtyIdleTimer.h"
#import "SDEventMonitor.h"
#import "SDLockHandler.h"
#import "SDMigrationMonitor.h"
#import "SDSignalHandler.h"
#import "SDSodiumFeature.h"
#import "SDSodiumSynonyms.h"
#import "SDTrace.h"
#import "SDTraceItem.h"
#import "SDXPCClientConnection.h"
#import "SPConcreteCoreSpotlightIndexer.h"
#import "SPCoreSpotlightContactsUpdater.h"
#import "SPCoreSpotlightExtensionsTask.h"
#import "SPCoreSpotlightIndexer.h"
#import "SPCoreSpotlightIndexerTask.h"
#import "SPCoreSpotlightInteractionHandler.h"
#import "SPCoreSpotlightLiveQueryTask.h"
#import "SPCoreSpotlightTask.h"
#import "SPQueryJob.h"
#import "SPQueryResultsQueue.h"
#import "SpotlightDaemonServer.h"
#import "SpotlightReceiverConnection.h"
#import "SpotlightSender.h"
#import "SpotlightSenderState.h"
#import "_SPBucketSet.h"
#import "CSSearchableIndexInterface-Protocol.h"
#import "CSSearchableIndexServiceInterface-Protocol.h"
#import "CSXPCConnectionConfiguration-Protocol.h"
#import "MDIndexer-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "PLAssetsdDirectServiceProtocol-Protocol.h"
#import "SDEventHandlerProvider-Protocol.h"
#import "UMUserPersonaUpdateObserver-Protocol.h"

#endif /* SpotlightDaemon_h */