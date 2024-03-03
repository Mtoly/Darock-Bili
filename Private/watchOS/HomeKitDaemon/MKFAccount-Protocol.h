//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFAccount_Protocol_h
#define MKFAccount_Protocol_h
@import Foundation;

@protocol MKFAccount <MKFModel, MKFAccountPublicExtensions>

@property (retain, nonatomic) HMDAccountIdentifier *identifier;
@property (copy, nonatomic) NSNumber *local;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *devices;
@property (readonly, retain, nonatomic) NSArray *handles;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (readonly, copy, nonatomic) MKFAccountDatabaseID *databaseID;

/* instance methods */
- (id)materializeOrCreateDevicesRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findDevicesRelationWithModelID:(id)id;
- (void)synchronizeDevicesRelationWith:(id)with;
- (id)materializeOrCreateHandlesRelationWithModelID:(id)id createdNew:(BOOL *)new;
- (id)findHandlesRelationWithModelID:(id)id;
- (void)synchronizeHandlesRelationWith:(id)with;
@end

#endif /* MKFAccount_Protocol_h */