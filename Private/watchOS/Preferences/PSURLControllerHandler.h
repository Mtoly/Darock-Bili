//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSURLControllerHandler_h
#define PSURLControllerHandler_h
@import Foundation;

#include "PSURLControllerHandlerDelegate-Protocol.h"

@interface PSURLControllerHandler : NSObject

@property (weak, nonatomic) NSObject<PSURLControllerHandlerDelegate> *delegate;

/* instance methods */
- (void)handleURL:(id)url withCompletion:(id /* block */)completion;
@end

#endif /* PSURLControllerHandler_h */