//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPSecuritySession_h
#define HAPSecuritySession_h
@import Foundation;

#include "HMFObject.h"
#include "HAPEncryptedSession-Protocol.h"
#include "HAPSecuritySessionDelegate-Protocol.h"
#include "HAPSecuritySessionEncryption.h"
#include "HMFLogging-Protocol.h"

@class NSData, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HAPSecuritySession : HMFObject<HMFLogging, HAPEncryptedSession> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long state;
@property (nonatomic) struct PairingSessionPrivate * pairingSession;
@property (retain, nonatomic) HAPSecuritySessionEncryption *encryption;
@property (readonly, weak) NSObject<HAPSecuritySessionDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly) BOOL open;
@property (readonly) BOOL opening;
@property (readonly, nonatomic) unsigned long long resumeSessionID;
@property (readonly) NSData *broadcastKey;
@property (readonly) NSDictionary *additionalDerivedKeys;
@property (readonly) unsigned long long sessionStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithRole:(unsigned long long)role resumeSessionID:(unsigned long long)id delegate:(id)delegate;
- (void)dealloc;
- (BOOL)isOpen;
- (BOOL)isOpening;
- (BOOL)_initializeSetupSession:(unsigned long long)session;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)status;
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)identifier status:(int *)status;
- (void)_initiateClientSessionSetupExchange;
- (void)receivedSetupExchangeData:(id)data error:(id)error;
- (void)_processSetupExchangeData:(id)data error:(id)error;
- (id)_inputInfo;
- (id)_outputInfo;
- (id)_broadcastInfo;
- (void)_handleSetupExchangeComplete;
- (void)reallyOpen;
- (void)_notifyOpening;
- (void)_notifyOpened;
- (void)close;
- (void)closeWithError:(id)error;
- (void)_closeWithError:(id)error;
- (id)encryptData:(id)data additionalAuthenticatedData:(id)data error:(id *)error;
- (id)decryptData:(id)data additionalAuthenticatedData:(id)data error:(id *)error;
- (id)logIdentifier;
@end

#endif /* HAPSecuritySession_h */