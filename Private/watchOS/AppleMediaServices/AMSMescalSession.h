//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMescalSession_h
#define AMSMescalSession_h
@import Foundation;

#include "AMSMescalFairPlay.h"
#include "AMSURLSession.h"

@class NSData;
@protocol OS_dispatch_queue;

@interface AMSMescalSession : NSObject {
  /* instance variables */
  NSData *_certificateData;
  AMSURLSession *_urlSession;
  AMSMescalFairPlay *_fairPlayContext;
  long long _mescalType;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* class methods */
+ (id)defaultSession;
+ (id)primeSession;
+ (id)sessionWithType:(long long)type;

/* instance methods */
- (id)initWithType:(long long)type;
- (id)primeSignatureForData:(id)data bag:(id)bag error:(id *)error;
- (id)signData:(id)data bag:(id)bag error:(id *)error;
- (BOOL)verifyData:(id)data withSignature:(id)signature bag:(id)bag error:(id *)error;
- (BOOL)verifyPrimeSignature:(id)signature error:(id *)error;
- (BOOL)_cacheCertData:(id)data expiration:(double)expiration;
- (id)_cachedCertData;
- (id)_cachedCertPath;
- (id)_establishContextWithBag:(id)bag error:(id *)error;
- (id)_loadCertificateDataWithBag:(id)bag error:(id *)error;
- (id)_postExchangeData:(id)data bag:(id)bag error:(id *)error;
- (void)_resetSession;
- (BOOL)_shouldRetryFairPlayForError:(id)error;
- (BOOL)_verifyEntitlements;
@end

#endif /* AMSMescalSession_h */