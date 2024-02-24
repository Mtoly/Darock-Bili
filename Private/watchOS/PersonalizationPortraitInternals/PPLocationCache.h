//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocationCache_h
#define PPLocationCache_h
@import Foundation;

#include "PPLocalLocationStore.h"

@class NSMutableSet, PPLocation;

@interface PPLocationCache : NSObject {
  /* instance variables */
  PPLocalLocationStore *_locationStore;
  BOOL _valid;
  PPLocation *_home;
  PPLocation *_work;
  NSMutableSet *_homeOrWorkAddresses;
}

/* instance methods */
- (id)init;
- (id)initWithLocationStore:(id)store;
- (id)locationForHome;
- (id)locationForWork;
- (id)homeOrWorkAddresses;
- (void)_refresh;
- (void)invalidate;
@end

#endif /* PPLocationCache_h */