//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLURL_h
#define PLURL_h
@import Foundation;

#include "NSURL.h"

@interface PLURL : NSURL {
  /* instance variables */
  atomic unsigned short _ssbCounter;
}

/* instance methods */
- (void)dealloc;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)coder;
@end

#endif /* PLURL_h */