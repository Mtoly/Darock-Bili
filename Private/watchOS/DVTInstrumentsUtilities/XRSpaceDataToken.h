//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRSpaceDataToken_h
#define XRSpaceDataToken_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface XRSpaceDataToken : NSObject<NSCopying> {
  /* instance variables */
  id _tag;
  unsigned long long _seq;
}

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithSpaceTag:(id)tag sequenceID:(unsigned long long)id;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* XRSpaceDataToken_h */