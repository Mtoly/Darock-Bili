//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLVideoInternalResource_h
#define PLVideoInternalResource_h
@import Foundation;

#include "PLInternalResource.h"
#include "PLVideoResource-Protocol.h"

@class NSNumber, NSString;

@interface PLVideoInternalResource : NSObject<PLVideoResource> {
  /* instance variables */
  NSNumber *_cachedIsPlayable;
}

@property (readonly, nonatomic) PLInternalResource *backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)deviceSupportsHDR;

/* instance methods */
- (id)initWithBackingResource:(id)resource;
- (BOOL)isEqual:(id)equal;
- (unsigned short)storeClassID;
- (unsigned int)version;
- (BOOL)isOriginalVideo;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isLocallyAvailable;
- (BOOL)isLocallyGeneratable;
- (BOOL)isPlayable;
- (id)cachedIsPlayable;
- (BOOL)isDownloadable;
- (BOOL)isStreamable;
- (BOOL)isLargeQuality;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)level;
- (id)fileURLIfLocal;
- (BOOL)hasAssociatedMediaMetadata;
- (BOOL)isHDRDerivative;
- (BOOL)isSDRFallback;
- (BOOL)isHDROrSDRDependingOnMasterVideo;
- (id)uniformTypeIdentifier;
- (id)additionalDescription;
@end

#endif /* PLVideoInternalResource_h */