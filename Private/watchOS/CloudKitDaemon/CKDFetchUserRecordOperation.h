//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchUserRecordOperation_h
#define CKDFetchUserRecordOperation_h
@import Foundation;

#include "CKDFetchRecordsOperation.h"

@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

/* instance methods */
- (int)operationType;
- (void)fetchRecordsWithIDs:(id)ids andFullRecords:(id)records;
- (void)main;
- (id)analyticsPayload;
@end

#endif /* CKDFetchUserRecordOperation_h */