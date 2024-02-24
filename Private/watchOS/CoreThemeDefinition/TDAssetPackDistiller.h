//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDAssetPackDistiller_h
#define TDAssetPackDistiller_h
@import Foundation;

#include "TDDistiller.h"

@class NSSet;

@interface TDAssetPackDistiller : TDDistiller

@property (retain, nonatomic) NSSet *assetPackMap;

/* instance methods */
- (id)initWithDocument:(id)document outputPath:(id)path versionString:(id)string usingAssetPackMapping:(id)mapping attemptIncremental:(BOOL)incremental;
- (void)dealloc;
- (id)assetPackForTags:(id)tags;
- (BOOL)setAsset:(id)asset withKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key fromRenditionSpec:(id)spec;
- (void)removeRenditionsFromAssetStoreWithKey:(id)key;
- (void)setAssetStoreRenditionCount:(unsigned int)count;
- (void)setAssetStoreUuid:(id)uuid;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)checksum;
- (void)setAssetStoreKeyFormatData:(id)data;
- (void)setAssetStoreKeySemantics:(int)semantics;
- (void)setAssetStorageVersion:(unsigned int)version;
- (void)setAssetStorageVersionString:(const char *)string;
- (void)setAssetSchemaVersion:(unsigned int)version;
- (void)setAssetColorSpaceID:(unsigned int)id;
- (BOOL)assetStoreWriteToDisk;
@end

#endif /* TDAssetPackDistiller_h */