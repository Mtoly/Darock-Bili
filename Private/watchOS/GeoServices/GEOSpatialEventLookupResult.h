//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSpatialEventLookupResult_h
#define GEOSpatialEventLookupResult_h
@import Foundation;

@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
  /* instance variables */
  NSMapTable *_parametersToEventsMap;
}

/* instance methods */
- (id)initWithMapTable:(id)table;
- (id)init;
- (id)poiEventsForSpatialLookupParameters:(id)parameters;
@end

#endif /* GEOSpatialEventLookupResult_h */