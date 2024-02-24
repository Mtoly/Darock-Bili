//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryAccessSession_h
#define WBSHistoryAccessSession_h
@import Foundation;

#include "WBSHistoryAccessSessionProtocol-Protocol.h"
#include "WBSHistoryService.h"

@protocol OS_dispatch_queue;

@interface WBSHistoryAccessSession : NSObject<WBSHistoryAccessSessionProtocol> {
  /* instance variables */
  WBSHistoryService *_historyService;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)initWithHistoryService:(id)service;
- (void)getHistoryItemsVisitedAfterDate:(id)date beforeDate:(id)date completionHandler:(id /* block */)handler;
- (void)getHistoryVisitsAfterDate:(id)date beforeDate:(id)date completionHandler:(id /* block */)handler;
@end

#endif /* WBSHistoryAccessSession_h */