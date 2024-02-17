//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKShareableCredentialMessageExpressSelectionViewController_h
#define NPKShareableCredentialMessageExpressSelectionViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "NPKShareableCredentialMessageExpressSelectionViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary;

@interface NPKShareableCredentialMessageExpressSelectionViewController : PUICListCollectionViewController

@property (retain, nonatomic) NSArray *paymentPasses;
@property (retain, nonatomic) NSDictionary *passThumbnails;
@property (weak, nonatomic) NSObject<NPKShareableCredentialMessageExpressSelectionViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithPaymentPasses:(id)passes;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)_explanationCellForIndexPath:(id)path;
- (id)_passCellForIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
@end

#endif /* NPKShareableCredentialMessageExpressSelectionViewController_h */