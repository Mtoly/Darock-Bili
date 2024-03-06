//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef NSDictionary_IconFoundationAdditions_h
#define NSDictionary_IconFoundationAdditions_h
@import Foundation;

@interface NSDictionary (IconFoundationAdditions)
/* instance methods */
- (id)_IF_objectOfClass:(Class)class forKey:(id)key;
- (id)_IF_stringForKey:(id)key;
- (id)_IF_numberForKey:(id)key;
- (id)_IF_arrayForKey:(id)key;
- (id)_IF_dictionaryForKey:(id)key;
- (id)_IF_dataForKey:(id)key;
- (BOOL)_IF_boolForKey:(id)key;
- (BOOL)_IF_boolForKey:(id)key defaultValue:(BOOL)value;
- (id)_IF_objectOfClass:(Class)class forKeys:(id)keys;
- (id)_IF_stringForKeys:(id)keys;
- (id)_IF_numberForKeys:(id)keys;
- (id)_IF_arrayForKeys:(id)keys;
- (id)_IF_dictionaryForKeys:(id)keys;
- (BOOL)_IF_boolForKeys:(id)keys;
- (BOOL)_IF_boolForKeys:(id)keys defaultValue:(BOOL)value;
- (id)_IF_dictionaryAddingEntriesFromDictionary:(id)dictionary;
@end

#endif /* NSDictionary_IconFoundationAdditions_h */