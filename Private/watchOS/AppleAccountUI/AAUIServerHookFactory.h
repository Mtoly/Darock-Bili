//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIServerHookFactory_h
#define AAUIServerHookFactory_h
@import Foundation;

@interface AAUIServerHookFactory : NSObject
/* instance methods */
- (id)hooksFor:(unsigned long long)for accountManager:(id)manager;
- (id)_defaultHooks:(id)hooks;
- (id)_passwordAndSecurityHooksForAccount:(id)account accountManager:(id)manager;
- (id)_iCloudDataRecoveryServiceHooksFor:(id)for accountManager:(id)manager;
@end

#endif /* AAUIServerHookFactory_h */