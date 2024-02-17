//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISEmbossedEffect_h
#define ISEmbossedEffect_h
@import Foundation;

#include "ISEffect-Protocol.h"

@class NSString;

@interface ISEmbossedEffect : NSObject<ISEffect>

@property struct CGSize { double x0; double x1; } offset;
@property double range;
@property unsigned long long variant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)filterWithBackgroundImage:(id)image inputImage:(id)image;
@end

#endif /* ISEmbossedEffect_h */