//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INCExtensionTransaction_h
#define INCExtensionTransaction_h
@import Foundation;

#include "INCExtensionRequest.h"
#include "INCExtensionTransactionState.h"

@class INIntent, INIntentResponse, NSMutableDictionary, NSString, NSUserActivity;
@protocol OS_dispatch_queue;

@interface INCExtensionTransaction : NSObject {
  /* instance variables */
  NSMutableDictionary *_userActivitiesByIdentifier;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) INIntent *currentIntent;
@property (retain, nonatomic) INIntentResponse *currentIntentResponse;
@property (readonly, nonatomic) BOOL donateInteraction;
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) INCExtensionRequest *request;
@property (readonly, copy, nonatomic) NSUserActivity *currentUserActivity;
@property (retain, nonatomic) INCExtensionTransactionState *state;
@property (nonatomic) BOOL shouldResetRequestAfterHandle;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)description;
- (id)initWithIntent:(id)intent donateInteraction:(BOOL)interaction groupIdentifier:(id)identifier;
- (id)userActivityWithIdentifier:(id)identifier;
- (void)_setCurrentIntent:(id)intent;
- (void)_updateCurrentUserActivityForType:(long long)type intent:(id)intent intentResponse:(id)response;
- (void)_addUserActivities:(id)activities;
- (void)_setCurrentIntentResponse:(id)response;
@end

#endif /* INCExtensionTransaction_h */