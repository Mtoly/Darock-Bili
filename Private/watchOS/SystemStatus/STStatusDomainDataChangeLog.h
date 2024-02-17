//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusDomainDataChangeLog_h
#define STStatusDomainDataChangeLog_h
@import Foundation;

@class BSIntegerSet, NSDictionary, NSOrderedSet;

@interface STStatusDomainDataChangeLog : NSObject {
  /* instance variables */
  NSOrderedSet *_sortedRecordKeys;
  NSDictionary *_recordsByKey;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

/* instance methods */
- (id)initWithRecordKeys:(id)keys;
- (id)currentDataForDomain:(unsigned long long)domain;
- (id)recordForKey:(id)key;
@end

#endif /* STStatusDomainDataChangeLog_h */