//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudSharedUpdateAlbumMetadataJob_h
#define PLCloudSharedUpdateAlbumMetadataJob_h
@import Foundation;

#include "PLCloudSharingJob.h"

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob

@property (retain, nonatomic) NSDictionary *metadata;

/* class methods */
+ (void)updateAlbumMetadata:(id)metadata;

/* instance methods */
- (void)encodeToXPCObject:(id)xpcobject;
- (id)initFromXPCObject:(id)xpcobject libraryServicesManager:(id)manager;
- (id)description;
- (long long)daemonOperation;
- (void)run;
- (void)runDaemonSide;
- (id)_argumentsDictionaryAsData:(id)data;
- (id)_argumentsDictionaryFromXPCEvent:(id)xpcevent;
@end

#endif /* PLCloudSharedUpdateAlbumMetadataJob_h */