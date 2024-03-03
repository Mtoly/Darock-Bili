//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef IPMutableRepeatedInt32_h
#define IPMutableRepeatedInt32_h
@import Foundation;

#include "IPRepeatedInt32.h"

@interface IPMutableRepeatedInt32 : IPRepeatedInt32
/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (void)appendInt32Value:(int)value;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IPMutableRepeatedInt32_h */