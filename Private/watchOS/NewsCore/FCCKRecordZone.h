//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKRecordZone_h
#define FCCKRecordZone_h
@import Foundation;

#include "FCCKPrivateDatabase.h"
#include "FCCKRecordZoneDelegate-Protocol.h"

@class CKRecordZoneID;

@interface FCCKRecordZone : NSObject {
  /* instance variables */
  BOOL _zoneReady;
  CKRecordZoneID *_recordZoneID;
  FCCKPrivateDatabase *_database;
  NSObject<FCCKRecordZoneDelegate> *_delegate;
}

/* instance methods */
- (id)description;
@end

#endif /* FCCKRecordZone_h */