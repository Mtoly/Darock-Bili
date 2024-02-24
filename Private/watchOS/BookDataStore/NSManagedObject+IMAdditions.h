//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef NSManagedObject_IMAdditions_h
#define NSManagedObject_IMAdditions_h
@import Foundation;

@interface NSManagedObject (IMAdditions)
/* instance methods */
- (BOOL)setDifferentValue:(id)value forKey:(id)key klass:(Class)klass;
- (BOOL)setDifferentObject:(id)object forKey:(id)key;
- (BOOL)setDifferentString:(id)string forKey:(id)key;
- (BOOL)setDifferentNumber:(id)number forKey:(id)key;
- (BOOL)setDifferentDate:(id)date forKey:(id)key;
- (id)propertiesForKeys:(id)keys;
@end

#endif /* NSManagedObject_IMAdditions_h */