//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3StoreImportOperation_h
#define ML3StoreImportOperation_h
@import Foundation;

#include "ML3ImportOperation.h"
#include "ML3StoreItemAlbumArtistData.h"
#include "ML3StoreItemPlaylistData.h"
#include "ML3StoreItemTrackData.h"

@interface ML3StoreImportOperation : ML3ImportOperation {
  /* instance variables */
  ML3StoreItemTrackData *_trackData;
  ML3StoreItemPlaylistData *_playlistData;
  ML3StoreItemAlbumArtistData *_albumArtistData;
}

/* instance methods */
- (unsigned long long)importSource;
- (void)main;
- (BOOL)_performImportWithTransaction:(id)transaction;
- (BOOL)_importTracksUsingImportSession:(void *)session;
- (BOOL)_importPlaylistsUsingImportSession:(void *)session;
- (BOOL)_importAlbumArtistsUsingImportSession:(void *)session;
@end

#endif /* ML3StoreImportOperation_h */