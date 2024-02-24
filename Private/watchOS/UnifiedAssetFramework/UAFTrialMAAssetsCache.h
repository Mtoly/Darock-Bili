//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.4.1.0.0
//
#ifndef UAFTrialMAAssetsCache_h
#define UAFTrialMAAssetsCache_h
@import Foundation;

@interface UAFTrialMAAssetsCache : NSObject
/* class methods */
+ (void)initCache;
+ (void)invalidateCache;
+ (id)getFactor:(id)factor asRoot:(BOOL)root assetType:(id)type matchingAttribute:(id)attribute attributeValue:(id)value;
+ (BOOL)checkForAssetTypePath:(id)path;
+ (id)lookupStringForFactor:(id)factor asRoot:(BOOL)root matchingAttribute:(id)attribute attributeValue:(id)value;
+ (id)queryFactor:(id)factor asRoot:(BOOL)root assetType:(id)type matchingAttribute:(id)attribute attributeValue:(id)value;
@end

#endif /* UAFTrialMAAssetsCache_h */