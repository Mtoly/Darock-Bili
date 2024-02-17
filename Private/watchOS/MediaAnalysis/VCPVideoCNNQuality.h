//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPVideoCNNQuality_h
#define VCPVideoCNNQuality_h
@import Foundation;

#include "VCPVideoCNNTask.h"
#include "VCPCNNModelEspresso.h"

@class NSMutableArray;

@interface VCPVideoCNNQuality : VCPVideoCNNTask {
  /* instance variables */
  NSMutableArray *_results;
  VCPCNNModelEspresso *_modelEspresso;
}

/* instance methods */
- (id)init;
- (int)run:(id)run withPersons:(id)persons andRegionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pass;
- (id)results;
@end

#endif /* VCPVideoCNNQuality_h */