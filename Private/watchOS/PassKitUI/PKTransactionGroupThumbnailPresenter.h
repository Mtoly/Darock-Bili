//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransactionGroupThumbnailPresenter_h
#define PKTransactionGroupThumbnailPresenter_h
@import Foundation;

#include "PKContactAvatarManager.h"
#include "PKDashboardItemPresenter-Protocol.h"
#include "PKMapsSnapshotManager.h"
#include "PKPaymentTransactionIconGenerator.h"
#include "PKThumbnailCollectionViewCell.h"

@class NSCache, NSString, PKContactResolver, UIImage;
@protocol PKPaymentDataProvider;

@interface PKTransactionGroupThumbnailPresenter : NSObject<PKDashboardItemPresenter> {
  /* instance variables */
  PKPaymentTransactionIconGenerator *_iconGenerator;
  PKContactResolver *_contactResolver;
  NSCache *_iconsPerMerchantCategory;
  UIImage *_mapsPlaceholderImage;
  PKThumbnailCollectionViewCell *_sampleCell;
}

@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager;
@property (retain, nonatomic) NSObject<PKPaymentDataProvider> *paymentDataProvider;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (double)thumbnailWidth;
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)updateCell:(id)cell forItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)didSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path navigationController:(id)controller canPresent:(id /* block */)present;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)traitCollectionDidChangeFromTrait:(id)trait toTrait:(id)trait inCollectionView:(id)view;
@end

#endif /* PKTransactionGroupThumbnailPresenter_h */