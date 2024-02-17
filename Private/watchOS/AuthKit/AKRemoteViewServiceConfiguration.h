//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKRemoteViewServiceConfiguration_h
#define AKRemoteViewServiceConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AKRemoteViewServiceConfiguration : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *hostBundleID;
@property (copy, nonatomic) NSString *hostSceneID;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)configurationForHostWithBundleID:(id)id sceneID:(id)id;
+ (id)defaultConfiguration;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AKRemoteViewServiceConfiguration_h */