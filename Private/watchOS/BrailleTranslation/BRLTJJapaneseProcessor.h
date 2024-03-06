//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef BRLTJJapaneseProcessor_h
#define BRLTJJapaneseProcessor_h
@import Foundation;

@class NSDictionary;

@interface BRLTJJapaneseProcessor : NSObject {
  /* instance variables */
  NSDictionary *_kataToHira;
}

/* instance methods */
- (id)init;
- (id)longVowelExpressedFor:(id)for partOfSpeech:(long long)speech;
- (BOOL)isWordDescriptionLike:(id)like;
- (id)replaceKataWithHira:(id)hira;
- (id)spacedYomiOfWordDescription:(id)description;
@end

#endif /* BRLTJJapaneseProcessor_h */