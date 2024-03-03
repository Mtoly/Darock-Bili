//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCHeldRecords_h
#define FCHeldRecords_h
@import Foundation;

#include "FCInterestToken.h"

@class NSArray, NSDictionary, NSString;

@interface FCHeldRecords : NSObject

@property (readonly, nonatomic) NSDictionary *recordsByID;
@property (readonly, nonatomic) NSDictionary *interestTokensByID;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id onlyRecord;
@property (readonly, nonatomic) NSString *onlyRecordID;
@property (readonly, nonatomic) FCInterestToken *onlyInterestToken;
@property (readonly, nonatomic) NSArray *allRecordIDs;
@property (readonly, nonatomic) NSArray *allRecords;

/* class methods */
+ (id)heldRecordsByMerging:(id)merging with:(id)with;

/* instance methods */
- (id)initWithRecordsByID:(id)id interestTokensByID:(id)id;
- (void)enumerateRecordsAndInterestTokensWithBlock:(id /* block */)block;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)order withBlock:(id /* block */)block;
- (id)transformRecordsWithBlock:(id /* block */)block;
- (id)transformRecordsInOrder:(id)order withBlock:(id /* block */)block;
- (id)transformRecordsByIDWithBlock:(id /* block */)block;
- (id)recordWithID:(id)id;
- (id)interestTokenForID:(id)id;
- (id)heldRecordsPassingTest:(id /* block */)test;
- (id)heldRecordsForIDs:(id)ids;
@end

#endif /* FCHeldRecords_h */