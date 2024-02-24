//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapDataSubscriptionDownloader_h
#define GEOMapDataSubscriptionDownloader_h
@import Foundation;

#include "GEOMapDataSubscription.h"
#include "GEOMapDataSubscriptionDataDownloader-Protocol.h"
#include "GEOMapDataSubscriptionDataDownloaderDelegate-Protocol.h"
#include "GEOMapDataSubscriptionDownloaderDelegate-Protocol.h"
#include "GEOMapDataSubscriptionTileDownloader.h"
#include "GEOPowerAssertion.h"
#include "GEOResourceManifestManager.h"
#include "GEOTileDB.h"
#include "NSProgressReporting-Protocol.h"

@class NSMutableArray, NSProgress, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface GEOMapDataSubscriptionDownloader : NSObject<GEOMapDataSubscriptionDataDownloaderDelegate, NSProgressReporting> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  GEOPowerAssertion *_powerAssertion;
  NSObject<OS_os_log> *_log;
  NSString *_logPrefix;
  GEOTileDB *_diskCache;
  GEOResourceManifestManager *_manifestManager;
  GEOMapDataSubscriptionTileDownloader *_tileDownloader;
  NSObject<GEOMapDataSubscriptionDataDownloader> *_currentDownloader;
  NSMutableArray *_remainingDownloaders;
  long long _updateType;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
  BOOL _paused;
  BOOL _canceled;
}

@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly, weak, nonatomic) NSObject<GEOMapDataSubscriptionDownloaderDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long numberOfTilesConsidered;
@property (readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property (readonly, nonatomic) unsigned long long successfulTiles;
@property (readonly, nonatomic) unsigned long long failedTiles;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

/* instance methods */
- (id)initWithSubscription:(id)subscription diskCache:(id)cache delegate:(id)delegate delegateQueue:(id)queue reason:(unsigned char)reason requestOptions:(unsigned long long)options manifestManager:(id)manager log:(id)log logPrefix:(id)prefix tileRequesterCreationBlock:(id /* block */)block tileDownloader:(id)downloader updateType:(long long)type;
- (id)initWithSubscription:(id)subscription diskCache:(id)cache delegate:(id)delegate delegateQueue:(id)queue reason:(unsigned char)reason requestOptions:(unsigned long long)options manifestManager:(id)manager log:(id)log logPrefix:(id)prefix tileRequesterCreationBlock:(id /* block */)block tileDownloader:(id)downloader updateType:(long long)type dataTypeMask:(unsigned long long)mask;
- (void)resume;
- (void)pause;
- (void)_finishWithError:(id)error;
- (void)cancel;
- (void)downloader:(id)downloader didFinishWithError:(id)error;
@end

#endif /* GEOMapDataSubscriptionDownloader_h */