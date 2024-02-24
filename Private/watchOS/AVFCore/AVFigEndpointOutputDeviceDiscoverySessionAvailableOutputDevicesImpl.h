//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl_h
#define AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl_h
@import Foundation;

#include "AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl-Protocol.h"

@class NSArray, NSString;

@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject<AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
  /* instance variables */
  NSArray *_figEndpoints;
}

@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAvailableFigEndpoints:(id)endpoints;
- (void)dealloc;
@end

#endif /* AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl_h */