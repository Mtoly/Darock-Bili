//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdCloudClient_h
#define PLAssetsdCloudClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@interface PLAssetsdCloudClient : PLAssetsdBaseClient
/* instance methods */
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)asset mediaAssetType:(unsigned long long)type completionHandler:(id /* block */)handler;
- (void)cancelCPLDownloadWithContext:(id)context completionHandler:(id /* block */)handler;
- (void)downloadCloudPhotoLibraryAsset:(id)asset resourceType:(unsigned long long)type highPriority:(BOOL)priority trackCPLDownload:(BOOL)cpldownload downloadIsTransient:(BOOL)transient proposedTaskIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)requestCPLDownloadImageDataForAssets:(id)assets format:(unsigned long long)format doneTokens:(id)tokens completionHandler:(id /* block */)handler;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)computeFingerPrintsOfAsset:(id)asset synchronously:(BOOL)synchronously completionHandler:(id /* block */)handler;
@end

#endif /* PLAssetsdCloudClient_h */