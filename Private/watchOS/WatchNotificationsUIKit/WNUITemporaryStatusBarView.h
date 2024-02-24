//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUITemporaryStatusBarView_h
#define WNUITemporaryStatusBarView_h
@import Foundation;

#include "UIView.h"
#include "WNUIStatusBarView-Protocol.h"

@class NSString;

@interface WNUITemporaryStatusBarView : UIView<WNUIStatusBarView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)invalidate;
@end

#endif /* WNUITemporaryStatusBarView_h */