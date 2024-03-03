//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDInteractionEventLogSaltProvider_h
#define EDInteractionEventLogSaltProvider_h
@import Foundation;

#include "EFLoggable-Protocol.h"

@class NSData, NSString;

@interface EDInteractionEventLogSaltProvider : NSObject<EFLoggable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSData *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)saltProviderWithString:(id)string;
+ (id)saltProviderFromKeyChain;

/* instance methods */
- (id)init;
- (id)_findOrCreateSalt;
- (id)_queryKeychainError:(out id *)error;
- (id)_findExistingSaltError:(out id *)error;
- (id)_createSalt;
- (void)_deleteSalt;
- (BOOL)migrateAccessClass;
@end

#endif /* EDInteractionEventLogSaltProvider_h */