//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbiterDebugEntry_h
#define _UIKeyboardArbiterDebugEntry_h
@import Foundation;

@class NSDate;

@interface _UIKeyboardArbiterDebugEntry : NSObject {
  /* instance variables */
  NSDate *_timestamp;
}

@property (readonly) int importance;

/* instance methods */
- (id)init;
- (void)enumerateContents:(id /* block */)contents;
@end

#endif /* _UIKeyboardArbiterDebugEntry_h */