//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDInstallApps_h
#define ASDInstallApps_h
@import Foundation;

#include "ASDServiceProvider-Protocol.h"

@class NSString;

@interface ASDInstallApps : NSObject<ASDServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)installApp:(id)app onPairedDevice:(id)device withCompletionHandler:(id /* block */)handler;
+ (void)installApp:(id)app withCompletionHandler:(id /* block */)handler;
+ (void)installApps:(id)apps onPairedDevice:(id)device withCompletionHandler:(id /* block */)handler;
+ (void)installApps:(id)apps withCompletionHandler:(id /* block */)handler;
+ (id)interface;
@end

#endif /* ASDInstallApps_h */