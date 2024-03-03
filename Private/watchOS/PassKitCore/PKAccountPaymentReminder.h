//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountPaymentReminder_h
#define PKAccountPaymentReminder_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKRecordObject-Protocol.h"

@class NSDate, NSDecimalNumber, NSString;

@interface PKAccountPaymentReminder : NSObject<NSSecureCoding, PKRecordObject>

@property (copy, nonatomic) NSDecimalNumber *minimumDue;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithRecord:(id)record;
- (void)encodeWithRecord:(id)record;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKAccountPaymentReminder_h */