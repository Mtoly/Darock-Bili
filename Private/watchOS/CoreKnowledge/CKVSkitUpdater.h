//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVSkitUpdater_h
#define CKVSkitUpdater_h
@import Foundation;

#include "CKVLocalization.h"

@class NSString;
@protocol KVSkitWriteAccess;

@interface CKVSkitUpdater : NSObject {
  /* instance variables */
  NSObject<KVSkitWriteAccess> *_skit;
  CKVLocalization *_localization;
  NSString *_originAppId;
}

@property (readonly, nonatomic) unsigned long long insertCount;
@property (readonly, nonatomic) unsigned long long deleteCount;

/* instance methods */
- (id)initWithWriteAccess:(id)access settings:(id)settings originAppId:(id)id itemType:(long long)type;
- (id)init;
- (BOOL)setLocale;
- (BOOL)insertItem:(id)item recordId:(id)id;
- (BOOL)deleteItemWithRecordId:(id)id;
@end

#endif /* CKVSkitUpdater_h */