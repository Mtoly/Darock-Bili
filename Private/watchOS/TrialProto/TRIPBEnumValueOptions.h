//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBEnumValueOptions_h
#define TRIPBEnumValueOptions_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSMutableArray;

@interface TRIPBEnumValueOptions : TRIPBMessage

@property (@dynamic, nonatomic) BOOL deprecated;
@property (@dynamic, nonatomic) BOOL hasDeprecated;
@property (retain, @dynamic, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, @dynamic, nonatomic) unsigned long long uninterpretedOptionArray_Count;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBEnumValueOptions_h */