//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCoreDataCloudShareService_h
#define HMDCoreDataCloudShareService_h
@import Foundation;

#include "HMDManagedObjectContext.h"
#include "HMFLogging-Protocol.h"

@class CKContainer, NSPersistentCloudKitContainer, NSPersistentStore, NSString;

@interface HMDCoreDataCloudShareService : NSObject<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CKContainer *_ckContainer;
}

@property (readonly) NSPersistentCloudKitContainer *container;
@property (readonly) NSPersistentStore *sharedStore;
@property (readonly) NSPersistentStore *privateStore;
@property (readonly) HMDManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithContainer:(id)container sharedStore:(id)store privateStore:(id)store moc:(id)moc;
- (id)ckContainer;
- (id)grantAccessForUserWithAccountHandle:(id)handle share:(id)share;
- (id)revokeAccessForUserWithAccountHandle:(id)handle share:(id)share;
- (id)auditUsersForRevokedAccessWithAccountHandles:(id)handles share:(id)share;
- (void)_acceptShareInvitationsFromMetadata:(id)metadata intoPersistentStore:(id)store completion:(id /* block */)completion;
- (id)acceptShareInvitationsFromMetadata:(id)metadata intoPersistentStore:(id)store;
- (id)_acceptShareInvitation:(id)invitation;
- (id)acceptShareInvitation:(id)invitation;
- (id)_grantAccessForUserWithAccountHandle:(id)handle share:(id)share;
- (id)_revokeAccessForUserWithAccountHandle:(id)handle share:(id)share;
- (id)_auditUsersForRevokedAccessWithAccountHandles:(id)handles share:(id)share;
- (id)_addParticipant:(id)participant share:(id)share;
- (id)_removeParticipant:(id)participant share:(id)share;
- (id)_fetchParticipantsForAccountHandles:(id)handles;
- (id)_fetchParticipantForAccountHandle:(id)handle;
- (void)_fetchShareWithRecordID:(id)id completion:(id /* block */)completion;
- (id)fetchShareWithRecordID:(id)id;
- (void)_pushUpdatedShare:(id)share completion:(id /* block */)completion;
- (id)_pushUpdatedShare:(id)share;
- (void)_fetchShareMetadataForInvitation:(id)invitation completion:(id /* block */)completion;
- (id)_fetchShareMetadataForInvitation:(id)invitation;
@end

#endif /* HMDCoreDataCloudShareService_h */