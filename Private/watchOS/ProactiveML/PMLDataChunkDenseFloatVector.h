//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PMLDataChunkDenseFloatVector_h
#define PMLDataChunkDenseFloatVector_h
@import Foundation;

#include "PMLDataChunk.h"

@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) const float * vector;

/* class methods */
+ (unsigned int)dataChunkType;
+ (id)chunkWithVector:(const float *)vector count:(int)count;

/* instance methods */
- (id)toVec;
@end

#endif /* PMLDataChunkDenseFloatVector_h */