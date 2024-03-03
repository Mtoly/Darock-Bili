//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef AVCCaptionsToken_h
#define AVCCaptionsToken_h
@import Foundation;

#include "VCCaptionsTranscriptionSegment-Protocol.h"

@class NSString;

@interface AVCCaptionsToken : NSObject<VCCaptionsTranscriptionSegment>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

/* instance methods */
- (id)initWithText:(id)text confidence:(double)confidence range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)dealloc;
- (id)description;
@end

#endif /* AVCCaptionsToken_h */