//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _TtC20PegasusConfiguration14ConfigInternal_h
#define _TtC20PegasusConfiguration14ConfigInternal_h
@import Foundation;

#include "_TtP20PegasusConfiguration6Config_-Protocol.h"

@class NSString;

@interface PegasusConfiguration.ConfigInternal : NSObject<PegasusConfiguration.Config> { // (Swift)
  /* instance variables */
   data;
   userDefaults;
}

@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) BOOL isEnabled;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) NSString *searchURLString;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)findConfigForUserAgent:(id)agent;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)valueForKey:(id)key shouldConsiderOverrides:(BOOL)overrides;
- (id)valueForKey:(id)key ofType:(Class)type;
- (id)valueForKey:(id)key;
- (id)init;
@end

#endif /* _TtC20PegasusConfiguration14ConfigInternal_h */