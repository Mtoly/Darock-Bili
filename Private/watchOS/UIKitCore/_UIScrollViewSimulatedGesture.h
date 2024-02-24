//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScrollViewSimulatedGesture_h
#define _UIScrollViewSimulatedGesture_h
@import Foundation;

@interface _UIScrollViewSimulatedGesture : NSObject {
  /* instance variables */
  double _simulationDuration;
  double _beginTime;
  id /* block */ _beginBlock;
  id /* block */ _updateBlock;
  id /* block */ _endBlock;
}

/* instance methods */
- (id)initWithDuration:(double)duration begin:(id /* block */)begin update:(id /* block */)update end:(id /* block */)end;
- (BOOL)updateSimulation;
@end

#endif /* _UIScrollViewSimulatedGesture_h */