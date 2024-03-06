//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKBrowserViewControllerSendDelegate_Protocol_h
#define CKBrowserViewControllerSendDelegate_Protocol_h
@import Foundation;

@protocol CKBrowserViewControllerSendDelegate <NSObject>
/* instance methods */
- (void)commitPayload:(id)payload;
- (void)startEditingPayload:(id)payload;
- (void)startEditingPayload:(id)payload dismiss:(BOOL)dismiss;
- (void)setLocalUserIsTyping:(BOOL)typing;
- (void)openURL:(id)url pluginID:(id)id completionHandler:(id /* block */)handler;
- (void)openURL:(id)url applicationIdentifier:(id)identifier pluginID:(id)id completionHandler:(id /* block */)handler;
- (void)dismissAndReloadInputViews:(BOOL)views;
- (void)dismiss;
- (void)requestPresentationStyleExpanded:(BOOL)expanded;
- (void)presentAlertWithTitle:(id)title message:(id)message buttonTitle:(id)title completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)commitPayload:(id)payload forPlugin:(id)plugin allowAllCommits:(BOOL)commits completionHandler:(id /* block */)handler;
- (void)commitSticker:(id)sticker atScreenCoordinate:(struct CGPoint { double x0; double x1; })coordinate scale:(double)scale rotation:(double)rotation stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)commitSticker:(id)sticker forPlugin:(id)plugin stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dismissAndReloadInputViews:(BOOL)views forPlugin:(id)plugin;
- (void)dismissAndPresentPhotosApp;
- (void)startEditingPayload:(id)payload dismiss:(BOOL)dismiss forPlugin:(id)plugin;
- (void)startEditingPayload:(id)payload dismiss:(BOOL)dismiss forPlugin:(id)plugin completion:(id /* block */)completion;
- (void)startEditingPayloadBypassingValidation:(id)validation forPlugin:(id)plugin completion:(id /* block */)completion;
- (void)requestPresentationStyleExpanded:(BOOL)expanded forPlugin:(id)plugin;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)plugin preferredContentSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)handwritingIsDisplayed;
- (BOOL)isAppCardUsingSheetPresentation;
- (void)didStageAssetArchive:(id)archive identifier:(id)identifier;
- (void)eagerUploadPayload:(id)payload identifier:(id)identifier replace:(BOOL)replace;
- (void)eagerUploadCancelIdentifier:(id)identifier;
- (void)didBeginDraggingSticker:(id)sticker;
- (void)stickerDruidDragStarted;
- (void)stickerDruidDragEndedWithIMSticker:(id)imsticker;
- (void)canShowBrowserForPluginIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)showBrowserForPluginIdentifier:(id)identifier style:(unsigned long long)style completion:(id /* block */)completion;
@end

#endif /* CKBrowserViewControllerSendDelegate_Protocol_h */