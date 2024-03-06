//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTPAFPlaylistItem_h
#define MTPAFPlaylistItem_h
@import Foundation;

@class NSArray;

@interface MTPAFPlaylistItem : NSObject

@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long end;
@property (copy) NSArray *metricsData;

/* instance methods */
- (id)initWithStart:(unsigned long long)start end:(unsigned long long)end metricsData:(id)data;
@end

#endif /* MTPAFPlaylistItem_h */