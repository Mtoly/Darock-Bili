//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPLexiconCursors_h
#define CVNLPLexiconCursors_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {vector<const _LXCursor *, std::allocator<const _LXCursor *>>="__begin_"^^{_LXCursor}"__end_"^^{_LXCursor}"__end_cap_"{__compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>>="__value_"^^{_LXCursor}}};

@interface CVNLPLexiconCursors : NSObject<NSCopying> {
  /* instance variables */
  struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor * *__begin_; struct _LXCursor * *__end_; struct __compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>> { struct _LXCursor * *__value_; } __end_cap_; } _sortedCursors;
}

/* instance methods */
- (id)initWithSortedCursors:(void *)cursors;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)block;
- (long long)count;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
@end

#endif /* CVNLPLexiconCursors_h */