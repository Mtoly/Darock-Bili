//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef _NUIGridArrangementContainer_Protocol_h
#define _NUIGridArrangementContainer_Protocol_h
@import Foundation;

@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
/* instance methods */
- (void)populateGridArrangementCells:(void *)cells;
- (void)populateGridArrangementDimension:(void *)dimension withCells:(const void *)cells axis:(long long)axis;
@optional
/* instance methods */
- (BOOL)canCancelMeasurementForCompression;
- (BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)axis;
@end

#endif /* _NUIGridArrangementContainer_Protocol_h */