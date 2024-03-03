//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAnimatedEmojiBundle_h
#define PUICAnimatedEmojiBundle_h
@import Foundation;

#include "NSBundle.h"

@class NSString;

@interface PUICAnimatedEmojiBundle : NSBundle {
  /* instance variables */
  NSString *_path;
}

/* class methods */
+ (id)bundleWithPath:(id)path;

/* instance methods */
- (id)bundlePath;
- (id)resourcePath;
- (id)bundleURL;
- (id)resourceURL;
@end

#endif /* PUICAnimatedEmojiBundle_h */