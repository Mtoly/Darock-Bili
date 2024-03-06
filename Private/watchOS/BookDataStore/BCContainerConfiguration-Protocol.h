//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCContainerConfiguration_Protocol_h
#define BCContainerConfiguration_Protocol_h
@import Foundation;

@protocol BCContainerConfiguration <NSObject>

@property (readonly, nonatomic) NSString *queueIdentifier;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *appZones;
@property (readonly, nonatomic) NSArray *serviceZones;
@property (readonly, nonatomic) NSString *dbArchiveFolderName;
@property (readonly, nonatomic) NSString *dbArchiveExtension;
@property (readonly, nonatomic) NSString *dbArchiveFilename;
@property (readonly, nonatomic) NSString *dbSubscriptionID;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL requiresDeviceToDeviceEncryption;

/* class methods */
+ (id)configuration;
/* instance methods */
- (BOOL)shouldArchiveData:(id)data;
- (BOOL)shouldPerformDatabaseSubscriptionForServiceMode:(BOOL)mode;
@end

#endif /* BCContainerConfiguration_Protocol_h */