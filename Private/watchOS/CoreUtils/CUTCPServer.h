//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUTCPServer_h
#define CUTCPServer_h
@import Foundation;

#include "CUBonjourAdvertiser.h"
#include "CUNetLinkManager.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPServer : NSObject {
  /* instance variables */
  NSMutableSet *_connections;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  NSObject<OS_dispatch_source> *_listenerSourceV4;
  NSObject<OS_dispatch_source> *_listenerSourceV6;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
}

@property (retain, nonatomic) CUBonjourAdvertiser *bonjourAdvertiser;
@property (copy, nonatomic) id /* block */ connectionAcceptHandler;
@property (copy, nonatomic) id /* block */ connectionStartedHandler;
@property (copy, nonatomic) id /* block */ connectionEndedHandler;
@property (copy, nonatomic) id /* block */ connectionPrepareHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8] } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16] unsigned short x1[8] unsigned int x2[4] } x0; } x4; unsigned int x5; } x2; } interfaceAddress;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int maxConnectionCount;
@property (retain, nonatomic) CUNetLinkManager *netLinkManager;
@property (nonatomic) int tcpListenPort;
@property (nonatomic) int tcpListeningPort;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)activateWithCompletion:(id /* block */)completion;
- (BOOL)activateDirectAndReturnError:(id *)error;
- (void)invalidate;
- (void)_invalidated;
- (void)_handleConnectionAccept:(int)accept;
- (void)_handleConnectionInvalidated:(id)invalidated addr:(const union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8] } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16] unsigned short x1[8] unsigned int x2[4] } x0; } x4; unsigned int x5; } x2; } *)addr;
@end

#endif /* CUTCPServer_h */