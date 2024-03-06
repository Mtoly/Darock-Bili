//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRCourierAgent_h
#define XRCourierAgent_h
@import Foundation;

#include "XRMobileAgent.h"
#include "XRMinorFrameAgent-Protocol.h"
#include "XRMobileAgentVisitor-Protocol.h"

@class NSDictionary, NSString;
@protocol XRMobileAgent<XRMobileAgentOwner;

@interface XRCourierAgent : XRMobileAgent<XRMobileAgentVisitor, XRMinorFrameAgent>

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDictionary *details;
@property (retain, nonatomic) NSDictionary *reply;
@property (retain, nonatomic) XRMobileAgent<XRMobileAgentOwner> *roomOwner;
@property (nonatomic) atomic BOOL * yieldNow;

/* class methods */
+ (id)sendCourierToVisitWaitingRoom:(id)room message:(id)message details:(id)details replyStop:(id)stop replyTicket:(id)ticket;
+ (id)sendCourierToVisitWaitingRoom:(id)room message:(id)message details:(id)details;

/* instance methods */
- (id)initWithMessage:(id)message details:(id)details;
- (void)sendToWaitingRoom:(id)room replyStop:(id)stop replyTicket:(id)ticket;
- (void)sendToWaitingRoom:(id)room;
- (id)init;
- (id)agentDiagnosticsName;
- (void)executeStopOnItinerary:(id)itinerary;
@end

#endif /* XRCourierAgent_h */