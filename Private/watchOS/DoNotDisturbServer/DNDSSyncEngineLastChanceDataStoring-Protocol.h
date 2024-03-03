//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSSyncEngineLastChanceDataStoring_Protocol_h
#define DNDSSyncEngineLastChanceDataStoring_Protocol_h
@import Foundation;

@protocol DNDSSyncEngineLastChanceDataStoring <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *records;

/* instance methods */
- (id)recordsWithZoneID:(id)id;
- (id)recordWithID:(id)id;
- (void)addRecord:(id)record;
- (void)removeRecordWithID:(id)id;
- (void)removeRecordsWithZoneID:(id)id;
- (void)purge;
@end

#endif /* DNDSSyncEngineLastChanceDataStoring_Protocol_h */