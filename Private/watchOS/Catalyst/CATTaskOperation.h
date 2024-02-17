//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATTaskOperation_h
#define CATTaskOperation_h
@import Foundation;

#include "CATOperation.h"
#include "CATTaskOperationNotificationDelegate-Protocol.h"
#include "CATTaskRequest.h"

@class NSUUID;

@interface CATTaskOperation : CATOperation

@property (copy, nonatomic) NSUUID *remoteUUID;
@property (readonly, nonatomic) CATTaskRequest *request;
@property (weak, nonatomic) NSObject<CATTaskOperationNotificationDelegate> *notificationDelegate;

/* class methods */
+ (id)new;
+ (BOOL)validateRequest:(id)request error:(id *)error;
+ (BOOL)isCancelable;

/* instance methods */
- (void)cat_addAssertion:(id)assertion;
- (id)cat_assertions;
- (id)init;
- (id)initWithRequest:(id)request;
- (void)main;
- (void)processNotificationWithName:(id)name userInfo:(id)info;
- (BOOL)canSendNotificationWithName:(id)name userInfo:(id)info;
- (void)postNotificationWithName:(id)name userInfo:(id)info;
- (void)processMessage:(id)message;
@end

#endif /* CATTaskOperation_h */