//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef StocksPreferences_h
#define StocksPreferences_h
@import Foundation;

@class NSUserDefaults;

@interface StocksPreferences : NSObject {
  /* instance variables */
  NSUserDefaults *_sharedDefaults;
}

@property (readonly, nonatomic) BOOL changeColorSwapped;
@property (readonly, nonatomic) unsigned long long textDirection;
@property (readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft;

/* class methods */
+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

/* instance methods */
- (id)init;
- (void)resetLocale;
- (BOOL)boolForKey:(id)key;
- (long long)integerForKey:(id)key;
- (id)stringForKey:(id)key;
- (void)setInteger:(long long)integer forKey:(id)key;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)synchronize;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)removeObjectForKey:(id)key;
- (BOOL)isChangeColorSwapped;
@end

#endif /* StocksPreferences_h */