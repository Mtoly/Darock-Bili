//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMUserVocabList_h
#define CDMUserVocabList_h
@import Foundation;

@class NSArray, NSNumber;

@interface CDMUserVocabList : NSObject

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) NSNumber *hashValue;

/* instance methods */
- (id)initWithEntries:(id)entries hashValue:(id)value;
@end

#endif /* CDMUserVocabList_h */