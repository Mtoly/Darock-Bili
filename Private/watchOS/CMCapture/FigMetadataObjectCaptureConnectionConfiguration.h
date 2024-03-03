//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigMetadataObjectCaptureConnectionConfiguration_h
#define FigMetadataObjectCaptureConnectionConfiguration_h
@import Foundation;

#include "FigCaptureConnectionConfiguration.h"

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (copy, nonatomic) NSArray *metadataIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } metadataRectOfInterest;
@property (nonatomic) int faceTrackingMaxFaces;
@property (nonatomic) BOOL faceTrackingUsesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;

/* instance methods */
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FigMetadataObjectCaptureConnectionConfiguration_h */