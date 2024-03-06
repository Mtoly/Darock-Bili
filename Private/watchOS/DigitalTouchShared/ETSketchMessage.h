//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef ETSketchMessage_h
#define ETSketchMessage_h
@import Foundation;

#include "ETMessage.h"

@class NSArray, NSMutableArray;

@interface ETSketchMessage : ETMessage

@property (nonatomic) BOOL hasMultipleColors;
@property (readonly, nonatomic) unsigned long long numberOfColors;
@property (nonatomic) BOOL didEndWisping;
@property (nonatomic) BOOL didDrawPoints;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) NSArray *colorsInMessage;
@property (nonatomic) BOOL hideComet;

/* class methods */
+ (unsigned short)messageType;

/* instance methods */
- (id)init;
- (void)didReachRendererLimit;
- (void)addStrokeWithColor:(id)color;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })point atTime:(double)time;
- (void)addSketchPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)_decodeWithDoodle:(id)doodle;
- (id)initWithArchiveData:(id)data;
- (id)archiveData;
- (id)messageTypeAsString;
- (void)willBeginWisp;
- (void)didEndWisp;
- (void)setParentMessage:(id)message;
- (void)convertToSimulatedPlaybackSpeed;
- (double)messageDuration;
@end

#endif /* ETSketchMessage_h */