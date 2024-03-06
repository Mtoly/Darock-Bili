//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDAppLibrary_h
#define ASDAppLibrary_h
@import Foundation;

#include "ASDNotificationCenter.h"
#include "ASDServiceBroker.h"
#include "ASDServiceProvider-Protocol.h"

@class NSString;

@interface ASDAppLibrary : NSObject<ASDServiceProvider> {
  /* instance variables */
  ASDServiceBroker *_serviceBroker;
  ASDNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (long long)launchApp:(id)app;
+ (long long)launchApp:(id)app onPairedDevice:(id)device;
+ (void)launchApp:(id)app withResultHandler:(id /* block */)handler;
+ (void)launchApp:(id)app onPairedDevice:(id)device withResultHandler:(id /* block */)handler;
+ (long long)launchMessagesExtensionForApp:(id)app;
+ (void)launchMessagesExtensionForApp:(id)app withResultHandler:(id /* block */)handler;
+ (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)ids withResultHandler:(id /* block */)handler;
+ (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)ids withResultHandler:(id /* block */)handler;
+ (unsigned char)openableStatusForExecutableAtPath:(id)path;
+ (void)uninstallApp:(id)app withResultHandler:(id /* block */)handler;
+ (void)uninstallApp:(id)app requestUserConfirmation:(BOOL)confirmation withResultHandler:(id /* block */)handler;
+ (id)interface;

/* instance methods */
- (id)init;
@end

#endif /* ASDAppLibrary_h */