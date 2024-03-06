//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef SCKZoneJSONStore_h
#define SCKZoneJSONStore_h
@import Foundation;

#include "SCKZoneStore-Protocol.h"

@class CKServerChangeToken, NSArray, NSDate, NSString;

@interface SCKZoneJSONStore : NSObject<SCKZoneStore>

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

/* instance methods */
- (id)initWithZoneName:(id)name serverRecords:(id)records lastSyncDate:(id)date lastDirtyDate:(id)date serverChangeToken:(id)token pendingCommands:(id)commands;
- (void)applyServerRecordsDiff:(id)diff;
- (void)addPendingCommands:(id)commands;
- (void)clearPendingCommandsUpToCount:(unsigned long long)count;
@end

#endif /* SCKZoneJSONStore_h */