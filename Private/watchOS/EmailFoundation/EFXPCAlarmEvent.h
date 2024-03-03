//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFXPCAlarmEvent_h
#define EFXPCAlarmEvent_h
@import Foundation;

@class NSDate, NSString;

@interface EFXPCAlarmEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) BOOL isUserVisible;

/* class methods */
+ (id)_eventWithName:(id)name;

/* instance methods */
- (id)initWithName:(id)name fireDate:(id)date isUserVisible:(BOOL)visible;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* EFXPCAlarmEvent_h */