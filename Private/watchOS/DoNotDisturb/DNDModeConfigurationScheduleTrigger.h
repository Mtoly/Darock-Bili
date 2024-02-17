//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDModeConfigurationScheduleTrigger_h
#define DNDModeConfigurationScheduleTrigger_h
@import Foundation;

#include "DNDModeConfigurationTrigger.h"
#include "DNDScheduleTimePeriod.h"

@class NSDate;

@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
  /* instance variables */
  NSDate *_creationdate;
}

@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod;
@property (readonly, copy, nonatomic) NSDate *creationDate;

/* class methods */
+ (id)defaultScheduleTrigger;
+ (id)triggerWithClientTrigger:(id)trigger creationDate:(id)date;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimePeriod:(id)period enabledSetting:(unsigned long long)setting;
- (id)initWithTimePeriod:(id)period creationDate:(id)date enabledSetting:(unsigned long long)setting;
- (BOOL)isEnabled;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DNDModeConfigurationScheduleTrigger_h */