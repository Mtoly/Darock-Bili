//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICommandIdentifierDictionary_h
#define _UICommandIdentifierDictionary_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_UISelectorDictionary.h"

@class NSMutableDictionary;

@interface _UICommandIdentifierDictionary : NSObject<NSCopying> {
  /* instance variables */
  _UISelectorDictionary *_actionDictionary;
  NSMutableDictionary *_actionPropertyListDictionary;
}

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)objectForAction:(SEL)action propertyList:(id)list;
- (void)setObject:(id)object forAction:(SEL)action propertyList:(id)list;
- (void)removeObjectForAction:(SEL)action propertyList:(id)list;
- (BOOL)intersectsEntriesFromDictionary:(id)dictionary;
- (id)intersectingIdentifiersFromDictionary:(id)dictionary;
- (void)removeEntriesFromDictionary:(id)dictionary;
- (void)addEntriesFromDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _UICommandIdentifierDictionary_h */