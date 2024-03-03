//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSFLPCMTypeConverter_h
#define CSFLPCMTypeConverter_h
@import Foundation;

@interface CSFLPCMTypeConverter : NSObject
/* class methods */
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)lpcmbuf;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)lpcmbuf;
+ (void)applyGain:(float)gain toShortBuffer:(id)buffer;
+ (void)applyGain:(float)gain toFloatBuffer:(id)buffer;
+ (void)apply12dBGainToShortBuffer:(id)buffer;
+ (void)apply12dBGainToFloatBuffer:(id)buffer;
+ (void)applyNegative32dBGainToShortBuffer:(id)buffer;
+ (void)applyNegative32dBGainToFloatBuffer:(id)buffer;
+ (void)applyNegative20dBGainToShortBuffer:(id)buffer;
+ (void)applyNegative20dBGainToFloatBuffer:(id)buffer;
@end

#endif /* CSFLPCMTypeConverter_h */