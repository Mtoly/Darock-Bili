//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WBSFieldLabelPatternMatcherFactory_h
#define _WBSFieldLabelPatternMatcherFactory_h
@import Foundation;

@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {
  /* instance variables */
  NSMutableDictionary *_trie;
}

/* class methods */
+ (struct __WBSFieldLabelPatternMatcherArray *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arrays allowingEndOfWordMatches:(BOOL)matches;

/* instance methods */
- (id)init;
- (void)_addWord:(id)word allowingEndOfWordMatch:(BOOL)match;
@end

#endif /* _WBSFieldLabelPatternMatcherFactory_h */