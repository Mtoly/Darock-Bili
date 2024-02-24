//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOrderedDictionary_h
#define WFOrderedDictionary_h
@import Foundation;

#include "NSDictionary.h"

@class NSDictionary, NSOrderedSet;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithQueryItems:(id)items;
- (unsigned long long)count;
- (id)objectForKey:(id)key;
- (id)keyEnumerator;
- (id)init;
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned long long)count;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (Class)classForCoder;
@end

#endif /* WFOrderedDictionary_h */