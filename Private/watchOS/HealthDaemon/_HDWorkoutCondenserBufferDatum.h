//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDWorkoutCondenserBufferDatum_h
#define _HDWorkoutCondenserBufferDatum_h
@import Foundation;

@interface _HDWorkoutCondenserBufferDatum : NSObject {
  /* instance variables */
  unsigned char _UUIDBytes[16];
  BOOL _isSeries;
  double _startTime;
  double _endTime;
  double _value;
}

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* _HDWorkoutCondenserBufferDatum_h */