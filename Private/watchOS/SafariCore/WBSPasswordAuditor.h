//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPasswordAuditor_h
#define WBSPasswordAuditor_h
@import Foundation;

#include "WBSAutoFillQuirksManager.h"
#include "WBSSavedAccountStore.h"

@interface WBSPasswordAuditor : NSObject

@property (readonly, nonatomic) WBSSavedAccountStore *savedAccountStore;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (readonly, nonatomic) BOOL accountStoreHasDuplicatedPasswords;

/* instance methods */
- (id)init;
- (id)initWithSavedAccountStore:(id)store autoFillQuirksManager:(id)manager;
- (BOOL)_savedAccountQualifiesForReuseAuditing:(id)auditing;
- (BOOL)_passwordIsReused:(id)reused byOtherSavedAccount:(id)account;
- (BOOL)savedAccountIsReused:(id)reused;
- (id)savedAccountsWithDuplicatedPassword:(id)password;
- (id)duplicatePasswordsInPasswords:(id)passwords;
@end

#endif /* WBSPasswordAuditor_h */