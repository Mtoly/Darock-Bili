//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCAssetLoadPropertiesLocalFileEvaluator_h
#define MPCAssetLoadPropertiesLocalFileEvaluator_h
@import Foundation;

#include "MPCPlaybackEngine.h"

@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

/* instance methods */
- (id)initWithPlaybackEngine:(id)engine;
- (id)evaluateAssetLoadProperties:(id)properties allowingCachedAssets:(BOOL)assets defaults:(id)defaults;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)asset;
- (BOOL)isHLSFileAsset:(id)asset;
- (long long)_recommendationForEvaluation:(id)evaluation assetCachingIsAllowed:(BOOL)allowed userDefaults:(id)defaults;
- (BOOL)_shouldUpgradeDownloadOnPlay:(id)play defaults:(id)defaults;
- (BOOL)_shouldUpgradeCacheOnPlay:(id)play assetCachingIsAllowed:(BOOL)allowed;
@end

#endif /* MPCAssetLoadPropertiesLocalFileEvaluator_h */