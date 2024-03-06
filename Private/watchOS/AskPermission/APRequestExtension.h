//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.2.2.0.0
//
#ifndef APRequestExtension_h
#define APRequestExtension_h
@import Foundation;

#include "NSExtensionRequestHandling-Protocol.h"

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject<NSExtensionRequestHandling>

@property (retain, nonatomic) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)checkDownloadQueue;
- (void)requestUpdatedWithResult:(id)result completion:(id /* block */)completion;
- (void)_finish;
- (void)beginRequestWithExtensionContext:(id)context;
@end

#endif /* APRequestExtension_h */