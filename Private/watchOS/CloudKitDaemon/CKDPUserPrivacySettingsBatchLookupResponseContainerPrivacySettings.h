//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings_h
#define CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings_h
@import Foundation;

#include "PBCodable.h"
#include "CKDPUserPrivacySettings.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 applicationContainerEnvironment; } _has;
}

@property (readonly, nonatomic) BOOL hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (nonatomic) BOOL hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (retain, nonatomic) NSMutableArray *applicationBundles;
@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

/* class methods */
+ (Class)applicationBundleType;

/* instance methods */
- (id)applicationContainerEnvironmentAsString:(int)string;
- (int)StringAsApplicationContainerEnvironment:(id)environment;
- (void)clearApplicationBundles;
- (void)addApplicationBundle:(id)bundle;
- (unsigned long long)applicationBundlesCount;
- (id)applicationBundleAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings_h */