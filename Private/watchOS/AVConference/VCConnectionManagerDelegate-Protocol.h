//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCConnectionManagerDelegate_Protocol_h
#define VCConnectionManagerDelegate_Protocol_h
@import Foundation;

@protocol VCConnectionManagerDelegate <VCLinkProbingHandlerDelegate>
/* instance methods */
- (void)primaryConnectionChanged:(id)changed oldPrimaryConnection:(id)connection activeConnection:(id)connection;
- (void)connectionCallback:(id)callback isInitialConnection:(BOOL)connection;
- (void)didEnableDuplication:(BOOL)duplication activeConnection:(id)connection;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)duplication notifyPeer:(BOOL)peer enableDuplication:(BOOL)duplication isMediaUnrecoverableSignal:(BOOL)signal;
- (void)didMediaQualityDegrade:(BOOL)degrade;
@optional
/* instance methods */
- (void)didLocalNetworkQualityChange:(BOOL)change isLocalNetworkQualityBad:(BOOL)bad isRemoteNetworkQualityBad:(BOOL)bad;
- (void)discardConnection:(id)connection;
- (void)updateParticipantGenerationCounter:(unsigned char)counter;
- (void)resetParticipantGenerationCounter;
- (void)optOutAllStreamsForConnection:(id)connection;
- (void)optIntoExistingSubscribedStreamsForConnection:(id)connection;
- (void)handleRATChanged:(id)ratchanged;
- (void)setRemoteDeviceVersionIDS;
- (int)getSignalStrengthBars:(int *)bars displayBars:(int *)bars maxDisplayBars:(int *)bars;
- (void)logSignalStrength;
- (void)requestStatsWithOptions:(id)options;
@end

#endif /* VCConnectionManagerDelegate_Protocol_h */