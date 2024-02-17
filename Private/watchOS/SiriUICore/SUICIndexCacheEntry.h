//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICIndexCacheEntry_h
#define SUICIndexCacheEntry_h
@import Foundation;

@interface SUICIndexCacheEntry : NSObject

@property (nonatomic) unsigned int numAuraIndices;
@property (nonatomic) unsigned int numAuraIndicesCulled;
@property (nonatomic) unsigned int numWaveIndices;
@property (nonatomic) unsigned int * metal_indices;

/* instance methods */
- (void)dealloc;
@end

#endif /* SUICIndexCacheEntry_h */