//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoAlertSheetController_h
#define CKNanoAlertSheetController_h
@import Foundation;

#include "PUICAlertSheetController.h"
#include "CKAlertAction.h"
#include "PUICActionSheetControllerDelegate-Protocol.h"

@class NSString;

@interface CKNanoAlertSheetController : PUICAlertSheetController<PUICActionSheetControllerDelegate>

@property (retain, nonatomic) CKAlertAction *cancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)actionContentControllerCancel:(id)cancel;
@end

#endif /* CKNanoAlertSheetController_h */