//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVOutputDeviceAuthorizedPeer_h
#define AVOutputDeviceAuthorizedPeer_h
@import Foundation;

#include "AVOutputDeviceAuthorizedPeerInternal.h"

@class NSData, NSString;

@interface AVOutputDeviceAuthorizedPeer : NSObject {
  /* instance variables */
  AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) BOOL hasAdministratorPrivileges;

/* instance methods */
- (id)init;
- (id)initWithID:(id)id publicKey:(id)key hasAdministratorPrivileges:(BOOL)privileges;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* AVOutputDeviceAuthorizedPeer_h */