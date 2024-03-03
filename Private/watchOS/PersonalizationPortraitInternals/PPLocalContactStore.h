//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocalContactStore_h
#define PPLocalContactStore_h
@import Foundation;

#include "PPContactStorage.h"
#include "PPFeedbackAccepting-Protocol.h"
#include "PPLocalNamedEntityStore.h"

@interface PPLocalContactStore : NSObject<PPFeedbackAccepting> {
  /* instance variables */
  PPContactStorage *_contactStorage;
  PPLocalNamedEntityStore *_namedEntityStore;
}

/* class methods */
+ (id)defaultStore;

/* instance methods */
- (id)initWithStorage:(id)storage namedEntityStoreOverride:(id)override;
- (id)init;
- (id)meCard;
- (id)rankedContactsWithQuery:(id)query error:(id *)error;
- (double)similarityForNamedEntity:(id)entity nameRecord:(id)record;
- (id)_incompleteContactFromContactsRecord:(id)record;
- (id)_scoredContactFromContactsRecord:(id)record score:(double)score;
- (id)resolveContactsForNamedEntities:(id)entities;
- (id)upcomingRelevantContactsForQuery:(id)query error:(id *)error;
- (id)contactsWithQuery:(id)query error:(id *)error;
- (id)contactsWithQuery:(id)query explanationSet:(id)set timeoutSeconds:(id)seconds error:(id *)error;
- (id)scoredContactsWithContacts:(id)contacts;
- (id)contactHandlesForTopics:(id)topics error:(id *)error;
- (id)contactHandlesForSource:(id)source error:(id *)error;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)identifiers chosenContactIdentifier:(id)identifier;
- (BOOL)iterContactNameRecordsForClient:(id)client error:(id *)error block:(id /* block */)block;
- (id)contactNameRecordChangesForClient:(id)client error:(id *)error;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
- (id)cachedSignificantContactHandles;
- (void)rebuildCachedSignificantContactHandlesWithShouldContinue:(id /* block */)continue;
- (id)contactsChangeHistoryForClient:(id)client error:(id *)error;
- (void)clearChangeHistoryForClient:(id)client historyResult:(id)result;
- (BOOL)chineseBirthdayFound;
@end

#endif /* PPLocalContactStore_h */