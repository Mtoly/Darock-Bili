//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _TtC13HomeKitEvents27EventsAsyncSequenceLogEvent_h
#define _TtC13HomeKitEvents27EventsAsyncSequenceLogEvent_h
@import Foundation;

#include "HMMLogEvent.h"

@interface HomeKitEvents.EventsAsyncSequenceLogEvent : HMMLogEvent { // (Swift)
  /* instance variables */
   queryIdentifier;
   state;
   emittedEvents;
   cachedEvents;
   processedRecords;
}

/* instance methods */
- (id)init;
@end

#endif /* _TtC13HomeKitEvents27EventsAsyncSequenceLogEvent_h */