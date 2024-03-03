//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTStickerPoseAdjustment_h
#define AVTStickerPoseAdjustment_h
@import Foundation;

#include "AVTAvatarPose.h"

@class NSString;

@interface AVTStickerPoseAdjustment : NSObject

@property (nonatomic) long long presetCategory;
@property (retain, nonatomic) NSString *presetIdentifier;
@property (retain, nonatomic) AVTAvatarPose *pose;

/* instance methods */
- (id)description;
- (id)poseByApplyingToPose:(id)pose forAvatar:(id)avatar;
@end

#endif /* AVTStickerPoseAdjustment_h */