//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDFBKFeedbackUpload_h
#define DEDFBKFeedbackUpload_h
@import Foundation;

@interface DEDFBKFeedbackUpload : NSObject
/* class methods */
+ (void)cleanUpIfNeeded;
+ (void)cleanUpIfNeededWithDefaults:(id)defaults;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)identifier;
+ (void)didFinishUploadOnBugSessionIdentifier:(id)identifier withDefaults:(id)defaults;
+ (void)compactMapOnFeedbackUploadsWithUserDefaults:(id)defaults block:(id /* block */)block;
@end

#endif /* DEDFBKFeedbackUpload_h */