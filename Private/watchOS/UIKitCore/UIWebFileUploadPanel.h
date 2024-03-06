//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebFileUploadPanel_h
#define UIWebFileUploadPanel_h
@import Foundation;

#include "UIViewController.h"
#include "UIDocumentMenuDelegate-Protocol.h"
#include "UIDocumentMenuViewController.h"
#include "UIDocumentPickerDelegate-Protocol.h"
#include "UIImagePickerController.h"
#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"
#include "UIPopoverController.h"
#include "UIPopoverControllerDelegate-Protocol.h"
#include "UIViewController.h"
#include "UIWebDocumentView.h"
#include "UIWebFileUploadPanelDelegate-Protocol.h"

@class DOMNode, NSArray, NSString;
@protocol WebOpenPanelResultListener;

@interface UIWebFileUploadPanel : UIViewController<UIDocumentPickerDelegate, UIDocumentMenuDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {
  /* instance variables */
  UIDocumentMenuViewController *_documentMenuController;
  UIImagePickerController *_imagePicker;
  UIViewController *_presentationViewController;
  UIPopoverController *_presentationPopover;
  struct CGPoint { double x; double y; } _interactionPoint;
  DOMNode *_interactionElement;
}

@property (copy, nonatomic) NSArray *mimeTypes;
@property (nonatomic) UIWebDocumentView *documentView;
@property (retain, nonatomic) NSObject<WebOpenPanelResultListener> *resultListener;
@property (nonatomic) BOOL allowMultipleFiles;
@property (nonatomic) BOOL isUsingCamera;
@property (nonatomic) long long mediaCaptureType;
@property (nonatomic) NSObject<UIWebFileUploadPanelDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithResultListener:(id)listener configuration:(id)configuration documentView:(id)view;
- (void)dealloc;
- (void)_dispatchDidDismiss;
- (void)_cancel;
- (void)_chooseFilename:(id)filename displayString:(id)string iconImage:(id)image;
- (void)_chooseFilenames:(id)filenames displayString:(id)string iconImage:(id)image;
- (void)_adjustMediaCaptureType;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (BOOL)_string:(id)_string hasPrefixCaseInsensitive:(id)insensitive;
- (id)_UTIsForMIMETypes;
- (id)_mediaTypesForPickerSourceType:(long long)type;
- (id)_documentPickerMenuMediaTypes;
- (id)_photoPickerWithSourceType:(long long)type;
- (void)_showPhotoPickerWithSourceType:(long long)type;
- (id)_cameraButtonLabel;
- (void)_showDocumentPickerMenu;
- (void)_presentForCurrentInterfaceIdiom:(id)idiom;
- (void)_presentPopoverWithContentViewController:(id)controller animated:(BOOL)animated;
- (void)_presentFullscreenViewController:(id)controller animated:(BOOL)animated;
- (void)present;
- (void)popoverControllerDidDismissPopover:(id)popover;
- (void)dismiss;
- (void)documentMenu:(id)menu didPickDocumentPicker:(id)picker;
- (void)documentMenuWasCancelled:(id)cancelled;
- (void)documentPicker:(id)picker didPickDocumentAtURL:(id)url;
- (void)documentPickerWasCancelled:(id)cancelled;
- (void)_dismissDisplayAnimated:(BOOL)animated;
- (id)_displayStringForPhotos:(unsigned long long)photos videos:(unsigned long long)videos;
- (void)_processMediaInfoDictionaries:(id)dictionaries successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_processMediaInfoDictionaries:(id)dictionaries atIndex:(unsigned long long)index processedResults:(id)results processedImageCount:(unsigned long long)count processedVideoCount:(unsigned long long)count successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_uploadItemForImageData:(id)data imageName:(id)name successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)image successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)_uploadItemFromMediaInfo:(id)info successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerController:(id)controller didFinishPickingMultipleMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
@end

#endif /* UIWebFileUploadPanel_h */