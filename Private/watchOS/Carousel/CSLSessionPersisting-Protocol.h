//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSessionPersisting_Protocol_h
#define CSLSessionPersisting_Protocol_h
@import Foundation;

@protocol CSLSessionPersisting <NSObject>
/* class methods */
+ (const char *)createSQL;
+ (const char *)selectAllSQL;
+ (const char *)upsertSQL;
+ (const char *)deleteSQL;
+ (void)upgradeProperties:(id)properties;
+ (id)tablesToDrop:(id)drop;
/* instance methods */
- (id)initWithSelectStatement:(struct sqlite3_stmt *)statement;
- (void)bindUpsertStatement:(struct sqlite3_stmt *)statement;
- (void)bindDeleteStatement:(struct sqlite3_stmt *)statement;
@end

#endif /* CSLSessionPersisting_Protocol_h */