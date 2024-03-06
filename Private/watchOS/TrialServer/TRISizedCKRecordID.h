//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRISizedCKRecordID_h
#define TRISizedCKRecordID_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class CKRecordID;

@interface TRISizedCKRecordID : NSObject<NSCopying>

@property (readonly, nonatomic) CKRecordID *recordId;
@property (readonly, nonatomic) unsigned long long downloadSize;

/* class methods */
+ (id)recordIDWithRecordId:(id)id downloadSize:(unsigned long long)size;

/* instance methods */
- (id)initWithRecordId:(id)id downloadSize:(unsigned long long)size;
- (id)copyWithReplacementRecordId:(id)id;
- (id)copyWithReplacementDownloadSize:(unsigned long long)size;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToRecordID:(id)id;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRISizedCKRecordID_h */