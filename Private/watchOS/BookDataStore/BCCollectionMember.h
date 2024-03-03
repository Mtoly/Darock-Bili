//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCollectionMember_h
#define BCCollectionMember_h
@import Foundation;

#include "BCCloudData.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"
#include "BCCollectionMember-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@interface BCCollectionMember : BCCloudData<BCCollectionMember>

@property (copy, @dynamic, nonatomic) NSString *collectionMemberID;
@property (@dynamic, nonatomic) int sortOrder;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)propertyIDKey;
+ (id)collectionMemberIDWithCollectionID:(id)id assetID:(id)id;
+ (id)assetIDFromCollectionMemberID:(id)id;
+ (id)collectionIDFromCollectionMemberID:(id)id;

/* instance methods */
- (id)mutableCopy;
- (void)configureFromCloudData:(id)data withMergers:(id)mergers;
- (BOOL)isEqualExceptForDate:(id)date ignoringEmptySalt:(BOOL)salt;
- (void)_configureFromCollectionMember:(id)member withMergers:(id)mergers;
- (void)resolveConflictsFromRecord:(id)record withResolvers:(id)resolvers;
- (id)recordType;
- (id)identifier;
- (id)zoneName;
@end

#endif /* BCCollectionMember_h */