//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLInternalTapToRadarDialog_h
#define CSLInternalTapToRadarDialog_h
@import Foundation;

#include "CSLAlertSheetViewController.h"
#include "CSLInternalTapToRadarDelegate-Protocol.h"
#include "CSLSecureWindow.h"
#include "CSLTapToRadarDescriptor.h"

@protocol OS_os_log;

@interface CSLInternalTapToRadarDialog : NSObject {
  /* instance variables */
  NSObject<OS_os_log> *_log;
  CSLAlertSheetViewController *_alertViewController;
  CSLSecureWindow *_window;
}

@property (readonly, nonatomic) CSLTapToRadarDescriptor *descriptor;
@property (weak, nonatomic) NSObject<CSLInternalTapToRadarDelegate> *delegate;

/* instance methods */
- (id)initWithDescriptor:(id)descriptor log:(id)log;
- (BOOL)presentWithDelegate:(id)delegate;
- (void)_file;
- (BOOL)_shouldIgnore;
- (void)_ignore;
- (void)_cancel;
@end

#endif /* CSLInternalTapToRadarDialog_h */