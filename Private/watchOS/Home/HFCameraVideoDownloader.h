//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraVideoDownloader_h
#define HFCameraVideoDownloader_h
@import Foundation;

#include "HFCameraVideoDownloader-Protocol.h"

@class HMCameraProfile, NSString;

@interface HFCameraVideoDownloader : NSObject<HFCameraVideoDownloader>

@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCameraProfile:(id)profile;
- (id)priorityDownloadOperationForClip:(id)clip;
- (id)downloadOperationForClip:(id)clip;
- (id)_downloadOperationForClip:(id)clip;
- (id)_fetchOperationForClip:(id)clip withClipManager:(id)manager;
@end

#endif /* HFCameraVideoDownloader_h */