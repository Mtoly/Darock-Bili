//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardPassTilesItemPresenter_h
#define PKDashboardPassTilesItemPresenter_h
@import Foundation;

#include "PKDashboardContentHostCollectionViewCell.h"
#include "PKDashboardItemPresenter-Protocol.h"
#include "PKDashboardPassTilesItemPresenterDelegate-Protocol.h"
#include "PKPassTileGroupViewDelegate-Protocol.h"

@class NSString;

@interface PKDashboardPassTilesItemPresenter : NSObject<PKPassTileGroupViewDelegate, PKDashboardItemPresenter> {
  /* instance variables */
  PKDashboardContentHostCollectionViewCell *_sampleCell;
}

@property (weak, nonatomic) NSObject<PKDashboardPassTilesItemPresenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)itemClass;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)updateCell:(id)cell forItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)_configureCell:(id)cell forItem:(id)item inCollectionView:(id)view forIndexPath:(id)path animated:(BOOL)animated;
- (BOOL)canSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path;
- (void)didSelectItem:(id)item inCollectionView:(id)view atIndexPath:(id)path navigationController:(id)controller canPresent:(id /* block */)present;
- (void)passTileGroupView:(id)view executeSEActionForPass:(id)pass tile:(id)tile withCompletion:(id /* block */)completion;
@end

#endif /* PKDashboardPassTilesItemPresenter_h */