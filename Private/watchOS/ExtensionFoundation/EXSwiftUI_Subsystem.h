//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXSwiftUI_Subsystem_h
#define EXSwiftUI_Subsystem_h
@import Foundation;

#include "PKModularService-Protocol.h"

@class NSString;

@interface EXSwiftUI_Subsystem : NSObject<PKModularService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)initialized;
+ (id)sharedInstance;
+ (id)initForPlugInKit;

/* instance methods */
- (id)init;
- (void)beginUsing:(id)using withBundle:(id)bundle;
@end

#endif /* EXSwiftUI_Subsystem_h */