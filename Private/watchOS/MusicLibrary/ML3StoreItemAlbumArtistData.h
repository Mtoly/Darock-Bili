//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3StoreItemAlbumArtistData_h
#define ML3StoreItemAlbumArtistData_h
@import Foundation;

@class NSArray, NSData, NSDictionary;

@interface ML3StoreItemAlbumArtistData : NSObject {
  /* instance variables */
  NSArray *_lookupItems;
  NSDictionary *_trackItemImportProperties;
}

@property (readonly, nonatomic) NSData *albumArtistData;
@property (readonly, nonatomic) NSArray *parsedStoreAlbumArtistImportProperties;
@property (readonly, nonatomic) unsigned long long albumArtistCount;

/* instance methods */
- (id)initWithLookupItems:(id)items;
- (id)initWithTrackItemImportProperties:(id)properties;
- (id)initWithAlbumArtistData:(id)data;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromLookupItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromTrackImportItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromSerializedLookupItems;
@end

#endif /* ML3StoreItemAlbumArtistData_h */