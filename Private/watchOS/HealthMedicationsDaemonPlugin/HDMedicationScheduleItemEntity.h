//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicationScheduleItemEntity_h
#define HDMedicationScheduleItemEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDMedicationScheduleItemEntity : HDHealthEntity
/* class methods */
+ (id)medicationScheduleItemWithIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
+ (BOOL)enumerateItemsWithPredicate:(id)predicate orderingTerms:(id)terms transaction:(id)transaction error:(id *)error enumerationHandler:(id /* block */)handler;
+ (id)insertMedicationScheduleItem:(id)item transaction:(id)transaction error:(id *)error;
+ (BOOL)updateNotification:(BOOL)notification itemIdentifier:(id)identifier transaction:(id)transaction error:(id *)error;
+ (BOOL)deleteMedicationScheduleItemsWithPredicate:(id)predicate transaction:(id)transaction error:(id *)error;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (long long)protectionClass;
@end

#endif /* HDMedicationScheduleItemEntity_h */