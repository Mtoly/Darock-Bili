//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCSecureDataChannel_h
#define VCSecureDataChannel_h
@import Foundation;

#include "VCSecureDataChannelDelegate-Protocol.h"
#include "VCTransport.h"

@interface VCSecureDataChannel : NSObject {
  /* instance variables */
  unsigned int _localCallID;
  unsigned int _remoteCallID;
  struct _tls_record_s * tlsRecord;
  VCTransport *_transport;
}

@property (nonatomic) NSObject<VCSecureDataChannelDelegate> *delegate;
@property (readonly, nonatomic) long long maxEncryptedDataSize;
@property (readonly, nonatomic) long long maxUnencryptedDataSize;
@property (nonatomic) unsigned long long maxUDPPayloadSize;

/* instance methods */
- (id)initWithLocalCallID:(unsigned int)id remoteCallID:(unsigned int)id isCaller:(BOOL)caller sharedSecret:(id)secret error:(id *)error;
- (void)dealloc;
- (int)setupWithSharedSecret:(id)secret isCaller:(BOOL)caller error:(id *)error;
- (int)sendData:(id)data messageType:(unsigned int)type encrypted:(BOOL)encrypted;
- (int)convertEncryptedData:(id)data toData:(id *)data encrypted:(BOOL)encrypted;
- (int)convertData:(id)data toEncryptedData:(id *)data encrypted:(BOOL)encrypted;
@end

#endif /* VCSecureDataChannel_h */