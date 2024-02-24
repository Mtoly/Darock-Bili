//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDRecordCaching_Protocol_h
#define CKDRecordCaching_Protocol_h
@import Foundation;

@protocol CKDRecordCaching 
/* instance methods */
- (void)addRecord:(id)record container:(id)container knownUserKeys:(id)keys scope:(long long)scope;
- (id)recordWithID:(id)id container:(id)container requiredKeys:(id)keys scope:(long long)scope;
- (id)recordsWithIDs:(id)ids container:(id)container requiredKeys:(id)keys scope:(long long)scope;
- (id)etagForRecordID:(id)id container:(id)container requiredKeys:(id)keys scope:(long long)scope;
- (void)deleteRecordWithID:(id)id scope:(long long)scope;
- (void)clearAllRecords;
- (void)clearAllRecordsInScope:(long long)scope;
- (void)clearAllRecordsForZoneWithID:(id)id;
- (void)clearAssetAuthTokensForRecordWithID:(id)id container:(id)container scope:(long long)scope;
- (unsigned long long)numberOfRecordsWithID:(id)id container:(id)container;
- (unsigned long long)count:(id *)count;
@end

#endif /* CKDRecordCaching_Protocol_h */