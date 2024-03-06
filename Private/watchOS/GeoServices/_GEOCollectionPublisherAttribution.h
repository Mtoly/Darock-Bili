//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOCollectionPublisherAttribution_h
#define _GEOCollectionPublisherAttribution_h
@import Foundation;

#include "GEOCollectionPublisherAttribution-Protocol.h"

@class NSString, NSURL;

@interface _GEOCollectionPublisherAttribution : NSObject<GEOCollectionPublisherAttribution>

@property (readonly, nonatomic) NSURL *websiteURL;
@property (readonly, nonatomic) NSString *applicationAdamId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned int iconIdentifier;
@property (readonly, nonatomic) unsigned int logoIdentifier;
@property (readonly, nonatomic) unsigned int logoWithoutPaddingIdentifier;
@property (readonly, nonatomic) unsigned int logoCenteredIdentifier;
@property (readonly, nonatomic) unsigned int logoCenteredColorizedIdentifier;
@property (readonly, nonatomic) NSString *themeColorLightMode;
@property (readonly, nonatomic) NSString *themeColorDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPublisherAttributionSource:(id)source preferredLanguages:(id)languages;
@end

#endif /* _GEOCollectionPublisherAttribution_h */