//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTTLDeletionPolicy_h
#define PPTTLDeletionPolicy_h
@import Foundation;

#include "PPLocalLocationStore.h"
#include "PPLocalNamedEntityStore.h"
#include "PPLocalTopicStore.h"

@class NSArray;

@interface PPTTLDeletionPolicy : NSObject {
  /* instance variables */
  NSArray *_rules;
  PPLocalNamedEntityStore *_namedEntityStore;
  PPLocalTopicStore *_topicStore;
  PPLocalLocationStore *_locationStore;
}

/* class methods */
+ (id)defaultPolicy;

/* instance methods */
- (id)initWithRules:(id)rules namedEntityStore:(id)store topicStore:(id)store locationStore:(id)store;
- (id)init;
- (BOOL)applyPolicyWithError:(id *)error shouldContinueBlock:(id /* block */)block;
- (id)description;
@end

#endif /* PPTTLDeletionPolicy_h */