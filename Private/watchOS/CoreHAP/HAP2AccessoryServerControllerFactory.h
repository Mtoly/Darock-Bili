//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerControllerFactory_h
#define HAP2AccessoryServerControllerFactory_h
@import Foundation;

#include "HAP2LoggingObject.h"
#include "HAP2AccessoryServerControllerFactory-Protocol.h"

@class NSString;

@interface HAP2AccessoryServerControllerFactory : HAP2LoggingObject<HAP2AccessoryServerControllerFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)createControllerWithEncoding:(id)encoding secureTransport:(id)transport operationQueue:(id)queue;
@end

#endif /* HAP2AccessoryServerControllerFactory_h */