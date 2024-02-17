//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureFlatPlist_h
#define FigCaptureFlatPlist_h
@import Foundation;

@class NSMutableData;

@interface FigCaptureFlatPlist : NSObject {
  /* instance variables */
  NSMutableData *_data;
  struct { void *base; void *offsetTable; unsigned long long nObjects; unsigned long long topObjectOffset; unsigned long long offsetTableStart; unsigned char sortVersion; unsigned char offsetSize; unsigned char referenceSize; } _bplist;
}

/* class methods */
+ (id)flatPlistWithContentsOfFile:(id)file;
+ (id)flatPlistWithContentsOfURL:(id)url;

/* instance methods */
- (void)dealloc;
- (const struct { void * x0; void * x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)bplist;
@end

#endif /* FigCaptureFlatPlist_h */