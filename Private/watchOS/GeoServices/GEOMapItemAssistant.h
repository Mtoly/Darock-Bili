//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapItemAssistant_h
#define GEOMapItemAssistant_h
@import Foundation;

#include "GEOBaseMapItem.h"
#include "GEOAddressObject.h"
#include "GEOLocation.h"
#include "GEOPlace.h"

@class NSDictionary, NSString, NSURL;

@interface GEOMapItemAssistant : GEOBaseMapItem {
  /* instance variables */
  GEOLocation *_location;
  NSDictionary *_addressDictionary;
  NSString *_name;
  NSURL *_businessURL;
  NSString *_phoneNumber;
  unsigned long long _muid;
  NSString *_attributionID;
  unsigned int _sampleSizeForUserRatingScore;
  float _normalizedUserRatingScore;
  GEOPlace *_place;
  GEOAddressObject *_addressObject;
}

/* instance methods */
- (id)initWithWithLocation:(id)location addressDictionary:(id)dictionary name:(id)name businessURL:(id)url phoneNumber:(id)number sessionID:(id)id muid:(unsigned long long)muid attributionID:(id)id sampleSizeForUserRatingScore:(unsigned int)score normalizedUserRatingScore:(float)score;
- (id)description;
- (BOOL)isValid;
- (id)name;
- (struct { double x0; double x1; })coordinate;
- (id)addressDictionary;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_responseStatusIsIncomplete;
- (id)_place;
- (id)geoAddress;
- (BOOL)_hasMUID;
- (unsigned long long)_muid;
- (id)_businessURL;
- (BOOL)_hasUserRatingScore;
- (unsigned int)_sampleSizeForUserRatingScore;
- (float)_normalizedUserRatingScore;
- (id)addressObject;
- (id)weatherDisplayName;
@end

#endif /* GEOMapItemAssistant_h */