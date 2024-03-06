//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 243.0.0.0.0
//
#ifndef FLHSA2PasswordResetNotification_h
#define FLHSA2PasswordResetNotification_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *approveButtonTitle;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) NSString *appleID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithFollowUpItemUserInfo:(id)info;
- (id)followUpItemUserInfo;
@end

#endif /* FLHSA2PasswordResetNotification_h */