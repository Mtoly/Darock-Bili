//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCSessionParticipantDelegate_Protocol_h
#define AVCSessionParticipantDelegate_Protocol_h
@import Foundation;

@protocol AVCSessionParticipantDelegate <NSObject>
@optional
/* instance methods */
- (void)participant:(id)participant audioEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant videoEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant screenEnabled:(BOOL)enabled didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant remoteAudioEnabledDidChange:(BOOL)change;
- (void)participant:(id)participant remoteVideoEnabledDidChange:(BOOL)change;
- (void)participant:(id)participant remoteScreenEnabledDidChange:(BOOL)change;
- (void)participant:(id)participant audioPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant videoPaused:(BOOL)paused didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant remoteAudioPausedDidChange:(BOOL)change;
- (void)participant:(id)participant remoteVideoPausedDidChange:(BOOL)change;
- (void)participant:(id)participant mediaPrioritiesDidChange:(id)change;
- (void)participant:(id)participant didReact:(id)react;
- (void)participantDidStopReacting:(id)reacting;
- (void)participant:(id)participant mediaStateDidChange:(unsigned int)change forMediaType:(unsigned int)type didSucceed:(BOOL)succeed error:(id)error;
- (void)participant:(id)participant remoteMediaStateDidChange:(unsigned int)change forMediaType:(unsigned int)type;
- (void)participant:(id)participant mixingDidStartForMediaType:(unsigned int)type mixingMediaType:(unsigned int)type;
- (void)participant:(id)participant mixingDidStopForMediaType:(unsigned int)type;
- (void)participant:(id)participant spatialAudioSourceIDDidChange:(unsigned long long)change;
@end

#endif /* AVCSessionParticipantDelegate_Protocol_h */