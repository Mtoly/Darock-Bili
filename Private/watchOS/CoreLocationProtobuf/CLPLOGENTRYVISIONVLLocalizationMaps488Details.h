//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPLOGENTRYVISIONVLLocalizationMaps488Details_h
#define CLPLOGENTRYVISIONVLLocalizationMaps488Details_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface CLPLOGENTRYVISIONVLLocalizationMaps488Details : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 descriptorDimension; unsigned int x :1 numFrames; unsigned int x :1 numInliers; unsigned int x :1 numSlamTracks; } _has;
}

@property (nonatomic) BOOL hasNumInliers;
@property (nonatomic) unsigned long long numInliers;
@property (readonly, nonatomic) unsigned long long points2dsCount;
@property (readonly, nonatomic) float * points2ds;
@property (readonly, nonatomic) unsigned long long points3dsCount;
@property (readonly, nonatomic) double * points3ds;
@property (readonly, nonatomic) unsigned long long inlierIndicesCount;
@property (readonly, nonatomic) int * inlierIndices;
@property (readonly, nonatomic) unsigned long long slamOriginsCount;
@property (readonly, nonatomic) double * slamOrigins;
@property (nonatomic) BOOL hasNumSlamTracks;
@property (nonatomic) unsigned long long numSlamTracks;
@property (readonly, nonatomic) unsigned long long slamTracksCount;
@property (readonly, nonatomic) float * slamTracks;
@property (nonatomic) BOOL hasDescriptorDimension;
@property (nonatomic) unsigned long long descriptorDimension;
@property (readonly, nonatomic) BOOL hasSlamTrackDescriptors;
@property (retain, nonatomic) NSData *slamTrackDescriptors;
@property (readonly, nonatomic) unsigned long long slamTrackObservationsCount;
@property (readonly, nonatomic) int * slamTrackObservations;
@property (readonly, nonatomic) unsigned long long slamTracks2dsCount;
@property (readonly, nonatomic) float * slamTracks2ds;
@property (readonly, nonatomic) unsigned long long slamTrackImageIndicesCount;
@property (readonly, nonatomic) int * slamTrackImageIndices;
@property (nonatomic) BOOL hasNumFrames;
@property (nonatomic) unsigned long long numFrames;
@property (readonly, nonatomic) unsigned long long perFrameVioStatusCodesCount;
@property (readonly, nonatomic) int * perFrameVioStatusCodes;
@property (readonly, nonatomic) unsigned long long perFrameVioPosesCount;
@property (readonly, nonatomic) float * perFrameVioPoses;
@property (readonly, nonatomic) unsigned long long perFrameCalibrationMatricesCount;
@property (readonly, nonatomic) float * perFrameCalibrationMatrices;
@property (readonly, nonatomic) unsigned long long perFrameDistortionsCount;
@property (readonly, nonatomic) float * perFrameDistortions;
@property (readonly, nonatomic) unsigned long long resultPoseRotationsCount;
@property (readonly, nonatomic) double * resultPoseRotations;
@property (readonly, nonatomic) unsigned long long resultPoseTranslationsCount;
@property (readonly, nonatomic) double * resultPoseTranslations;

/* instance methods */
- (void)dealloc;
- (void)clearPoints2ds;
- (void)addPoints2d:(float)points2d;
- (float)points2dAtIndex:(unsigned long long)index;
- (void)setPoints2ds:(float *)points2ds count:(unsigned long long)count;
- (void)clearPoints3ds;
- (void)addPoints3d:(double)points3d;
- (double)points3dAtIndex:(unsigned long long)index;
- (void)setPoints3ds:(double *)points3ds count:(unsigned long long)count;
- (void)clearInlierIndices;
- (void)addInlierIndices:(int)indices;
- (int)inlierIndicesAtIndex:(unsigned long long)index;
- (void)setInlierIndices:(int *)indices count:(unsigned long long)count;
- (void)clearSlamOrigins;
- (void)addSlamOrigin:(double)origin;
- (double)slamOriginAtIndex:(unsigned long long)index;
- (void)setSlamOrigins:(double *)origins count:(unsigned long long)count;
- (void)clearSlamTracks;
- (void)addSlamTracks:(float)tracks;
- (float)slamTracksAtIndex:(unsigned long long)index;
- (void)setSlamTracks:(float *)tracks count:(unsigned long long)count;
- (void)clearSlamTrackObservations;
- (void)addSlamTrackObservations:(int)observations;
- (int)slamTrackObservationsAtIndex:(unsigned long long)index;
- (void)setSlamTrackObservations:(int *)observations count:(unsigned long long)count;
- (void)clearSlamTracks2ds;
- (void)addSlamTracks2d:(float)tracks2d;
- (float)slamTracks2dAtIndex:(unsigned long long)index;
- (void)setSlamTracks2ds:(float *)tracks2ds count:(unsigned long long)count;
- (void)clearSlamTrackImageIndices;
- (void)addSlamTrackImageIndices:(int)indices;
- (int)slamTrackImageIndicesAtIndex:(unsigned long long)index;
- (void)setSlamTrackImageIndices:(int *)indices count:(unsigned long long)count;
- (void)clearPerFrameVioStatusCodes;
- (void)addPerFrameVioStatusCodes:(int)codes;
- (int)perFrameVioStatusCodesAtIndex:(unsigned long long)index;
- (void)setPerFrameVioStatusCodes:(int *)codes count:(unsigned long long)count;
- (void)clearPerFrameVioPoses;
- (void)addPerFrameVioPoses:(float)poses;
- (float)perFrameVioPosesAtIndex:(unsigned long long)index;
- (void)setPerFrameVioPoses:(float *)poses count:(unsigned long long)count;
- (void)clearPerFrameCalibrationMatrices;
- (void)addPerFrameCalibrationMatrices:(float)matrices;
- (float)perFrameCalibrationMatricesAtIndex:(unsigned long long)index;
- (void)setPerFrameCalibrationMatrices:(float *)matrices count:(unsigned long long)count;
- (void)clearPerFrameDistortions;
- (void)addPerFrameDistortion:(float)distortion;
- (float)perFrameDistortionAtIndex:(unsigned long long)index;
- (void)setPerFrameDistortions:(float *)distortions count:(unsigned long long)count;
- (void)clearResultPoseRotations;
- (void)addResultPoseRotation:(double)rotation;
- (double)resultPoseRotationAtIndex:(unsigned long long)index;
- (void)setResultPoseRotations:(double *)rotations count:(unsigned long long)count;
- (void)clearResultPoseTranslations;
- (void)addResultPoseTranslation:(double)translation;
- (double)resultPoseTranslationAtIndex:(unsigned long long)index;
- (void)setResultPoseTranslations:(double *)translations count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CLPLOGENTRYVISIONVLLocalizationMaps488Details_h */