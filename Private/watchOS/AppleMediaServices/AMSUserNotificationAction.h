//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSUserNotificationAction_h
#define AMSUserNotificationAction_h
@import Foundation;

#include "AMSMetricsEvent.h"

@class NSDictionary, NSString, NSURL, NSURLRequest;

@interface AMSUserNotificationAction : NSObject

@property (readonly, nonatomic) unsigned long long un_ActionOptions;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *defaultURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) long long style;

/* instance methods */
- (id)init;
- (id)initWithTitle:(id)title;
- (id)initWithTitle:(id)title style:(long long)style;
- (id)initWithUserInfoAction:(id)action;
- (id)generateUserInfoAction;
@end

#endif /* AMSUserNotificationAction_h */