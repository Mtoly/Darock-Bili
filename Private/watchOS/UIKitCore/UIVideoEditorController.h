//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIVideoEditorController_h
#define UIVideoEditorController_h
@import Foundation;

#include "UINavigationController.h"

@class NSMutableDictionary, NSString;
@protocol UINavigationControllerDelegate><UIVideoEditorControllerDelegate;

@interface UIVideoEditorController : UINavigationController {
  /* instance variables */
  int _previousStatusBarStyle;
  NSMutableDictionary *_properties;
  struct { unsigned int x :1 visible; unsigned int x :1 isCleaningUp; unsigned int x :1 didRevertStatusBar; } _flags;
}

@property (@dynamic, nonatomic) NSObject<UINavigationControllerDelegate><UIVideoEditorControllerDelegate> *delegate;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

/* class methods */
+ (BOOL)canEditVideoAtPath:(id)path;

/* instance methods */
- (id)init;
- (void)viewWillUnload;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)_didRevertStatusBar;
- (BOOL)_isSupportedInterfaceOrientation:(long long)orientation;
- (void)_removeAllChildren;
- (id)_createInitialController;
- (void)_setupControllers;
- (void)_autoDismiss;
- (void)editVideoViewControllerDidCancel:(id)cancel;
- (void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;
- (void)editVideoViewController:(id)controller didFailWithError:(id)error;
- (id)_videoURL;
- (void)_setVideoURL:(id)url;
- (void)_setProperties:(id)properties;
- (void)_initializeProperties;
- (id)_properties;
- (void)_setValue:(id)value forProperty:(id)property;
- (id)_valueForProperty:(id)property;
@end

#endif /* UIVideoEditorController_h */