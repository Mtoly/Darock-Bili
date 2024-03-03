//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SiriNLUOverridesTrieBundle_h
#define SiriNLUOverridesTrieBundle_h
@import Foundation;

#include "SiriNLUMarisaTrie.h"

@interface SiriNLUOverridesTrieBundle : NSObject {
  /* instance variables */
  SiriNLUMarisaTrie *ruleTrie;
  SiriNLUMarisaTrie *patternTrie;
  SiriNLUMarisaTrie *overrideIdTrie;
  SiriNLUMarisaTrie *userParseTrie;
  SiriNLUMarisaTrie *overrideTimeStampTrie;
}

/* class methods */
+ (id)getTrieURLs:(id)urls;
+ (id)buildPatternTrieLookupKey:(id)key locale:(id)locale overrideNamespace:(long long)namespace;

/* instance methods */
- (id)init:(id)init;
- (id)fetchRegexRuleIds:(id)ids overrideNamespace:(long long)namespace;
- (id)fetchSerializedNluRequestRule:(id)rule;
- (id)fetchOverrideId:(id)id;
- (id)fetchOverrideIdArray:(id)array;
- (unsigned long long)fetchOverrideTimeStamp:(id)stamp;
- (id)fetchSerializedUserParse:(id)parse;
- (id)fetchRuleId:(id)id locale:(id)locale overrideNamespace:(long long)namespace;
@end

#endif /* SiriNLUOverridesTrieBundle_h */