//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCContentContext_Protocol_h
#define FCContentContext_Protocol_h
@import Foundation;

#include "FCAVAssetCacheType-Protocol.h"
#include "FCAVAssetDownloadManager.h"
#include "FCAVAssetFactoryType-Protocol.h"
#include "FCAVAssetKeyCacheType-Protocol.h"
#include "FCAVAssetKeyManagerType-Protocol.h"
#include "FCAVAssetKeyServiceType-Protocol.h"
#include "FCAVAssetPrewarming-Protocol.h"
#include "FCAVAssetResourceLoaderType-Protocol.h"
#include "FCArticleController.h"
#include "FCAssetKeyCacheType-Protocol.h"
#include "FCAssetKeyManagerType-Protocol.h"
#include "FCAssetKeyServiceType-Protocol.h"
#include "FCAssetManager.h"
#include "FCContentContext-Protocol.h"
#include "FCContentContextInternal.h"
#include "FCContextConfiguration.h"
#include "FCCoreConfigurationManager-Protocol.h"
#include "FCCoreConfigurationObserving-Protocol.h"
#include "FCFeedDatabaseProtocol-Protocol.h"
#include "FCFlintResourceManager.h"
#include "FCNetworkBehaviorMonitor.h"
#include "FCNetworkReachabilityRequirement-Protocol.h"
#include "FCNetworkReachabilityRequirementObserving-Protocol.h"
#include "FCNewsAppConfigurationManager-Protocol.h"
#include "FCPuzzleController.h"
#include "FCPuzzleTypeController.h"
#include "FCSportsEventController.h"
#include "FCTagController.h"

@class NSString, NSURL;
@protocol FCBackgroundTaskable, FCPPTContext;

@protocol FCContentContext <NSObject, FCCacheFlushing>

@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *contentEnvironment;
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager;
@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager;
@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) NSObject<FCAVAssetPrewarming> *avAssetPrewarmer;
@property (readonly, nonatomic) NSObject<FCAVAssetFactoryType> *avAssetFactory;
@property (readonly, nonatomic) FCArticleController *articleController;
@property (readonly, nonatomic) FCTagController *tagController;
@property (readonly, nonatomic) FCSportsEventController *sportsEventController;
@property (readonly, nonatomic) FCPuzzleController *puzzleController;
@property (readonly, nonatomic) FCPuzzleTypeController *puzzleTypeController;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly, copy, nonatomic) NSString *contentDirectory;
@property (readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property (readonly, copy, nonatomic) NSString *tabiResourcesContentDirectory;
@property (readonly, copy, nonatomic) NSString *tabiModelsContentDirectory;
@property (readonly, nonatomic) NSObject<FCContentContextInternal> *internalContentContext;
@property (readonly, weak, nonatomic) NSObject<FCBackgroundTaskable> *backgroundTaskable;
@property (readonly, nonatomic) NSObject<FCPPTContext> *pptContext;
@property (readonly, nonatomic) NSObject<FCFeedDatabaseProtocol> *feedDatabase;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;

/* instance methods */
- (id)news_core_ConfigurationManager;
- (id)magazinesConfigurationManager;
- (void)ppt_overrideFeedEndpoint:(long long)endpoint;
- (void)ppt_prewarmFeedDatabase;
- (id)recordSourceWithSchema:(id)schema;
- (id)recordTreeSourceWithRecordSources:(id)sources;
- (id)interestTokenForContentManifest:(id)manifest;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)threshold exceptForFlusher:(id)flusher;
- (id)convertRecords:(id)records;
@end

#endif /* FCContentContext_Protocol_h */