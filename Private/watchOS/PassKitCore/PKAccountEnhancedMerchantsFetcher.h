//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountEnhancedMerchantsFetcher_h
#define PKAccountEnhancedMerchantsFetcher_h
@import Foundation;

#include "PKAccountEnhancedMerchantBehavior.h"
#include "PKAccountService.h"
#include "PKAccountServiceObserver-Protocol.h"

@class NSArray, NSDate, NSMutableDictionary, NSString;

@interface PKAccountEnhancedMerchantsFetcher : NSObject<PKAccountServiceObserver> {
  /* instance variables */
  NSString *_accountIdentifier;
  PKAccountService *_accountService;
  NSArray *_items;
  NSArray *_orderings;
  PKAccountEnhancedMerchantBehavior *_behavior;
  NSDate *_lastUpdate;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemsLock;
  NSMutableDictionary *_tokenToUpdateHandlerMap;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountIdentifier:(id)identifier accountService:(id)service;
- (void)dealloc;
- (void)reloadDataWithCompletion:(id /* block */)completion;
- (void)_reloadDataIncludeOrderings:(BOOL)orderings includeBehavior:(BOOL)behavior includeMerchants:(BOOL)merchants completion:(id /* block */)completion;
- (void)updateDataWithCooldownLevel:(unsigned long long)level ignoreErrorBackoff:(BOOL)backoff completion:(id /* block */)completion;
- (BOOL)dataIsWithinThresholdForCooldownLevel:(unsigned long long)level;
- (id)enhancedMerchants;
- (id)enhancedMerchantsWithOrderingContext:(unsigned long long)context;
- (id)enhancedMerchantMatchingPaymentIdentifier:(id)identifier;
- (id)_enhancedMerchantBehaviorCopy;
- (id)_lastUpdateCopy;
- (void)setItems:(id)items;
- (void)_setLastUpdate:(id)update;
- (void)_executeWithLock:(id /* block */)lock;
- (id)addUpdateHandler:(id /* block */)handler;
- (void)removeUpdateHandler:(id)handler;
- (void)_triggerUpdateHandlers;
- (void)didUpdateAccountEnhancedMerchants:(id)merchants accountIdentifier:(id)identifier lastUpdate:(id)update;
@end

#endif /* PKAccountEnhancedMerchantsFetcher_h */