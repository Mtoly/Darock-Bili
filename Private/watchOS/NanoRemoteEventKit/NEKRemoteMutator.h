//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 399.0.0.0.0
//
#ifndef NEKRemoteMutator_h
#define NEKRemoteMutator_h
@import Foundation;

@class NSXPCConnection;

@interface NEKRemoteMutator : NSObject {
  /* instance variables */
  NSXPCConnection *_connection;
}

/* instance methods */
- (id)init;
- (void)setParticipantStatus:(long long)status span:(long long)span event:(id)event;
- (void)deleteEvent:(id)event span:(long long)span;
- (void)setCompleted:(BOOL)completed reminder:(id)reminder;
- (void)setSnoozeTimeInterval:(double)interval alarm:(id)alarm calendarItem:(id)item;
- (void)setSnoozeTimeInterval:(double)interval alarm:(id)alarm reminder:(id)reminder;
@end

#endif /* NEKRemoteMutator_h */