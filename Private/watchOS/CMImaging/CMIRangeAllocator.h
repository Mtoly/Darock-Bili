//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef CMIRangeAllocator_h
#define CMIRangeAllocator_h
@import Foundation;

@interface CMIRangeAllocator : NSObject {
  /* instance variables */
  struct CMIRangeAllocatorList { struct CMIRangeAllocatorListElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
  unsigned int _defaultAlignment;
  unsigned long long _memSize;
  int _strategyType;
}

/* instance methods */
- (void)dealloc;
- (id)init;
- (int)setupWithMemSize:(unsigned long long)size alignment:(unsigned int)alignment strategyType:(int)type;
- (int)allocateWithSize:(unsigned long long)size alignment:(unsigned int)alignment outputOffset:(unsigned long long *)offset allocationHint:(int)hint;
- (int)allocateWithSize:(unsigned long long)size alignment:(unsigned int)alignment outputOffset:(unsigned long long *)offset;
- (int)allocateWithSize:(unsigned long long)size outputOffset:(unsigned long long *)offset;
- (void)freeRangeWithOffset:(unsigned long long)offset size:(unsigned long long)size;
- (unsigned int)getFragmentCount;
- (unsigned long long)getMaxFreeSize;
- (unsigned long long)getMaxFreeSizeWithAlignment:(unsigned int)alignment;
- (void)reset;
- (unsigned long long)getTotalFreeMemorySize;
@end

#endif /* CMIRangeAllocator_h */