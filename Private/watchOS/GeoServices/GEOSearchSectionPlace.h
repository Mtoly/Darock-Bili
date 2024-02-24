//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSearchSectionPlace_h
#define GEOSearchSectionPlace_h
@import Foundation;

@class NSArray;

@interface GEOSearchSectionPlace : NSObject

@property (readonly, nonatomic) NSArray *mapItemIds;

/* instance methods */
- (id)init;
- (id)initWithMapItemIds:(id)ids;
- (id)initWithSearchSectionPlace:(id)place;
@end

#endif /* GEOSearchSectionPlace_h */