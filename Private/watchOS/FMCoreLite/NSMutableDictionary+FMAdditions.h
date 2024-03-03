//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef NSMutableDictionary_FMAdditions_h
#define NSMutableDictionary_FMAdditions_h
@import Foundation;

@interface NSMutableDictionary (FMAdditions)
/* instance methods */
- (void)fm_safeSetObject:(id)object forKey:(id)key;
- (id)fm_objectForKey:(id)key withDefaultValue:(id /* block */)value;
- (void)fm_safelySetObject:(id)object forKey:(id)key;
- (void)fm_safelyMapKey:(id)key toObject:(id)object;
- (void)safelySetObject:(id)object forKey:(id)key;
- (void)safelyMapKey:(id)key toObject:(id)object;
@end

#endif /* NSMutableDictionary_FMAdditions_h */