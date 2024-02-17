//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTIDSDevice_h
#define BLTIDSDevice_h
@import Foundation;

#include "BLTAbstractIDSDevice-Protocol.h"
#include "BSDescriptionProviding-Protocol.h"
#include "CSLSConnectionStatusObserver-Protocol.h"

@class IDSDevice, NSString;

@interface BLTIDSDevice : NSObject<CSLSConnectionStatusObserver, BSDescriptionProviding, BLTAbstractIDSDevice> {
  /* instance variables */
  IDSDevice *_device;
}

@property BOOL cloudReachable;
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCloudReachable;

/* instance methods */
- (id)initWithIDSDevice:(id)idsdevice;
- (void)dealloc;
- (void)connectionStatusDidChange:(unsigned long long)change;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* BLTIDSDevice_h */