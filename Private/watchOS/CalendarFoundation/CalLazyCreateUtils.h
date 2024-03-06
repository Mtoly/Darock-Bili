//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalLazyCreateUtils_h
#define CalLazyCreateUtils_h
@import Foundation;

@interface CalLazyCreateUtils : NSObject
/* class methods */
+ (void)addArray:(id)array toArray:(id *)array;
+ (void)addObject:(id)object toArray:(id *)array;
+ (void)setValue:(id)value withKey:(id)key inDictionary:(id *)dictionary;
+ (void)addObject:(id)object toSet:(id *)set;
+ (void)addSet:(id)set toSet:(id *)set;
+ (void)addArray:(id)array withKey:(id)key toDictionaryOfArrays:(id *)arrays;
+ (void)addItem:(id)item withKey:(id)key toDictionaryOfArrays:(id *)arrays;
+ (void)addArray:(id)array withKey:(id)key toDictionaryOfSets:(id *)sets;
+ (void)addItem:(id)item withKey:(id)key toDictionaryOfSets:(id *)sets;
+ (void)addSet:(id)set withKey:(id)key toDictionaryOfSets:(id *)sets;
+ (void)addArray:(id)array withKey:(id)key toStrongTableOfArrays:(id *)arrays;
+ (void)addItem:(id)item withKey:(id)key toStrongTableOfArrays:(id *)arrays;
@end

#endif /* CalLazyCreateUtils_h */