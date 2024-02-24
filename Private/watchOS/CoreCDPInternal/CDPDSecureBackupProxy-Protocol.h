//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPDSecureBackupProxy_Protocol_h
#define CDPDSecureBackupProxy_Protocol_h
@import Foundation;

@protocol CDPDSecureBackupProxy <NSObject>

@property (retain, nonatomic) CDPContext *cdpContext;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)accountInfoWithInfo:(id)info error:(id *)error;
- (BOOL)disableWithInfo:(id)info error:(id *)error;
- (BOOL)enableWithInfo:(id)info error:(id *)error;
- (id)recoverWithInfo:(id)info error:(id *)error;
- (BOOL)isRecoveryKeySet:(id *)set;
- (BOOL)verifyRecoveryKey:(id)key error:(id *)error;
- (BOOL)setRecoveryKeyInSOS:(id)sos error:(id *)error;
- (BOOL)removeRecoveryKeyFromSOS:(id *)sos;
- (void)cacheRecoveryKey:(id)key completionBlock:(id /* block */)block;
- (void)uncacheAllSecrets;
@end

#endif /* CDPDSecureBackupProxy_Protocol_h */