//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalMockPreferenceStore_h
#define CalMockPreferenceStore_h
@import Foundation;

#include "CalPreferencesStore-Protocol.h"

@class BOOL *, NSMutableDictionary, NSString;

@interface CalMockPreferenceStore : NSObject<CalPreferencesStore> {
  /* instance variables */
  NSMutableDictionary *_keys;
  NSMutableDictionary *_values;
  NSString *_path;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* class methods */
+ (id)preferencesStoreForPath:(id)path;
+ (id)inMemoryStore;
+ (id)storagePathForDirectory:(id)directory;
+ (id)encodeKeysDictionary:(id)dictionary;
+ (id)decodeKeysDictionary:(id)dictionary;

/* instance methods */
- (id)init;
- (id)initWithPath:(id)path;
- (BOOL)getBoolean:(BOOL *)boolean forDomain:(id)domain key:(id)key;
- (BOOL)getInteger:(long long *)integer forDomain:(id)domain key:(id)key;
- (BOOL)getValue:(id *)value forDomain:(id)domain key:(id)key;
- (BOOL)_getValue:(id *)value forDomain:(id)domain key:(id)key;
- (void)setValue:(id)value forDomain:(id)domain key:(id)key;
- (void)_setValue:(id)value forDomain:(id)domain key:(id)key;
- (void)synchronizeDomain:(id)domain;
@end

#endif /* CalMockPreferenceStore_h */