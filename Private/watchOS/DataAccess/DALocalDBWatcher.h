//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2653.2.1.0.0
//
#ifndef DALocalDBWatcher_h
#define DALocalDBWatcher_h
@import Foundation;

#include "DACalDBHelper.h"

@class NSMapTable, NSMutableDictionary, NoteContext;

@interface DALocalDBWatcher : NSObject {
  /* instance variables */
  DACalDBHelper *_calDBHelper;
  NSMutableDictionary *_calDBInfosByPath;
  NoteContext *_noteWatcher;
  NSMapTable *_concernedNotePartyToBlockMap;
}

/* class methods */
+ (id)sharedDBWatcher;
+ (id)_canonicalizePath:(id)path;

/* instance methods */
- (id)init;
- (void)_handleCalChangeNotification;
- (id)_dbInfoForAccountID:(id)id create:(BOOL)create;
- (void)registerConcernedCalParty:(id)party forAccountID:(id)id withChangedBlock:(id /* block */)block;
- (void)removeConcernedCalParty:(id)party forAccountID:(id)id;
- (void)noteCalDBDirChanged;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)container;
- (void)setLastSavedCalSequenceNumber:(int)number forDatabaseInContainer:(id)container;
- (void)_notesChangedExternally;
- (void)registerConcernedNoteParty:(id)party withChangedBlock:(id /* block */)block;
- (void)removeConcernedNoteParty:(id)party;
- (void)didReceiveDarwinNotification:(id)notification;
@end

#endif /* DALocalDBWatcher_h */