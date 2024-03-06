//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteConfigurationAsset_h
#define WFRemoteConfigurationAsset_h
@import Foundation;

#include "WFCloudKitItem-Protocol.h"

@class CKRecordID, NSData, NSNumber, NSString, WFFileRepresentation;

@interface WFRemoteConfigurationAsset : NSObject<WFCloudKitItem>

@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *shortVersion;
@property (retain, nonatomic) WFFileRepresentation *assetDataFile;
@property (copy, nonatomic) NSString *configuration;
@property (copy, nonatomic) NSNumber *buildNumber;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)recordType;
+ (id)properties;

/* instance methods */
@end

#endif /* WFRemoteConfigurationAsset_h */