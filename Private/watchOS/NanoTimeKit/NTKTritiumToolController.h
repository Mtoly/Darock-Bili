//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTritiumToolController_h
#define NTKTritiumToolController_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "NTKClockStatusBarViewControllerStatusObserver-Protocol.h"
#include "NTKFace.h"
#include "NTKFaceSnapshottingWindow.h"
#include "NTKTritiumToolControllerDelegate-Protocol.h"
#include "NTKTritiumToolFaceViewController.h"
#include "NTKTritiumToolServerInterface-Protocol.h"

@class NSDateFormatter, NSMutableSet, NSString, NSXPCListener;
@protocol MTLComputePipelineState, OS_dispatch_queue, OS_dispatch_semaphore;

@interface NTKTritiumToolController : NSObject<NTKTritiumToolServerInterface, NSXPCListenerDelegate, NTKClockStatusBarViewControllerStatusObserver> {
  /* instance variables */
  NSDateFormatter *_filenameFormatter;
  NTKFaceSnapshottingWindow *_snapshotWindow;
  NTKTritiumToolFaceViewController *_viewController;
  NSXPCListener *_listener;
  NSMutableSet *_connections;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_imageWriteQueue;
  NSObject<OS_dispatch_semaphore> *_imageWriteSemaphore;
  NSObject<MTLComputePipelineState> *_aplPipelineState;
}

@property BOOL isRunningCommand;
@property (retain, nonatomic) NTKFace *face;
@property (weak, nonatomic) NSObject<NTKTritiumToolControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatusBarClass:(Class)class;
- (void)dealloc;
- (BOOL)_canHandleAnyCommand;
- (void)newFaceViewControllerForFace:(id)face;
- (void)_handleTestDigitalTimeLabelCommand:(id)command;
- (void)_handleBurnInStudyAutoCommand:(id)command;
- (void)_handleBurnInStudyListFacesCommand:(id)command;
- (void)_handleBurnInStudyListFaceModeOptionsCommand:(id)command;
- (void)_printRawMessage:(id)message;
- (void)_printJson:(id)json;
- (void)_setDisplayOutputType:(unsigned long long)type;
- (unsigned long long)_stateFromOptionString:(id)string;
- (id)_generateDefaultFaceFromFaceName:(id)name;
- (id)_sanitizedString:(id)string;
- (id)_allEditOptionPermutationsForFace:(id)face withFaceName:(id)name andSelectedChoices:(id)choices;
- (id)_generateAvailableFacesFromPermutaion:(id)permutaion forFace:(id)face withFaceName:(id)name;
- (id)_specialEditForMargarita:(id)margarita withCurrentAvailabelFaces:(id)faces andDefaultFace:(id)face;
- (id)_editFace:(id)face withOptions:(id)options forMode:(long long)mode;
- (id)_frameSpecifierFromRenderDate:(id)date state:(unsigned long long)state;
- (id)_generateSnapshotWithRequest:(id)request;
- (id)_generateSnapshotWithRequest:(id)request face:(id)face faceSelected:(id)selected printBlock:(id /* block */)block folderName:(id)name;
- (id)_requestFromState:(id)state outputOption:(id)option includeStatusBarOption:(id)option generateMicaFileOption:(id)option randomizedComplicationDataOption:(id)option randomizedDigitalTimeLabelScaleOption:(id)option requestDate:(id)date renderFrameSpecifier:(id)specifier randomizedComplicationStartDate:(id)date;
- (id)_generateImageFromWindow:(id *)window;
- (id)_writeAOTResultToDisk:(id)disk texture:(id)texture withRequest:(id)request face:(id)face faceSelected:(id)selected prefix:(id)prefix suffix:(id)suffix printBlock:(id /* block */)block folderName:(id)name;
- (double)_freeStorageInGB;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)handleTritiumToolCommand:(id)command completion:(id /* block */)completion;
- (void)statusBarDidChange;
@end

#endif /* NTKTritiumToolController_h */