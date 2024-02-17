//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncRapportStorage_h
#define _DKSyncRapportStorage_h
@import Foundation;

#include "_DKSyncCommonClass-Protocol.h"
#include "_DKSyncRapportCommonStorage.h"

@interface _DKSyncRapportStorage : NSObject<_DKSyncCommonClass> {
  /* instance variables */
  _DKSyncRapportCommonStorage *_commonStorage;
}

/* instance methods */
- (id)init;
- (BOOL)isAvailable;
- (void)registerRequestIDsWithClient:(id)client;
- (void)cancelOutstandingOperations;
- (id)name;
- (void)start;
- (void)fetchSourceDeviceIDFromPeer:(id)peer highPriority:(BOOL)priority completion:(id /* block */)completion;
- (long long)transportType;
- (id)myDeviceID;
- (void)setDeviceID:(id)id;
- (id)client;
- (BOOL)isTransportActiveForPeer:(id)peer;
- (void)handleAvailabilityFailureWithPeer:(id)peer completion:(id /* block */)completion;
- (id)transformResponseError:(id)error;
- (id)transformCaughtObject:(id)object existingError:(id)error;
- (void)handshakeWithDuetSyncPeer:(id)peer orError:(id)error;
- (void)sendRequestID:(id)id request:(id)request peer:(id)peer highPriority:(BOOL)priority options:(id)options responseHandler:(id /* block */)handler;
@end

#endif /* _DKSyncRapportStorage_h */