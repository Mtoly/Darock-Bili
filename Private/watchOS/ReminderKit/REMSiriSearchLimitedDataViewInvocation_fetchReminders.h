//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMSiriSearchLimitedDataViewInvocation_fetchReminders_h
#define REMSiriSearchLimitedDataViewInvocation_fetchReminders_h
@import Foundation;

#include "REMStoreInvocation.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation<NSSecureCoding>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *dueAfter;
@property (readonly, nonatomic) NSDate *dueBefore;
@property (readonly, nonatomic) NSNumber *completed;
@property (readonly, nonatomic) NSNumber *hasLocation;
@property (readonly, nonatomic) NSString *location;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title dueAfter:(id)after dueBefore:(id)before isCompleted:(id)completed hasLocation:(id)location location:(id)location;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REMSiriSearchLimitedDataViewInvocation_fetchReminders_h */