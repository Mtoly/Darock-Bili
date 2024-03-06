//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.2.1.0.0
//
#ifndef _SVDMutableDeviceUnit_h
#define _SVDMutableDeviceUnit_h
@import Foundation;

#include "SVDDeviceUnitMutating-Protocol.h"

@class NSString;

@interface _SVDMutableDeviceUnit : NSObject<SVDDeviceUnitMutating>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *roomName;
@property (nonatomic) long long proximity;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (nonatomic) BOOL isCommunalDevice;
@property (copy, nonatomic) NSString *homeKitAccessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* _SVDMutableDeviceUnit_h */