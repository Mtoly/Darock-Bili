//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCHLSPlaylistState_h
#define FCHLSPlaylistState_h
@import Foundation;

#include "FCHLSKey.h"
#include "FCHLSMap.h"
#include "FCHLSStreamInf.h"

@class NSMutableArray, NSMutableDictionary;

@interface FCHLSPlaylistState : NSObject {
  /* instance variables */
  NSMutableDictionary *_mutableGroups;
  FCHLSMap *_currentMap;
  double _currentDuration;
  NSMutableArray *_mutableSegments;
  FCHLSStreamInf *_currentStreamInf;
  NSMutableArray *_mutableStreamInfs;
  FCHLSKey *_currentKey;
  NSMutableDictionary *_mutableSessionData;
}

/* instance methods */
- (id)init;
@end

#endif /* FCHLSPlaylistState_h */