//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoEditRenderer_h
#define PLPhotoEditRenderer_h
@import Foundation;

#include "PLEditSource.h"

@class NSDictionary, NUComposition, PICompositionController;

@interface PLPhotoEditRenderer : NSObject {
  /* instance variables */
  NSDictionary *__smartToneAdjustments;
  double _smartToneLevelInCachedAdjustments;
  NSDictionary *_smartToneStatisticsInCachedAdjustments;
  NSDictionary *__smartColorAdjustments;
  double _smartColorLevelInCachedAdjustments;
  NSDictionary *_smartColorStatisticsInCachedAdjustments;
  NSDictionary *__smartBWAdjustments;
  double _smartBWLevelInCachedAdjustments;
}

@property (readonly, retain, nonatomic) NUComposition *composition;
@property (nonatomic) double displayMaximumEDRHeadroom;
@property (nonatomic) double displayCurrentEDRHeadroom;
@property (readonly, retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (nonatomic) long long smartFiltersCubeSize;
@property (readonly, nonatomic) double smartToneBaseBrightness;
@property (readonly, nonatomic) double smartToneBaseContrast;
@property (readonly, nonatomic) double smartToneBaseExposure;
@property (readonly, nonatomic) double smartToneBaseHighlights;
@property (readonly, nonatomic) double smartToneBaseShadows;
@property (readonly, nonatomic) double smartToneBaseBlackPoint;
@property (readonly, nonatomic) double smartToneBaseLocalLight;
@property (readonly, nonatomic) double smartColorBaseContrast;
@property (readonly, nonatomic) double smartColorBaseSaturation;
@property (readonly, nonatomic) double smartColorBaseCast;
@property (readonly, nonatomic) double smartBWBaseStrength;
@property (readonly, nonatomic) double smartBWBaseNeutralGamma;
@property (readonly, nonatomic) double smartBWBaseTone;
@property (readonly, nonatomic) double smartBWBaseHue;
@property (readonly, nonatomic) double smartBWBaseGrain;

/* class methods */
+ (void)configureNeutrinoCacheDirectoryIfNeeded;
+ (id)rendererForVideoURL:(id)url livePhotoStillURL:(id)url adjustmentData:(id)data formatIdentifier:(id)identifier formatVersion:(id)version;
+ (id)compositionWithController:(id)controller source:(id)source;
+ (id)newImageDataFromCGImage:(struct CGImage *)cgimage withCompressionQuality:(double)quality metadataSourceImageURL:(id)url preserveRegionsInMetadata:(BOOL)metadata;
+ (BOOL)currentDeviceShouldAllowLocalLight;
+ (void)updateComposition:(id)composition fromPortraitMetadata:(id)metadata;
+ (void)updateCompositionController:(id)controller fromPortraitMetadata:(id)metadata;

/* instance methods */
- (id)initWithEditSource:(id)source;
- (id)initWithEditSource:(id)source renderPriority:(long long)priority;
- (id)exportVideoToURL:(id)url preset:(id)preset livePhotoPairingIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode name:(id)name completion:(id /* block */)completion;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode renderMode:(long long)mode name:(id)name completion:(id /* block */)completion;
- (void)renderImageWithTargetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode renderMode:(long long)mode renderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time name:(id)name completion:(id /* block */)completion;
- (void)renderVideoWithTargetSize:(struct CGSize { double x0; double x1; })size name:(id)name completion:(id /* block */)completion;
- (void)renderVideoWithTargetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode name:(id)name completion:(id /* block */)completion;
- (void)generateJPEGImageDataWithCompressionQuality:(double)quality livePhotoPairingIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (double)_smartToneLevelWithAttributeKey:(id)key settingKey:(id)key;
- (double)_smartColorLevelWithAttributeKey:(id)key settingKey:(id)key;
- (double)_smartBWLevelWithAttributeKey:(id)key settingKey:(id)key;
- (id)_smartToneAdjustments;
- (id)_smartColorAdjustments;
- (id)_smartBWAdjustments;
- (void)calculateLongExposureFusionParametersWithCompletionHandler:(id /* block */)handler;
- (id)getGeometryForComposition:(id)composition;
- (id)getGeometryForComposition:(id)composition pipelineFilters:(id)filters;
- (void)applySourceChangesToCompositionSynchronously:(id)synchronously source:(id)source withBlock:(id /* block */)block;
- (void)applySourceChangesToCompositionAsynchronously:(id)asynchronously source:(id)source withBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (void)applySourceChangesToComposition:(id)composition source:(id)source withBlock:(id /* block */)block executeSynchronously:(BOOL)synchronously completionBlock:(id /* block */)block;
- (void)cancelAllRenders;
@end

#endif /* PLPhotoEditRenderer_h */