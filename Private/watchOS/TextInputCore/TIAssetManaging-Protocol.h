//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIAssetManaging_Protocol_h
#define TIAssetManaging_Protocol_h
@import Foundation;

@protocol TIAssetManaging <NSObject>

@property (copy, nonatomic) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (copy, nonatomic) id /* block */ preferencesProviderBlock;

/* instance methods */
- (id)ddsAssetContentItemsWithContentType:(id)type inputMode:(id)mode filteredWithRegion:(BOOL)region;
- (void)ddsAssetContentItemsWithContentType:(id)type inputMode:(id)mode filteredWithRegion:(BOOL)region completion:(id /* block */)completion;
- (void)ddsAssetsForInputMode:(id)mode cachedOnly:(BOOL)only completion:(id /* block */)completion;
- (void)requestAssetDownloadForLanguage:(id)language completion:(id /* block */)completion;
- (void)addLinguisticAssetsAssertionForLanguage:(id)language assertionID:(id)id region:(id)region clientID:(id)id withHandler:(id /* block */)handler;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)identifier forClientID:(id)id withHandler:(id /* block */)handler;
- (id)enabledInputModes;
- (id)topActiveRegions;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)identifier callback:(id /* block */)callback;
- (void)updateAssetForInputModeIdentifier:(id)identifier callback:(id /* block */)callback;
@end

#endif /* TIAssetManaging_Protocol_h */