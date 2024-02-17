//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMRemindersDataView_h
#define REMRemindersDataView_h
@import Foundation;

#include "REMStore.h"

@interface REMRemindersDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

/* class methods */
+ (id)remindersFromAccountStorages:(id)storages listStorages:(id)storages reminderStorages:(id)storages store:(id)store requestedReminderIDs:(id)ids;
+ (id)remindersFromAccountStorages:(id)storages listStorages:(id)storages reminderStorages:(id)storages store:(id)store requestedStringIdentifiers:(id)identifiers identifierSelector:(SEL)selector;
+ (id)remindersFromAccountStorages:(id)storages listStorages:(id)storages reminderStorages:(id)storages store:(id)store;
+ (id)remindersFromAccountStorages:(id)storages listStorages:(id)storages reminderStorages:(id)storages store:(id)store showMarkedForDeleteObjects:(BOOL)objects;

/* instance methods */
- (id)initWithStore:(id)store;
- (id)fetchRemindersWithListID:(id)id includingSubtasks:(BOOL)subtasks error:(id *)error;
- (id)fetchRemindersWithParentReminderID:(id)id accountID:(id)id includeUnsupported:(BOOL)unsupported error:(id *)error;
- (id)fetchSubtasksOfParentReminder:(id)reminder includeUnsupported:(BOOL)unsupported error:(id *)error;
- (id)fetchSubtasksOfParentReminderChangeItem:(id)item includeUnsupported:(BOOL)unsupported error:(id *)error;
- (id)fetchReminderWithObjectID:(id)id fetchOptions:(id)options error:(id *)error;
- (id)fetchRemindersWithObjectIDs:(id)ids fetchOptions:(id)options error:(id *)error;
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)ids error:(id *)error;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)descriptor sortDescriptors:(id)descriptors options:(id)options error:(id *)error;
- (id)fetchRemindersWithParentReminderIDs:(id)ids error:(id *)error;
- (id)fetchObjectIDsOfRemindersWithParentReminderID:(id)id includeIncomplete:(BOOL)incomplete includeCompleted:(BOOL)completed isUnsupported:(BOOL)unsupported error:(id *)error;
- (id)fetchRemindersCountWithListID:(id)id error:(id *)error;
- (id)fetchRemindersCountWithParentReminderID:(id)id error:(id *)error;
- (long long)fetchSubtasksMasksWithParentReminderID:(id)id error:(id *)error;
- (id)fetchReminderWithExternalIdentifier:(id)identifier inList:(id)list error:(id *)error;
- (id)fetchRemindersWithExternalIdentifiers:(id)identifiers inList:(id)list error:(id *)error;
- (id)fetchAllRemindersWithExternalIdentifier:(id)identifier error:(id *)error;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)identifier inList:(id)list error:(id *)error;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)identifiers inList:(id)list error:(id *)error;
@end

#endif /* REMRemindersDataView_h */