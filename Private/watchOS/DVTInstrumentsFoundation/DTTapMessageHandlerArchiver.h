//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTTapMessageHandlerArchiver_h
#define DTTapMessageHandlerArchiver_h
@import Foundation;

#include "DTTapMessageHandler.h"
#include "DTXAllowedRPC-Protocol.h"

@class DTXConnection, NSString;

@interface DTTapMessageHandlerArchiver : DTTapMessageHandler<DTXAllowedRPC> {
  /* instance variables */
  DTXConnection *_helperConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(id)config archiveURL:(id)url;
- (void)dealloc;
- (id)messageReceived:(id)received;
- (void)_helperConnectionError;
@end

#endif /* DTTapMessageHandlerArchiver_h */