//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTMediaActivityTracker_h
#define MTMediaActivityTracker_h
@import Foundation;

#include "MTMediaActivity.h"
#include "MTMediaPlaylist-Protocol.h"
#include "MTMediaTimeTracker.h"
#include "MTVPAFKit.h"

@class NSMutableArray;

@interface MTMediaActivityTracker : NSObject

@property (weak, nonatomic) MTVPAFKit *vpafKit;
@property (retain, nonatomic) NSObject<MTMediaPlaylist> *playlist;
@property (retain, nonatomic) MTMediaActivity *playActivity;
@property (retain, nonatomic) MTMediaActivity *seekActivity;
@property (retain, nonatomic) NSMutableArray *eventData;
@property (retain, nonatomic) MTMediaTimeTracker *timeTracker;
@property (nonatomic) BOOL shouldGenerateTransitions;

/* class methods */
+ (id /* block */)playlistItemComparator;

/* instance methods */
- (id)initWithVPAFKit:(id)vpafkit playlist:(id)playlist eventData:(id)data;
- (void)playStartedWithPlaybackRate:(float)rate overallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStartedAtOverallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStoppedAtOverallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)playTransitionedAtOverallPosition:(unsigned long long)position eventData:(id)data;
- (void)seekStartedAtOverallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)seekStoppedAtOverallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)synchronizePlaybackRate:(float)rate overallPosition:(unsigned long long)position;
- (void)synchronizeAtOverallPosition:(unsigned long long)position;
- (void)updateEventData:(id)data;
- (void)resetEventData:(id)data;
- (id)combineEventData:(id)data withPlaylistDataForItem:(id)item;
- (id)startActivity:(long long)activity overallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)stopActivity:(long long)activity overallPosition:(unsigned long long)position type:(id)type reason:(id)reason eventData:(id)data;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned long long)necessary;
@end

#endif /* MTMediaActivityTracker_h */