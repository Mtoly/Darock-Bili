//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSImageDescriptionViewController_h
#define AXSSImageDescriptionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AXSSImagePreviewViewController.h"
#include "AXSSImagePreviewViewControllerDelegate-Protocol.h"
#include "AXSSScrollViewEnclosedTextView.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "UINavigationBarDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIColor, UINavigationBar, UIScrollView, UIView;
@protocol AXSSImageDescriptionViewControllerDelegate;

@interface AXSSImageDescriptionViewController : UIViewController<AXSSImagePreviewViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationBarDelegate, UITextViewDelegate>

@property (retain, nonatomic) AXSSScrollViewEnclosedTextView *textView;
@property (retain, nonatomic) AXSSImagePreviewViewController *imagePreviewController;
@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) UIScrollView *textScrollView;
@property (retain, nonatomic) UIView *contentBackgroundView;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textBackgroundViewFixedTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewExpandingHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textScrollViewFixedHeightConstraint;
@property BOOL isSavingOrCancelling;
@property BOOL isUIReady;
@property (copy, nonatomic) NSString *imageDescription;
@property (weak, nonatomic) NSObject<AXSSImageDescriptionViewControllerDelegate> *delegate;
@property (retain, nonatomic) UIView *contentSnapshot;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentSnapshot:(id)snapshot;
- (void)saveChanges:(id)changes;
- (void)cancelChanges:(id)changes;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)traitEnvironment:(id)environment didChangeTraitCollection:(id)collection;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (long long)positionForBar:(id)bar;
- (BOOL)presentationControllerShouldDismiss:(id)dismiss;
- (void)presentationControllerDidAttemptToDismiss:(id)dismiss;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)imagePreviewShouldExpand:(id)expand;
- (void)textViewDidChange:(id)change;
- (void)_adjustViewToKeyboardFrame:(id)frame;
- (void)_contentSizeCategoryDidChange:(id)change;
- (void)_applicationWillResignActive:(id)active;
- (BOOL)_canShowWhileLocked;
- (id)_modifiedImageDescription;
- (BOOL)_hasFormView;
- (BOOL)_hasChanges;
- (void)_hideKeyboard;
- (void)_updateTextScrollViewConstraints;
- (double)_textViewMaxHeight;
- (void)_layoutImagePreview;
- (void)_layoutContentBackground;
- (void)_imageDescriptionViewControllerSetupUI;
- (void)_imageDescriptionViewControllerSetupConstraints;
- (void)_scrollTextViewCaretToVisibleRegion;
@end

#endif /* AXSSImageDescriptionViewController_h */