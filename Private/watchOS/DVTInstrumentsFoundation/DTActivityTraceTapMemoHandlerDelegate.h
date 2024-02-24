//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTActivityTraceTapMemoHandlerDelegate_h
#define DTActivityTraceTapMemoHandlerDelegate_h
@import Foundation;

#include "DTTapMemoHandlerDelegate-Protocol.h"

@class NSString;

@interface DTActivityTraceTapMemoHandlerDelegate : NSObject<DTTapMemoHandlerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)sendDataMemo:(id)memo toBulkReceiver:(id)receiver;
- (void)sendDataMemo:(id)memo toClientUsingConfig:(id)config;
- (void)sendHeartbeatMemo:(id)memo toClientUsingConfig:(id)config;
- (id)peekAtMemo:(id)memo;
@end

#endif /* DTActivityTraceTapMemoHandlerDelegate_h */