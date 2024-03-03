//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSSnapshotScheduleItem_h
#define CSLSSnapshotScheduleItem_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface CSLSSnapshotScheduleItem : NSObject<BSDescriptionProviding, NSSecureCoding> {
  /* instance variables */
  BOOL _systemScheduled;
  BOOL _returnToPrimaryUI;
  BOOL _scheduleFreebee;
  BOOL _persist;
  unsigned long long _reason;
}

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)scheduleItemWithDate:(id)date userInfo:(id)info;
+ (id)scheduleItemWithDate:(id)date uuid:(id)uuid userInfo:(id)info;
+ (id)scheduleSystemItemWithDate:(id)date reason:(unsigned long long)reason;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_boolFromDictionary:(id)dictionary forKey:(id)key;
+ (unsigned long long)_reasonFromDictionary:(id)dictionary forKey:(id)key;
+ (id)fromDictionary:(id)dictionary;
+ (id)coalesce:(id)coalesce;

/* instance methods */
- (id)initWithDate:(id)date uuid:(id)uuid userInfo:(id)info;
- (BOOL)isEqualToScheduleItem:(id)item;
- (void)setSystemScheduled:(BOOL)scheduled;
- (BOOL)systemScheduled;
- (void)setReturnToPrimaryUI:(BOOL)ui;
- (BOOL)returnToPrimaryUI;
- (void)setReason:(unsigned long long)reason;
- (unsigned long long)reason;
- (void)setScheduleFreebee:(BOOL)freebee;
- (BOOL)scheduleFreebee;
- (void)setPersist:(BOOL)persist;
- (BOOL)persist;
- (id)rescheduleWithDate:(id)date;
- (void)amendWithHigherPriorityFlagsAndReason:(id)reason;
- (id)_plistClasses;
- (id)toDictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLSSnapshotScheduleItem_h */