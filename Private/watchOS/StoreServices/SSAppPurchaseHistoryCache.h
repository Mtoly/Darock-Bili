//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSAppPurchaseHistoryCache_h
#define SSAppPurchaseHistoryCache_h
@import Foundation;

#include "SSAccount.h"
#include "SSAppPurchaseHistoryDatabase.h"
#include "SSDatabaseCache.h"

@interface SSAppPurchaseHistoryCache : NSObject {
  /* instance variables */
  SSAccount *_account;
  SSDatabaseCache *_databaseCache;
  SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (id)allUncachedImages:(id)images;
- (id)allUncachedImages;
- (void)clearCacheForAdamID:(id)id;
- (BOOL)setImageData:(id)data forAdamID:(id)id imageToken:(id)token;
- (id)imageDataForAdamID:(id)id;
- (unsigned long long)purgeableSpace;
- (unsigned long long)purge:(unsigned long long)purge;
@end

#endif /* SSAppPurchaseHistoryCache_h */