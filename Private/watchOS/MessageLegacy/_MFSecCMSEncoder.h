//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef _MFSecCMSEncoder_h
#define _MFSecCMSEncoder_h
@import Foundation;

#include "MFBufferedDataConsumer.h"

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
  /* instance variables */
  int _SecCMSError;
  struct SecCmsEncoderStr * _encoder;
  struct SecCmsMessageStr * _message;
  NSMutableData *_singleShot;
}

@property (readonly, nonatomic) int lastSecCMSError;

/* instance methods */
- (id)initForSigningWithSender:(id)sender compositionSpecification:(id)specification error:(id *)error;
- (id)initForEncryptionWithCompositionSpecification:(id)specification error:(id *)error;
- (void)dealloc;
- (long long)appendData:(id)data;
- (void)done;
- (void)_appendBytes:(const void *)bytes length:(unsigned long long)length;
- (id)data;
@end

#endif /* _MFSecCMSEncoder_h */