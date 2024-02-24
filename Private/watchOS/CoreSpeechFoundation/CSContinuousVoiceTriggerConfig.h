//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSContinuousVoiceTriggerConfig_h
#define CSContinuousVoiceTriggerConfig_h
@import Foundation;

@class NSArray, NSString;

@interface CSContinuousVoiceTriggerConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float twoShotThreshold;
@property (readonly, nonatomic) float twoShotDecisionWaitTime;
@property (readonly, nonatomic) NSArray *voiceTriggerPhIds;
@property (readonly, nonatomic) NSArray *silencePhIds;

/* instance methods */
- (id)initWithConfigPathNDAPI:(id)ndapi threshold:(float)threshold twoShotThreshold:(float)threshold twoShotDecisionWaitTime:(float)time voiceTriggerPhIds:(id)ids silencePhIds:(id)ids;
@end

#endif /* CSContinuousVoiceTriggerConfig_h */