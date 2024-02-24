//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoCreateWatchFaceActivity_h
#define CKNanoCreateWatchFaceActivity_h
@import Foundation;

#include "NPTOCreateWatchFaceActivity.h"

@protocol NPTOCreateWatchFaceActionProvider;

@interface CKNanoCreateWatchFaceActivity : NPTOCreateWatchFaceActivity

@property (retain, nonatomic) NSObject<NPTOCreateWatchFaceActionProvider> *actionProvider;

/* instance methods */
- (id)initWithActionProvider:(id)provider;
- (id)initWithImage:(id)image;
- (void)activityDidFinish:(BOOL)finish;
@end

#endif /* CKNanoCreateWatchFaceActivity_h */