//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPCPlayerResponseItem_Protocol_h
#define MusicKit_SoftLinking_MPCPlayerResponseItem_Protocol_h
@import Foundation;

@protocol MusicKit_SoftLinking_MPCPlayerResponseItem <NSObject>

@property (readonly, copy, nonatomic) NSString *musicKit_playerResponseItem_contentItemIdentifier;
@property (readonly, nonatomic) id musicKit_playerResponseItem_underlyingModelObject;
@property (readonly, nonatomic) double musicKit_playerResponseItem_startTime;
@property (readonly, nonatomic) double musicKit_playerResponseItem_endTime;
@property (readonly, nonatomic) double musicKit_playerResponseItem_duration;
@property (readonly, nonatomic) double musicKit_playerResponseItem_elapsedTime;
@property (readonly, nonatomic) float musicKit_playerResponseItem_rate;
@property (readonly, nonatomic) float musicKit_playerResponseItem_defaultRate;
@property (readonly, nonatomic) BOOL musicKit_playerResponseItem_isLiveContent;
@property (readonly, nonatomic) BOOL musicKit_playerResponseItem_isPlaceholder;
@property (readonly, nonatomic) BOOL musicKit_playerResponseItem_isLoading;
@property (readonly, nonatomic) NSObject<MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> *musicKit_playerResponseItem_nowPlayingAudioFormat;

/* instance methods */
- (id)musicKit_playerResponseItem_seekCommand;
- (id)musicKit_playerResponseItem_removeCommandRequest;
@end

#endif /* MusicKit_SoftLinking_MPCPlayerResponseItem_Protocol_h */