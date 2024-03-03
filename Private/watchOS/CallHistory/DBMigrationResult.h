//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef DBMigrationResult_h
#define DBMigrationResult_h
@import Foundation;

@interface DBMigrationResult : NSObject

@property (nonatomic) long long errorCode;
@property (nonatomic) long long dbVersion;

/* instance methods */
- (id)initWithErrorCode:(long long)code andDBVersion:(long long)dbversion;
@end

#endif /* DBMigrationResult_h */