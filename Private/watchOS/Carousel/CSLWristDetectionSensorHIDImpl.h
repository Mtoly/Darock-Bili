//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWristDetectionSensorHIDImpl_h
#define CSLWristDetectionSensorHIDImpl_h
@import Foundation;

#include "CSLWristDetectionSensorImpl-Protocol.h"
#include "CSLWristDetectionSensorImplDelegate-Protocol.h"

@class NSString;

@interface CSLWristDetectionSensorHIDImpl : NSObject<CSLWristDetectionSensorImpl>

@property (weak, nonatomic) NSObject<CSLWristDetectionSensorImplDelegate> *delegate;
@property (readonly, nonatomic) long long onWristState;
@property (readonly, nonatomic) long long confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)startWristDetectionWithRequest:(id)request;
- (void)_handleOnWristNotification:(id)notification;
- (void)_updateStateWithHIDEvent:(struct __IOHIDEvent *)hidevent;
- (void)_didBeginOnWristDetectionWithRequest:(id)request;
@end

#endif /* CSLWristDetectionSensorHIDImpl_h */