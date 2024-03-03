//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSPushPayload_h
#define AMSPushPayload_h
@import Foundation;

@class ACAccount, ACAccountType, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface AMSPushPayload : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) ACAccountType *accountType;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long alertType;
@property (readonly, nonatomic) NSDictionary *aps;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL isAccountTypeActive;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSString *URLString;

/* class methods */
+ (id)actionTypeFromPayload:(id)payload;

/* instance methods */
- (id)initWithPayload:(id)payload;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* AMSPushPayload_h */