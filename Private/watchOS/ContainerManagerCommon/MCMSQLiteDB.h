//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMSQLiteDB_h
#define MCMSQLiteDB_h
@import Foundation;

#include "MCMSQLiteDBCodeSigningPeerageDelegate-Protocol.h"

@class NSURL;
@protocol OS_dispatch_queue;

@interface MCMSQLiteDB : NSObject

@property (weak, nonatomic) NSObject<MCMSQLiteDBCodeSigningPeerageDelegate> *peerageDelegate;
@property (nonatomic) struct sqlite3 * db;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (BOOL)moveDBWithURL:(id)url toURL:(id)url queue:(id)queue error:(id *)error;
+ (struct sqlite3 *)openDBWithURL:(id)url queue:(id)queue error:(id *)error;

/* instance methods */
- (id)initWithURL:(id)url queue:(id)queue error:(id *)error;
- (void)dealloc;
- (BOOL)_sqliteExec:(id)exec error:(id *)error;
- (void)closeDB;
- (BOOL)_performTwoParameterQuery:(const char *)query withTextInputOne:(id)one andTextInputTwo:(id)two expectedChanges:(int)changes error:(id *)error;
- (BOOL)_performSingleParameterQuery:(const char *)query withTextInput:(id)input expectedChanges:(int)changes error:(id *)error;
- (BOOL)_performSingleParameterQuery:(const char *)query withTextInput:(id)input error:(id *)error;
- (BOOL)_insertChildIdentifier:(id)identifier forParentIdentifier:(id)identifier error:(id *)error;
- (BOOL)_performInsertOrUpdateQuery:(const char *)query withCodeSigningEntry:(id)entry forIdentifier:(id)identifier isUpdate:(BOOL)update error:(id *)error;
- (BOOL)_insertCodeSigningInfo:(id)info forIdentifier:(id)identifier error:(id *)error;
- (BOOL)_insertCodeSigningData:(id)data forIdentifier:(id)identifier error:(id *)error;
- (BOOL)_deleteCodeSigningWithIdentifier:(id)identifier error:(id *)error;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)row error:(id *)error;
- (id)_selectCodeSigningEntryWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)addCodeSigningEntry:(id)entry withIdentifier:(id)identifier error:(id *)error;
- (BOOL)deleteCodeSigningEntryWithIdentifier:(id)identifier error:(id *)error;
- (id)codeSigningEntryWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)invalidateCodeSigningWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)invalidateCodeSigningForIdentifierAndAllChildren:(id)children error:(id *)error;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(id /* block */)block;
- (id)identifiersWithError:(id *)error;
- (id)childIdentifiersForParentIdentifier:(id)identifier error:(id *)error;
- (id)parentIdentifierForChildIdentifier:(id)identifier error:(id *)error;
- (BOOL)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)error;
- (id)childParentMapWithError:(id *)error;
- (BOOL)deleteAllInvalidPluginCodeSigningEntriesWithNumChanges:(int *)changes error:(id *)error;
@end

#endif /* MCMSQLiteDB_h */