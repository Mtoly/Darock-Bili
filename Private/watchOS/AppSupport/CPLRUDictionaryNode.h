//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef CPLRUDictionaryNode_h
#define CPLRUDictionaryNode_h
@import Foundation;

#include "CPLRUDictionaryNode.h"

@interface CPLRUDictionaryNode : NSObject {
  /* instance variables */
  CPLRUDictionaryNode *next;
  CPLRUDictionaryNode *prev;
}

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;

/* instance methods */
- (id)initWithKey:(id)key object:(id)object;
- (void)dealloc;
@end

#endif /* CPLRUDictionaryNode_h */