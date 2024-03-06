//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSafeMutableDictionary_h
#define CSLSafeMutableDictionary_h
@import Foundation;

@class NSMutableDictionary;

@interface CSLSafeMutableDictionary : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long x0; char x1[56] } lock;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)setObject:(id)object forKey:(id)key;
- (id)objectForKey:(id)key;
- (void)removeAllObjects;
- (id)removeObjectForKey:(id)key;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
@end

#endif /* CSLSafeMutableDictionary_h */