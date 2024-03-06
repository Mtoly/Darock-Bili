//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKStoredConfigurationManager_h
#define WLKStoredConfigurationManager_h
@import Foundation;

#include "WLKStoredConfiguration.h"

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_invalidateWithReason:(id)reason;
- (void)_updateConfiguration:(id)configuration;
- (void)_handleLibraryChange:(id)change;
- (void)_handleAccountChange:(id)change;
- (void)_setStoredConfiguration:(id)configuration;
@end

#endif /* WLKStoredConfigurationManager_h */