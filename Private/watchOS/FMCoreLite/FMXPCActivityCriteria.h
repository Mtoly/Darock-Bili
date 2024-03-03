//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMXPCActivityCriteria_h
#define FMXPCActivityCriteria_h
@import Foundation;

@interface FMXPCActivityCriteria : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) BOOL repeating;
@property (nonatomic) long long delay;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) long long interval;
@property (nonatomic) unsigned long long options;

/* class methods */
+ (unsigned long long)_optionsFromXPCObject:(id)xpcobject;

/* instance methods */
- (id)initWithPriority:(long long)priority repeating:(BOOL)repeating delay:(long long)delay gracePeriod:(long long)period interval:(long long)interval options:(unsigned long long)options;
- (id)initWithXPCObject:(id)xpcobject;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)xpcDictionary;
- (long long)_priorityFromString:(const char *)string;
@end

#endif /* FMXPCActivityCriteria_h */