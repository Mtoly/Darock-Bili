//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsBaseAction_h
#define MapsSuggestionsBaseAction_h
@import Foundation;

#include "MapsSuggestionsAction-Protocol.h"

@class NSString;

@interface MapsSuggestionsBaseAction : NSObject<MapsSuggestionsAction> {
  /* instance variables */
  NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name;
- (void)actWithHandler:(id /* block */)handler;
@end

#endif /* MapsSuggestionsBaseAction_h */