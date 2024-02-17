//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef NSDictionary_ICAdditions_h
#define NSDictionary_ICAdditions_h
@import Foundation;

@interface NSDictionary (ICAdditions)
/* instance methods */
- (id)ic_numberValueForKey:(id)key;
- (long long)ic_integerValueForKey:(id)key;
- (int)ic_intValueForKey:(id)key;
- (unsigned int)ic_uintValueForKey:(id)key;
- (long long)ic_int64ValueForKey:(id)key;
- (BOOL)ic_boolValueForKey:(id)key;
- (double)ic_doubleValueForKey:(id)key;
- (id)ic_arrayValueForKey:(id)key;
- (id)ic_dictionaryValueForKey:(id)key;
- (id)ic_stringValueForKey:(id)key;
- (id)ic_dataValueForKey:(id)key;
@end

#endif /* NSDictionary_ICAdditions_h */