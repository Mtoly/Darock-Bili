//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSpeechEndHostTimeEstimator_h
#define CSSpeechEndHostTimeEstimator_h
@import Foundation;

@interface CSSpeechEndHostTimeEstimator : NSObject

@property (nonatomic) unsigned long long numAudioSampleForwarded;
@property (nonatomic) unsigned long long lastAudioChunkHostTime;
@property (nonatomic) BOOL endPointNotified;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;

/* instance methods */
- (id)init;
- (void)reset;
- (void)addNumSamples:(unsigned long long)samples hostTime:(unsigned long long)time;
- (void)notifyTrailingSilenceDurationAtEndpoint:(double)endpoint;
- (unsigned long long)estimatedSpeechEndHostTime;
- (unsigned long long)estimatedSpeechEndHostTimeWithLastAudioChunkHostTime:(unsigned long long)time;
@end

#endif /* CSSpeechEndHostTimeEstimator_h */