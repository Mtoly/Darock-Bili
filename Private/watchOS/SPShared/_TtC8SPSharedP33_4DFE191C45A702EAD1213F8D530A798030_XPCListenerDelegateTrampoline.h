//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef _TtC8SPSharedP33_4DFE191C45A702EAD1213F8D530A798030_XPCListenerDelegateTrampoline_h
#define _TtC8SPSharedP33_4DFE191C45A702EAD1213F8D530A798030_XPCListenerDelegateTrampoline_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@interface SPShared.(_XPCListenerDelegateTrampoline in _4DFE191C45A702EAD1213F8D530A7980) : NSObject<NSXPCListenerDelegate> { // (Swift)
  /* instance variables */
   sessionManager;
}

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (id)init;
@end

#endif /* _TtC8SPSharedP33_4DFE191C45A702EAD1213F8D530A798030_XPCListenerDelegateTrampoline_h */