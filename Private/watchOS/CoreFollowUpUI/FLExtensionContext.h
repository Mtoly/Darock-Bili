//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 243.0.0.0.0
//
#ifndef FLExtensionContext_h
#define FLExtensionContext_h
@import Foundation;

#include "NSExtensionContext.h"
#include "FLExtensionRemoteInterface-Protocol.h"

@class NSString;

@interface FLExtensionContext : NSExtensionContext<FLExtensionRemoteInterface> {
  /* instance variables */
  id _shadowPrincipalObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

/* instance methods */
- (id)extensionLogicProvider;
- (id)_shadowPrincipalObject;
- (id)hostContextWithErrorHandler:(id /* block */)handler;
- (id)syncHostContextWithErrorHandler:(id /* block */)handler;
- (void)processFollowUpItem:(id)item selectedAction:(id)action completion:(id /* block */)completion;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)handler;
@end

#endif /* FLExtensionContext_h */