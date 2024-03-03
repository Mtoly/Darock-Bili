//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPCompanionLinkXPCServerInterface_Protocol_h
#define RPCompanionLinkXPCServerInterface_Protocol_h
@import Foundation;

@protocol RPCompanionLinkXPCServerInterface 
/* instance methods */
- (void)companionLinkTryPassword:(id)password;
- (void)companionLinkRegisterEventID:(id)id options:(id)options completion:(id /* block */)completion;
- (void)companionLinkDeregisterEventID:(id)id completion:(id /* block */)completion;
- (void)companionLinkSendEventID:(id)id event:(id)event destinationID:(id)id options:(id)options completion:(id /* block */)completion;
- (void)companionLinkActivateAssertion:(id)assertion completion:(id /* block */)completion;
- (void)companionLinkInvalidateAssertion:(id)assertion;
- (void)companionLinkActivateClient:(id)client completion:(id /* block */)completion;
- (void)companionLinkUpdateClient:(id)client;
- (void)companionLinkTriggerEnhancedDiscovery:(id)discovery useCase:(unsigned int)case completion:(id /* block */)completion;
- (void)companionLinkCreateDeviceToEndpointMappingForDeviceID:(id)id completion:(id /* block */)completion;
- (void)companionLinkSetLocalDeviceAsContextCollector:(id /* block */)collector;
- (void)companionLinkRemoveLocalDeviceAsContextCollector:(id /* block */)collector;
- (void)companionLinkRegisterProfileID:(id)id completion:(id /* block */)completion;
- (void)companionLinkDeregisterProfileID:(id)id completion:(id /* block */)completion;
- (void)companionLinkRegisterRequestID:(id)id options:(id)options completion:(id /* block */)completion;
- (void)companionLinkDeregisterRequestID:(id)id completion:(id /* block */)completion;
- (void)companionLinkSendRequestID:(id)id request:(id)request destinationID:(id)id options:(id)options responseHandler:(id /* block */)handler;
- (void)xpcDiscoveryActivate:(id)activate completion:(id /* block */)completion;
- (void)xpcDiscoveryUpdate:(id)update;
- (void)xpcServerActivate:(id)activate completion:(id /* block */)completion;
- (void)xpcServerUpdate:(id)update;
- (void)xpcSessionActivate:(id)activate completion:(id /* block */)completion;
@end

#endif /* RPCompanionLinkXPCServerInterface_Protocol_h */