//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLCachedThumbnailDescriptor_h
#define QLCachedThumbnailDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface QLCachedThumbnailDescriptor : NSObject<NSCopying>

@property (readonly) float size;
@property (readonly) BOOL iconMode;
@property (readonly) unsigned long long badgeType;
@property long long iconVariant;
@property int interpolationQuality;
@property unsigned long long externalGeneratorDataHash;

/* instance methods */
- (id)initWithThumbnailRequest:(id)request;
- (id)initWithSize:(float)size iconMode:(BOOL)mode badgeType:(unsigned long long)type externalGeneratorDataHash:(unsigned long long)hash;
- (id)initWithSize:(float)size iconMode:(BOOL)mode badgeType:(unsigned long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* QLCachedThumbnailDescriptor_h */