//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFXPCInvocationProtocol_Protocol_h
#define SFXPCInvocationProtocol_Protocol_h
@import Foundation;

@protocol SFXPCInvocationProtocol 
/* instance methods */
- (void)invoke:(id)invoke parametersData:(id)data parametersAsyncSequenceContainer:(id)container parametersBlocksContainer:(id)container sync:(BOOL)sync completion:(id /* block */)completion;
@end

#endif /* SFXPCInvocationProtocol_Protocol_h */