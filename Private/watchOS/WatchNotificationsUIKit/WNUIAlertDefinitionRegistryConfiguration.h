//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertDefinitionRegistryConfiguration_h
#define WNUIAlertDefinitionRegistryConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class FBSApplicationLibrary, NSArray;

@interface WNUIAlertDefinitionRegistryConfiguration : NSObject<NSCopying>

@property (copy, nonatomic) NSArray *definitionsDirectories;
@property (retain, nonatomic) FBSApplicationLibrary *applicationLibrary;
@property (readonly, nonatomic) BOOL valid;

/* instance methods */
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
@end

#endif /* WNUIAlertDefinitionRegistryConfiguration_h */