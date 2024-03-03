//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPFinderStateInfo_h
#define SPFinderStateInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSSet;

@interface SPFinderStateInfo : NSObject<NSSecureCoding>

@property (nonatomic) BOOL state;
@property (nonatomic) BOOL optInScreenOffScan;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSDate *lastPublishDate;
@property (copy, nonatomic) NSDate *lastScheduledPublishActivityDate;
@property (nonatomic) long long activeCache;
@property (retain, nonatomic) NSArray *disabledReasonsArray;
@property (readonly, copy, nonatomic) NSSet *disabledReasons;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)canPublishAnonymously;

/* instance methods */
- (id)initWithState:(BOOL)state optInScreenOffScan:(BOOL)scan lastUpdated:(id)updated lastPublishDate:(id)date lastScheduledPublishActivityDate:(id)date activeCache:(long long)cache disabledReasons:(id)reasons;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SPFinderStateInfo_h */