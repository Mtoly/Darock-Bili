//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECCramMD5AuthScheme_h
#define ECCramMD5AuthScheme_h
@import Foundation;

#include "ECAuthScheme.h"

@interface ECCramMD5AuthScheme : ECAuthScheme
/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)cramMD5AuthScheme;

/* instance methods */
- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;
@end

#endif /* ECCramMD5AuthScheme_h */