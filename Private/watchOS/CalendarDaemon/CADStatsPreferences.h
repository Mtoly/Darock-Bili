//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADStatsPreferences_h
#define CADStatsPreferences_h
@import Foundation;

#include "CADStatCollector.h"

@class NSMutableDictionary;

@interface CADStatsPreferences : CADStatCollector {
  /* instance variables */
  NSMutableDictionary *payload;
}

/* class methods */
+ (id)eventName;

/* instance methods */
- (id)init;
- (id)eventDictionaries;
@end

#endif /* CADStatsPreferences_h */