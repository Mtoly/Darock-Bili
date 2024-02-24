//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudRecordArrayDatabase_h
#define PKCloudRecordArrayDatabase_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PKCloudRecordArrayDatabase : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_identifier;
}

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)descriptionWithDetailedOutput:(BOOL)output includeItem:(BOOL)item;
- (void)applyCloudRecordDatabase:(id)database;
- (void)addCloudRecord:(id)record;
- (id)allItems;
- (id)allObjects;
- (id)allRecordsWithRecordType:(id)type;
- (id)allRecordNames;
- (id)allRecordIDs;
- (long long)count;
- (id)countByZoneID;
@end

#endif /* PKCloudRecordArrayDatabase_h */