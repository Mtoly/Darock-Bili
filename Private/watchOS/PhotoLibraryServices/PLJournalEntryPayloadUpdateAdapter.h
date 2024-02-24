//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLJournalEntryPayloadUpdateAdapter_h
#define PLJournalEntryPayloadUpdateAdapter_h
@import Foundation;

#include "PLJournalEntryPayloadUpdateAdapter-Protocol.h"

@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject<PLJournalEntryPayloadUpdateAdapter> {
  /* instance variables */
  NSManagedObject *_managedObject;
}

/* instance methods */
- (id)initWithManagedObject:(id)object;
- (id)managedObject;
- (BOOL)isValidForJournalPersistence;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)payloadIDForTombstone:(id)tombstone;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)keys;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)keys;
@end

#endif /* PLJournalEntryPayloadUpdateAdapter_h */