//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigMetalAllocatorBackend_h
#define FigMetalAllocatorBackend_h
@import Foundation;

#include "CMIRangeAllocator.h"
#include "FigMetalAllocatorImpl-Protocol.h"
#include "FigMetalUtils.h"

@class NSString;

@interface FigMetalAllocatorBackend : NSObject {
  /* instance variables */
  NSObject<FigMetalAllocatorImpl> *_storage;
  CMIRangeAllocator *_rangeAllocator;
  FigMetalUtils *_utils;
  BOOL _isExternalMemory;
  NSString *_label;
}

@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) unsigned long long usedSize;
@property (readonly, nonatomic) unsigned long long largestOccupiedOffset;
@property (readonly, nonatomic) int allocatorType;
@property (readonly, nonatomic) unsigned long long resourceOptions;
@property (readonly, nonatomic) unsigned long long maxContiguousFreeSize;

/* instance methods */
- (id)description;
- (BOOL)hasCreatedResource:(id)resource;
- (id)initWithDevice:(id)device allocatorType:(int)type;
- (void)purgeResources;
- (void)reset;
- (int)setupWithDescriptor:(id)descriptor allocatorBackend:(id)backend;
- (int)setupWithDescriptor:(id)descriptor;
- (void)makeBufferAliasable:(id *)aliasable;
- (void)makeTextureAliasable:(id *)aliasable;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)descriptor;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)descriptor;
- (id)newBufferWithDescriptor:(id)descriptor sizeAlign:(struct { unsigned long long x0; unsigned long long x1; } *)align;
- (id)newTextureWithDescriptor:(id)descriptor sizeAlign:(struct { unsigned long long x0; unsigned long long x1; } *)align;
- (unsigned long long)usedSizeAll;
@end

#endif /* FigMetalAllocatorBackend_h */