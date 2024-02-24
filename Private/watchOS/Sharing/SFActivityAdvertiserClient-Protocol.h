//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFActivityAdvertiserClient_Protocol_h
#define SFActivityAdvertiserClient_Protocol_h
@import Foundation;

@protocol SFActivityAdvertiserClient <NSObject>
/* instance methods */
- (void)activityPayloadForAdvertisementPayload:(id)payload command:(id)command requestedByDevice:(id)device withCompletionHandler:(id /* block */)handler;
- (void)didSendPayloadForActivityIdentifier:(id)identifier toDevice:(id)device error:(id)error;
- (void)pairedDevicesChanged:(id)changed;
@end

#endif /* SFActivityAdvertiserClient_Protocol_h */