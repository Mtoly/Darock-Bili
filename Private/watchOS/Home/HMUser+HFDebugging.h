//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMUser_HFDebugging_h
#define HMUser_HFDebugging_h
@import Foundation;

@interface HMUser (HFDebugging) <HFStateDumpBuildable, HFHomeKitObject>
/* instance methods */
- (BOOL)hf_isImportingPhotosLibraryEnabledForFaceRecognition;
- (BOOL)hf_isSharingPhotosLibraryEnabledForFaceRecognition;
- (unsigned long long)hf_getPhotosLibrarySettingsStatus;
- (id)hf_stateDumpBuilderWithContext:(id)context;
@end

#endif /* HMUser_HFDebugging_h */