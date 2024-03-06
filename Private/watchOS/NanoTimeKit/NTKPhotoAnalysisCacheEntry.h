//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPhotoAnalysisCacheEntry_h
#define NTKPhotoAnalysisCacheEntry_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "NTKPhotoAnalysis.h"

@interface NTKPhotoAnalysisCacheEntry : NSObject<NSSecureCoding>

@property (retain, nonatomic) NTKPhotoAnalysis *analysis;
@property (nonatomic) int sequenceNumber;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NTKPhotoAnalysisCacheEntry_h */