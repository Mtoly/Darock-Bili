//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTInstrumentServerSimulatorPrivilege_Protocol_h
#define DTInstrumentServerSimulatorPrivilege_Protocol_h
@import Foundation;

@protocol DTInstrumentServerSimulatorPrivilege <DTXAllowedRPC>
/* instance methods */
- (id)_blessSimulatorHub:(int)hub;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)port;
@end

#endif /* DTInstrumentServerSimulatorPrivilege_Protocol_h */