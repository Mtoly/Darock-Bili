//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef MurmurHash3_h
#define MurmurHash3_h
@import Foundation;

@interface MurmurHash3 : NSObject
/* class methods */
+ (struct { unsigned long long x0; unsigned long long x1; })hash128WithKey:(const void *)key length:(unsigned long long)length seed:(unsigned int)seed;
@end

#endif /* MurmurHash3_h */