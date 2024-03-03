//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCWiFiUtils_h
#define VCWiFiUtils_h
@import Foundation;

@class BOOL *;

@interface VCWiFiUtils : NSObject
/* class methods */
+ (BOOL)getInfraChannelNumber:(int *)number is5Ghz:(BOOL *)ghz;
+ (BOOL)getInfraChannelNumber:(int *)number is5Ghz:(BOOL *)ghz isPresent:(BOOL *)present;
+ (BOOL)copyAWDLChannelSequence:(id *)sequence twoPtFourGhzChannelCount:(int *)count fiveGhzChannelCount:(int *)count dfsChannelCount:(int *)count inactiveSlotCount:(int *)count;
@end

#endif /* VCWiFiUtils_h */