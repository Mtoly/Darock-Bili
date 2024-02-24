//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPImageFaceExpressionAnalyzer_h
#define VCPImageFaceExpressionAnalyzer_h
@import Foundation;

#include "VCPImageAnalyzer.h"

@class NSArray;

@interface VCPImageFaceExpressionAnalyzer : VCPImageAnalyzer {
  /* instance variables */
  NSArray *_faces;
}

/* instance methods */
- (id)initWithFaceResults:(id)results;
- (int)analyzePixelBuffer:(struct __CVBuffer *)buffer flags:(unsigned long long *)flags results:(id *)results cancel:(id /* block */)cancel;
@end

#endif /* VCPImageFaceExpressionAnalyzer_h */