//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 35.2.1.0.0
//
#ifndef SCMLVideoFrameProcessor_h
#define SCMLVideoFrameProcessor_h
@import Foundation;

#include "SCMLImageAnalyzer.h"
#include "SCMLVideoAnalysisConfiguration.h"
#include "SCMLVideoAnalysisResult.h"

@class NSMutableArray;

@interface SCMLVideoFrameProcessor : NSObject

@property (retain, nonatomic) SCMLImageAnalyzer *imageAnalyzer;
@property (retain, nonatomic) NSMutableArray *frameQueue;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long sensitiveFrameCount;
@property (retain, nonatomic) SCMLVideoAnalysisResult *result;
@property (retain, nonatomic) SCMLVideoAnalysisConfiguration *config;

/* instance methods */
- (id)initWithImageAnalyzer:(id)analyzer;
- (void)dealloc;
- (void)reset;
- (id)popFrame;
- (void)pushFrame:(id)frame;
- (void)startAnalysisWithConfig:(id)config;
- (BOOL)addFrameBuffer:(struct opaqueCMSampleBuffer *)buffer;
- (void)outputDebugInfoForFrame:(id)frame isSensitive:(BOOL)sensitive sensitivityScore:(id)score;
- (id)analyze:(id *)analyze;
- (id)finalizeAnalysis:(id *)analysis;
@end

#endif /* SCMLVideoFrameProcessor_h */