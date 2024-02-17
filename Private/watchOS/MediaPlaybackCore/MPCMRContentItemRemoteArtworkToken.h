//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCMRContentItemRemoteArtworkToken_h
#define MPCMRContentItemRemoteArtworkToken_h
@import Foundation;

#include "MPArtworkDataSourceVisualIdenticality-Protocol.h"

@class MPArtworkCatalog, NSArray, NSDictionary, NSString;

@interface MPCMRContentItemRemoteArtworkToken : NSObject<MPArtworkDataSourceVisualIdenticality>

@property (retain, nonatomic) MPArtworkCatalog *storeArtworkCatalog;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *artworkIdentifier;
@property (readonly, nonatomic) NSArray *supportedRemoteArtworkFormats;
@property (readonly, nonatomic) NSDictionary *remoteArtworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier artworkIdentifier:(id)identifier supportedRemoteArtworkFormats:(id)formats remoteArtworks:(id)artworks;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)stringRepresentation;
- (void)setFittingSize:(struct CGSize { double x0; double x1; })size;
- (void)setDestinationScale:(double)scale;
@end

#endif /* MPCMRContentItemRemoteArtworkToken_h */