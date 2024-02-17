//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCHCRecordExistenceExpectation_h
#define FCHCRecordExistenceExpectation_h
@import Foundation;

#include "FCHCExpectation-Protocol.h"

@class CKDatabase, CKRecordID, NSString;

@interface FCHCRecordExistenceExpectation : NSObject<FCHCExpectation>

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic) BOOL shouldExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)validate;
@end

#endif /* FCHCRecordExistenceExpectation_h */