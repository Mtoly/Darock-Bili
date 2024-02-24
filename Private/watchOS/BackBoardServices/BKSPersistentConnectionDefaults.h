//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSPersistentConnectionDefaults_h
#define BKSPersistentConnectionDefaults_h
@import Foundation;

#include "BSAbstractDefaultDomain.h"

@class NSString;

@interface BKSPersistentConnectionDefaults : BSAbstractDefaultDomain

@property (@dynamic, nonatomic) int forceDemoMaxHBI;
@property (retain, @dynamic, nonatomic) NSString *wifiInterfaceName;

/* instance methods */
- (id)init;
- (void)_bindAndRegisterDefaults;
@end

#endif /* BKSPersistentConnectionDefaults_h */