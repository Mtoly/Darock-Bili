//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGQuickResponsesRepliesFlattened_h
#define SGQuickResponsesRepliesFlattened_h
@import Foundation;

#include "SGQuickResponsesReplies.h"

@class NSArray, _PASLock;

@interface SGQuickResponsesRepliesFlattened : SGQuickResponsesReplies {
  /* instance variables */
  NSArray *_replyTexts;
  _PASLock *_normalizedReplyTextsSet;
  unsigned long long _replyTextStringsCount;
}

/* class methods */
+ (unsigned long long)countReplyTextsForArray:(id)array;
+ (id)normalizedReplyTextsSetForArray:(id)array;

/* instance methods */
- (id)normalizedReplyTextsSet;
- (id)replyTextForIndex:(unsigned long long)index position:(unsigned long long)position;
- (id)replyTextForIndexAndPosition:(id)position;
- (id)replyTextsForIndex:(unsigned long long)index;
- (unsigned long long)replyCountForIndex:(unsigned long long)index;
- (unsigned long long)replyTextCount;
- (unsigned long long)replyClassCount;
- (unsigned long long)modelCount;
- (unsigned long long)maxDistinctReplies;
- (id)initWithArray:(id)array;
@end

#endif /* SGQuickResponsesRepliesFlattened_h */