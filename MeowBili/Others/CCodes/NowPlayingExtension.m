//
//
//  NowPlayingExtension.m
//  MeowBili
//
//  Created by memz233 on 2024/2/14.
//
//===----------------------------------------------------------------------===//
//
// This source file is part of the MeowBili open source project
//
//  Copyright (c) 2024 Darock Studio and the MeowBili project authors
// Licensed under GNU General Public License v3
//
// See https://darock.top/LICENSE.txt for license information
//
//===----------------------------------------------------------------------===//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#if TARGET_OS_WATCH
#import <WatchKit/WatchKit.h>
#endif
#import "NowPlayingExtension.h"

@implementation NowPlayingExtension: NSObject

+(void) setPlayingInfoTitle: (NSString *) title artist: (NSString *) artist artwork: (UIImage *) artwork {
    #if TARGET_OS_IOS
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayback withOptions:AVAudioSessionCategoryOptionAllowAirPlay error:nil];
    [session setActive:true error:nil];
    [[UIApplication sharedApplication] beginReceivingRemoteControlEvents];
    
    NSMutableDictionary *info = [[NSMutableDictionary alloc] init];
    [info setValue:title forKey:MPMediaItemPropertyTitle];
    [info setValue:artist forKey:MPMediaItemPropertyArtist];
    MPMediaItemArtwork *relArtwork = [[MPMediaItemArtwork alloc] initWithBoundsSize:artwork.size requestHandler:^(CGSize _){ return artwork; }];
    [info setValue:relArtwork forKey:MPMediaItemPropertyArtwork];
    MPNowPlayingInfoCenter.defaultCenter.nowPlayingInfo = info;
    #else
    AVAudioSession *session = [AVAudioSession sharedInstance];
    [session setCategory:AVAudioSessionCategoryPlayback withOptions:AVAudioSessionCategoryOptionDuckOthers error:nil];
    [session setActive:true error:nil];
    
    NSMutableDictionary *info = [[NSMutableDictionary alloc] init];
    [info setValue:title forKey:MPMediaItemPropertyTitle];
    [info setValue:artist forKey:MPMediaItemPropertyArtist];
    MPMediaItemArtwork *relArtwork = [[MPMediaItemArtwork alloc] initWithBoundsSize:artwork.size requestHandler:^(CGSize _){ return artwork; }];
    [info setValue:relArtwork forKey:MPMediaItemPropertyArtwork];
    MPNowPlayingInfoCenter.defaultCenter.nowPlayingInfo = info;
    #endif
}

@end
