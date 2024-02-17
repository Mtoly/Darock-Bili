//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef NoOpBackupController_h
#define NoOpBackupController_h
@import Foundation;

#include "BackupControllerProviding-Protocol.h"

@interface NoOpBackupController : NSObject<BackupControllerProviding>
/* instance methods */
- (void)setFirstSyncDateToNow;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)needed;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)completion;
@end

#endif /* NoOpBackupController_h */