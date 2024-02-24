//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSearchResultV2_h
#define PLSearchResultV2_h
@import Foundation;

@class NSArray;

@interface PLSearchResultV2 : NSObject

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSArray *collectionUUIDs;
@property (readonly, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *allFruitfulScopedQueryMatchedGroups;
@property (retain, nonatomic) NSArray *allQueryMatchedGroups;

/* instance methods */
- (id)initWithAssetUUIDs:(id)uuids collectionUUIDs:(id)uuids suggestions:(id)suggestions;
- (id)init;
- (void)mergeWithSearchResult:(id)result;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PLSearchResultV2_h */