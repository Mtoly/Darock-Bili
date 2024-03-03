//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSTipStatus_h
#define TPSTipStatus_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface TPSTipStatus : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, @dynamic, nonatomic) NSArray *hintDisplayedDates;
@property (copy, @dynamic, nonatomic) NSArray *desiredOutcomePerformedDates;
@property (copy, @dynamic, nonatomic) NSArray *hintNotDisplayedDueToFrequencyControlDates;
@property (copy, @dynamic, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL overrideHoldout;
@property (nonatomic) BOOL overrideFrequencyControl;
@property (readonly, @dynamic, nonatomic) unsigned long long usageFlags;
@property (nonatomic) long long hintIneligibleReason;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) BOOL expired;
@property (nonatomic) BOOL preconditionMatched;
@property (copy, nonatomic) NSDate *savedDate;
@property (copy, nonatomic) NSString *variantIdentifier;
@property (copy, nonatomic) NSString *correlationIdentifier;
@property (copy, nonatomic) NSString *clonedFromIdentifier;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *lastUsedVersion;
@property (copy, nonatomic) NSDate *dateForTriggerRestartTracking;
@property (copy, nonatomic) NSDate *hintEligibleDate;
@property (copy, nonatomic) NSDate *hintWouldHaveBeenDisplayedDate;
@property (copy, nonatomic) NSDate *hintDismissalDate;
@property (copy, nonatomic) NSDate *contentViewedDate;
@property (copy, nonatomic) NSString *lastDisplayContext;
@property (readonly, nonatomic) BOOL contentViewed;
@property (readonly, nonatomic) BOOL desiredOutcomePerformed;
@property (readonly, nonatomic) BOOL hintDisplayed;
@property (readonly, nonatomic) BOOL hintDisplayedOnCloudDevices;
@property (readonly, nonatomic) BOOL hintDisplayedOnAnyDevice;
@property (readonly, nonatomic) BOOL hintDismissed;
@property (readonly, nonatomic) BOOL hintInelgibile;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_userInfoClasses;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)removeHintEligibleDateStatus;
- (void)addHintDisplayedDate:(id)date;
- (void)addHintNotDisplayedDueToFrequencyControlDate:(id)date;
- (void)addDesiredOutcomePerformedDate:(id)date;
- (BOOL)isUserKnew;
- (BOOL)reenrollIfAllowed;
- (void)updateUserInfoValue:(id)value forKey:(id)key;
- (void)removeUserInfo;
- (BOOL)isContentViewed;
- (BOOL)isDesiredOutcomePerformed;
- (BOOL)isHintDisplayed;
- (BOOL)isHintDisplayedOnCloudDevices;
- (BOOL)isHintDisplayedOnAnyDevice;
- (BOOL)isHintDismissed;
- (BOOL)isHintInelgibile;
- (long long)compare:(id)compare;
- (id)debugDescription;
- (BOOL)isExpired;
- (BOOL)isPreconditionMatched;
@end

#endif /* TPSTipStatus_h */