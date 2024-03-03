//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPVideoFacePoseAnalyzer_h
#define VCPVideoFacePoseAnalyzer_h
@import Foundation;

@interface VCPVideoFacePoseAnalyzer : NSObject

@property struct { x0[4] } pose;

/* instance methods */
- (id)initWithFocalLengthInPixels:(float)pixels;
- (BOOL)updateFocalLengthInPixels:(float)pixels;
- (int)analyzeFrameForPose:(struct __CVBuffer *)pose withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
@end

#endif /* VCPVideoFacePoseAnalyzer_h */