//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXExtensionContextHosting_Protocol_h
#define EXExtensionContextHosting_Protocol_h
@import Foundation;

@protocol EXExtensionContextHosting <NSObject>
@optional
/* instance methods */
- (void)_completeRequestReturningItems:(id)items forExtensionContextWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)_cancelRequestWithError:(id)error forExtensionContextWithUUID:(id)uuid completion:(id /* block */)completion;
- (void)_openURL:(id)url completion:(id /* block */)completion;
- (void)_loadItemForPayload:(id)payload contextIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_loadPreviewImageForPayload:(id)payload contextIdentifier:(id)identifier completionHandler:(id /* block */)handler;
@end

#endif /* EXExtensionContextHosting_Protocol_h */