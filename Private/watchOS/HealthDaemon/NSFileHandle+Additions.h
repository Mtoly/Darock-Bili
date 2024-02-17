//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSFileHandle_Additions_h
#define NSFileHandle_Additions_h
@import Foundation;

@interface NSFileHandle (Additions)
/* instance methods */
- (BOOL)hk_writeValue:(const void *)value size:(unsigned long long)size error:(id *)error;
- (BOOL)hk_readValue:(void *)value ofSize:(unsigned long long)size error:(id *)error;
@end

#endif /* NSFileHandle_Additions_h */