//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOVenueIdentifier_Protocol_h
#define GEOVenueIdentifier_Protocol_h
@import Foundation;

#include "GEOVenueIdentifier-Protocol.h"

@class NSArray, NSString;

@protocol GEOVenueIdentifier <NSObject>

@property (readonly, nonatomic) BOOL hasVenueID;
@property (readonly, nonatomic) unsigned long long venueID;
@property (readonly, nonatomic) BOOL hasFeatureID;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) NSArray *componentIdentifiers;

/* instance methods */
- (id)placeDataVenueIdentifier;
- (id)placeDataVenueIdentifierForVenue;
- (BOOL)_hasVenueID;
- (BOOL)_hasFeatureID;
- (BOOL)_hasBusinessID;
@end

#endif /* GEOVenueIdentifier_Protocol_h */