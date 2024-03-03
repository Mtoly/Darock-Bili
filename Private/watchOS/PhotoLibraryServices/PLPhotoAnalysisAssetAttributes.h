//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoAnalysisAssetAttributes_h
#define PLPhotoAnalysisAssetAttributes_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLManagedAsset.h"

@class NSData, NSDate;

@interface PLPhotoAnalysisAssetAttributes : PLManagedObject

@property (retain, @dynamic, nonatomic) NSData *wallpaperPropertiesData;
@property (@dynamic, nonatomic) unsigned long long wallpaperPropertiesVersion;
@property (retain, @dynamic, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (retain, @dynamic, nonatomic) PLManagedAsset *asset;

/* class methods */
+ (id)fetchRequest;
+ (id)entityName;
@end

#endif /* PLPhotoAnalysisAssetAttributes_h */