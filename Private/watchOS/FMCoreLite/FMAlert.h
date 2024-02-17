//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef FMAlert_h
#define FMAlert_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface FMAlert : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSUUID *alertId;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *msgTitle;
@property (retain, nonatomic) NSString *msgText;
@property (retain, nonatomic) NSString *defaultButtonTitle;
@property (retain, nonatomic) NSString *alternateButtonTitle;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL showMsgInLockScreen;
@property (nonatomic) BOOL dismissMsgOnUnlock;
@property (nonatomic) BOOL dismissMsgOnLock;
@property (retain, nonatomic) NSDictionary *additionalSettings;
@property (copy, nonatomic) id /* block */ defaultButtonAction;
@property (copy, nonatomic) id /* block */ alternateButtonAction;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* FMAlert_h */