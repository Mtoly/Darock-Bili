//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationProviderManagerDataSource_Protocol_h
#define TUConversationProviderManagerDataSource_Protocol_h
@import Foundation;

@protocol TUConversationProviderManagerDataSource <NSObject>
/* instance methods */
- (void)registerForCallbacksForProvider:(id)provider completionHandler:(id /* block */)handler;
- (void)registerConversationProvider:(id)provider completionHandler:(id /* block */)handler;
- (id)conversationProviderForIdentifier:(id)identifier;
- (void)conversationProviderForIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)generatePseudonymHandleForConversationProvider:(id)provider expiryDuration:(double)duration URI:(id)uri completionHandler:(id /* block */)handler;
- (void)renewPseudonymHandle:(id)handle forConversationProvider:(id)provider expirationDate:(id)date completionHandler:(id /* block */)handler;
- (void)revokePseudonymHandle:(id)handle forConversationProvider:(id)provider completionHandler:(id /* block */)handler;
- (void)doesHandle:(id)handle correspondToConversationProvider:(id)provider completionHandler:(id /* block */)handler;
- (void)invalidate;
@end

#endif /* TUConversationProviderManagerDataSource_Protocol_h */