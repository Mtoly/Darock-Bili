//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55282.0.0.0.0
//
#ifndef _SFTripleDESKeySpecifier_h
#define _SFTripleDESKeySpecifier_h
@import Foundation;

#include "_SFSymmetricKeySpecifier.h"

@interface _SFTripleDESKeySpecifier : _SFSymmetricKeySpecifier {
  /* instance variables */
  id _tripleDESKeySpecifierInternal;
}

/* class methods */
+ (Class)keyClass;

/* instance methods */
- (long long)keyLengthInBytes;
@end

#endif /* _SFTripleDESKeySpecifier_h */