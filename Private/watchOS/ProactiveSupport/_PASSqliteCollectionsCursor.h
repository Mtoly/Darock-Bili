//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqliteCollectionsCursor_h
#define _PASSqliteCollectionsCursor_h
@import Foundation;

@interface _PASSqliteCollectionsCursor : NSObject {
  /* instance variables */
  BOOL _foundOutputRow;
  BOOL _eof;
}

@property (retain, nonatomic) id collection;

/* class methods */
+ (const char *)sqliteMethodName;
+ (const char *)sqliteCreateTableStatement;
+ (BOOL)hasRowId;
+ (BOOL)hasKey;
+ (double)baseEstimatedRows;
+ (double)baseEstimatedCost;
+ (id)planningInfoForValueConstraint:(int)constraint;
+ (id)planningInfoForRowIdConstraint:(int)constraint;
+ (id)planningInfoForKeyConstraint:(int)constraint;
+ (BOOL)canOrderByValue:(BOOL)value;
+ (BOOL)canOrderByRowId:(BOOL)id;
+ (BOOL)canOrderByKey:(BOOL)key;

/* instance methods */
- (id)init;
- (BOOL)currentIndexEof;
- (id)currentIndexedValue;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepIndexedRow;
- (unsigned long long)outputRowId;
- (id)outputKey;
- (void)applyConstraint:(int)constraint withArgument:(id)argument;
- (void)applyRowIdConstraint:(int)constraint withArgument:(id)argument;
- (void)applyKeyConstraint:(int)constraint withArgument:(id)argument;
- (void)applyValueSort:(BOOL)sort;
- (void)applyRowIdSort:(BOOL)sort;
- (void)applyKeySort:(BOOL)sort;
- (void)finalizeConstraints;
@end

#endif /* _PASSqliteCollectionsCursor_h */