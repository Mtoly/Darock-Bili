//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSVoiceSubscription_h
#define VSVoiceSubscription_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "VSVoiceAsset.h"

@class NSString;

@interface VSVoiceSubscription : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *accessoryID;
@property (retain, nonatomic) VSVoiceAsset *voice;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithClient:(id)client accessory:(id)accessory voice:(id)voice;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* VSVoiceSubscription_h */