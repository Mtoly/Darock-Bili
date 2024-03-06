//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryConnectionProxy_Protocol_h
#define WBSHistoryConnectionProxy_Protocol_h
@import Foundation;

#include "WBSHistoryConnectionProxy-Protocol.h"
#include "WBSHistoryService.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@protocol WBSHistoryConnectionProxy <WBSHistoryConnectionProtocol>
/* instance methods */
- (id)queryMemoryFootprintWithError:(id *)error;
@end

#endif /* WBSHistoryConnectionProxy_Protocol_h */