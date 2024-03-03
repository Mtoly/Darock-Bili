//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextAttributeDictionaryImplM_h
#define _UITextAttributeDictionaryImplM_h
@import Foundation;

#include "_UITextAttributeDictionaryImplI.h"

@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI
/* class methods */
+ (BOOL)_isMutable;
+ (Class)_storageClass;
+ (Class)_ignoringClass;

/* instance methods */
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeAllObjects;
- (void)setFallback:(id)fallback;
- (void)setIgnoresFallback:(BOOL)fallback forKey:(id)key;
- (void)_removeFallbackFromStorage;
@end

#endif /* _UITextAttributeDictionaryImplM_h */