//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVCoordinatedPlaybackParticipant_h
#define AVCoordinatedPlaybackParticipant_h
@import Foundation;

@class NSArray, NSUUID;

@interface AVCoordinatedPlaybackParticipant : NSObject

@property (readonly, nonatomic) NSArray *suspensionReasons;
@property (readonly, nonatomic) BOOL readyToPlay;
@property (readonly, nonatomic) NSUUID *identifier;

/* instance methods */
- (id)initWithParticipantIdentifier:(id)identifier readyToPlay:(BOOL)play suspensionReasons:(id)reasons;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isReadyToPlay;
@end

#endif /* AVCoordinatedPlaybackParticipant_h */