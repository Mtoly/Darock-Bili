//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMReminderSubtaskContextChangeItem_h
#define REMReminderSubtaskContextChangeItem_h
@import Foundation;

#include "REMReminderChangeItem.h"

@interface REMReminderSubtaskContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;

/* instance methods */
- (id)initWithReminderChangeItem:(id)item;
- (void)addReminderChangeItem:(id)item;
- (void)insertReminderChangeItem:(id)item beforeReminderChangeItem:(id)item;
- (void)insertReminderChangeItem:(id)item afterReminderChangeItem:(id)item;
- (void)undeleteSubtaskWithID:(id)id usingUndo:(id)undo;
- (id)_listChangeItem;
@end

#endif /* REMReminderSubtaskContextChangeItem_h */