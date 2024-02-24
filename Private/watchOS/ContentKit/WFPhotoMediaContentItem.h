//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPhotoMediaContentItem_h
#define WFPhotoMediaContentItem_h
@import Foundation;

#include "WFGenericFileContentItem.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"

@class NSDictionary, NSString, PHAsset, WFFileType;

@interface WFPhotoMediaContentItem : WFGenericFileContentItem<WFContentItemClass>

@property (nonatomic) long long library;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)itemWithAssetIdentifier:(id)identifier;
+ (id)itemWithAssetIdentifier:(id)identifier assetFile:(id)file;
+ (id)itemWithAssetIdentifier:(id)identifier library:(long long)library;
+ (id)itemWithAssetIdentifier:(id)identifier library:(long long)library assetFile:(id)file;
+ (id)itemWithAssetIdentifier:(id)identifier library:(long long)library assetFile:(id)file nameIfKnown:(id)known;
+ (id)itemWithAssetIdentifier:(id)identifier library:(long long)library assetFile:(id)file nameIfKnown:(id)known attributionSet:(id)set cachingIdentifier:(id)identifier;
+ (id)itemsWithBurstIdentifier:(id)identifier;
+ (id)fetchOptionsForLibrary:(long long)library;
+ (id)itemWithSerializedItem:(id)item forType:(id)type named:(id)named attributionSet:(id)set cachingIdentifier:(id)identifier;
+ (void)runQuery:(id)query withItems:(id)items permissionRequestor:(id)requestor completionHandler:(id /* block */)handler;
+ (id)photoAlbums;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)remoteItemWithAssetIdentifier:(id)identifier named:(id)named;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)instance;
+ (id)ownedTypes;
+ (id)ownedPasteboardTypes;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)countDescription;
+ (BOOL)hasLibrary;
+ (BOOL)isAvailableOnPlatform:(long long)platform;

/* instance methods */
- (BOOL)getListSubtitle:(id /* block */)subtitle;
- (BOOL)getListThumbnail:(id /* block */)thumbnail forSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)getListAltText:(id /* block */)text;
- (void)getPreferredFileSize:(id /* block */)size;
- (void)getPreferredFileExtension:(id /* block */)extension;
- (id)duration;
- (id)imageManager;
- (id)assetResourceManager;
- (void)getMetadata:(id /* block */)metadata;
- (void)getFrameRate:(id /* block */)rate;
- (id)metadataIfLocallyAvailable;
- (struct CGSize { double x0; double x1; })size;
- (id)make;
- (id)model;
- (id)width;
- (id)height;
- (BOOL)isPhotoType:(id)type;
- (id)photoTypes;
- (id)isBurst;
- (id)isLivePhoto;
- (id)isHidden;
- (id)isFavorite;
- (id)mediaType;
- (BOOL)isScreenshot;
- (BOOL)isScreenRecording;
- (id)orientation;
- (void)getThumbnail:(id /* block */)thumbnail ofSize:(struct CGSize { double x0; double x1; })size;
- (void)retrieveAssetResource:(id)resource withNetworkAccess:(BOOL)access completionHandler:(id /* block */)handler;
- (void)retrieveFileWithImageManager:(id /* block */)manager forType:(id)type;
- (id)preferredAssetResourceForType:(id)type;
- (void)generateFileRepresentation:(id /* block */)representation options:(id)options forType:(id)type;
- (void)generateAVAsset:(id /* block */)avasset networkAccessAllowed:(BOOL)allowed;
- (void)generateObjectRepresentation:(id /* block */)representation options:(id)options forClass:(Class)class;
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
- (void)copyStateToItem:(id)item;
- (BOOL)isEqual:(id)equal;
- (BOOL)canGenerateRepresentationForType:(id)type;
- (id)fullSizeAssetResourcesInResources:(id)resources;
- (id)assetRepresentationTypes;
- (id)intermediaryTypesForCoercionToItemClass:(Class)class;
- (id)outputTypes;
- (id)defaultSourceForRepresentation:(id)representation;
@end

#endif /* WFPhotoMediaContentItem_h */