//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANRemotePlaybackSessionServiceInterface_Protocol_h
#define ANRemotePlaybackSessionServiceInterface_Protocol_h
@import Foundation;

@protocol ANRemotePlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
/* instance methods */
- (void)startSessionForGroupID:(id)id reply:(id /* block */)reply;
- (void)endSessionWithReply:(id /* block */)reply;
- (void)setPlaybackStartedForAnnouncement:(id)announcement;
- (void)setPlaybackStoppedForAnnouncement:(id)announcement;
@end

#endif /* ANRemotePlaybackSessionServiceInterface_Protocol_h */