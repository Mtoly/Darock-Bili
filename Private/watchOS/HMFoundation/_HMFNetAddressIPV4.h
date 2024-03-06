//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef _HMFNetAddressIPV4_h
#define _HMFNetAddressIPV4_h
@import Foundation;

#include "HMFNetAddressInternal.h"

@interface _HMFNetAddressIPV4 : HMFNetAddressInternal {
  /* instance variables */
  struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char x[8] sin_zero; } _in;
}

/* instance methods */
- (id)init;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } *)address;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)addressFamily;
- (id)addressString;
- (id)dataUsingEncoding:(unsigned long long)encoding;
@end

#endif /* _HMFNetAddressIPV4_h */