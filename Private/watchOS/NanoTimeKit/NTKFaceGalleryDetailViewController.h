//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceGalleryDetailViewController_h
#define NTKFaceGalleryDetailViewController_h
@import Foundation;

#include "NTKFaceGalleryViewController.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"
#include "NTKFace.h"
#include "NTKFaceGalleryFaceItem.h"
#include "NTKFaceGalleryItemCellContentObserver-Protocol.h"
#include "NTKFaceSnapshotContainerView.h"

@class CLKDevice, NSString, PUICButton, UIImage, UILabel, UIScrollView;

@interface NTKFaceGalleryDetailViewController : NTKFaceGalleryViewController<NTKFaceGalleryItemCellContentObserver, CSLPIButtonHandlerProtocol> {
  /* instance variables */
  CLKDevice *_device;
  UIScrollView *_scrollView;
  NTKFaceSnapshotContainerView *_snapshotContainerView;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  PUICButton *_addButton;
  NTKFace *_selectedFaceForTransition;
}

@property (copy, nonatomic) NTKFace *face;
@property (readonly, nonatomic) NSString *faceDescription;
@property (readonly, nonatomic) NSString *faceName;
@property (readonly, nonatomic) BOOL addable;
@property (copy, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) NTKFaceGalleryFaceItem *faceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)titleFont;
+ (struct CGSize { double x0; double x1; })snapshotImageSizeForDevice:(id)device;

/* instance methods */
- (id)initWithDevice:(id)device;
- (void)loadView;
- (void)_addButtonTapped;
- (void)_dismiss;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (long long)preferredNavigationBarHiddenBehavior;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (id)_selectedFace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedFaceContainerFrame;
- (void)cellContentUpdatedForGalleryItem:(id)item;
- (BOOL)isAddable;
@end

#endif /* NTKFaceGalleryDetailViewController_h */