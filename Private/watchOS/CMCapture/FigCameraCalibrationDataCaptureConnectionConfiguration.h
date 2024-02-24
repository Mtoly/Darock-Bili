//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCameraCalibrationDataCaptureConnectionConfiguration_h
#define FigCameraCalibrationDataCaptureConnectionConfiguration_h
@import Foundation;

#include "FigCaptureConnectionConfiguration.h"

@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int orientation;

/* instance methods */
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FigCameraCalibrationDataCaptureConnectionConfiguration_h */