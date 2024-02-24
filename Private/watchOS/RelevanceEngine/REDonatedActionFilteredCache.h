//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REDonatedActionFilteredCache_h
#define REDonatedActionFilteredCache_h
@import Foundation;

#include "REDonatedActionFilteredCacheDelegate-Protocol.h"
#include "REDonatedActionStoreObserver-Protocol.h"

@class NSDate, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface REDonatedActionFilteredCache : NSObject<REDonatedActionStoreObserver> {
  /* instance variables */
  NSMapTable *_countsByActionType;
  NSMapTable *_countPerformedTodayByActionType;
  NSMapTable *_actions;
  NSObject<OS_dispatch_queue> *_queue;
  NSDate *_firstDonationDate;
}

@property (weak, nonatomic) NSObject<REDonatedActionFilteredCacheDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)fetchAllUniqueActions:(id /* block */)actions completion:(id /* block */)completion;
- (void)fetchCountForAction:(id)action usingBlock:(id /* block */)block;
- (void)fetchDonationWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)fetchPerformedCountForAction:(id)action usingBlock:(id /* block */)block;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)identifer actionIdentifier:(unsigned long long)identifier completion:(id /* block */)completion;
- (void)fetchFirstPerformedActionDate:(id /* block */)date;
- (void)reset;
- (void)donationActionStoreReceivedDonation:(id)donation isNewDonation:(BOOL)donation;
- (void)donationActionStoreRemovedDonation:(id)donation;
- (void)donationActionStoreRemovedDonationsFor:(id)for;
- (void)donationActionStoreRemoveAllDonations;
- (void)_queue_removeAllData;
- (id)_keyForAction:(id)action;
- (void)_queue_storeDonation:(id)donation;
- (void)_queue_removeDonation:(id)donation;
- (void)_queue_removeDonationsForBundleIdentifier:(id)identifier;
- (unsigned long long)_queue_performedTodayCountForBundleIdentifer:(id)identifer actionIdentifier:(unsigned long long)identifier;
- (unsigned long long)_queue_performedCountForDonation:(id)donation;
- (void)_queue_incrementPerformedCountForDonation:(id)donation;
- (void)_refreshAllDonations:(id)donations;
@end

#endif /* REDonatedActionFilteredCache_h */