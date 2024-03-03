//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLScopedSearchUtilities_h
#define PLScopedSearchUtilities_h
@import Foundation;

@interface PLScopedSearchUtilities : NSObject
/* class methods */
+ (void)intersectGroups:(id)groups searchResultTypes:(unsigned long long)types shouldGenerateCompletionCandidates:(BOOL)candidates query:(id)query completion:(id /* block */)completion;
+ (void)intersectSortedArray:(const struct __CFArray * *)array withOtherSortedArray:(struct __CFArray *)array;
+ (void)_recursivelyIntersectGroups:(id)groups searchResultTypes:(unsigned long long)types query:(id)query groupArrayIndex:(unsigned long long)index iterationCount:(unsigned long long)count iterationIdIntersections:(struct __CFArray * *)intersections finalIdIntersections:(struct __CFArray *)intersections finalExactMatchIdIntersections:(struct __CFArray *)intersections iterationGroups:(id *)groups finalGroups:(id)groups allMatchedGroups:(id)groups;
+ (BOOL)shouldUseExactMatchResultsForGroups:(id)groups;
+ (id)filterArrayOfGroupsArraysForEqualMatchType:(id)type searchTokens:(id)tokens;
+ (id)removeSynonymsOfOtherGroupsInGroups:(id)groups;
+ (void)searchIndexIdsFromUUIDs:(id)uuids searchResultTypes:(unsigned long long)types delegate:(id)delegate completion:(id /* block */)completion;
+ (id)UUIDsFromSearchIndexIds:(struct __CFArray *)ids searchIndexIdsToUUIDs:(id)uuids searchResultType:(unsigned long long)type delegate:(id)delegate;
+ (BOOL)groupDuplicateOrSynonymExistsForGroup:(id)group inGroups:(id)groups;
+ (struct __CFArray *)_sortCFArrayOfPSIIdentifiers:(struct __CFArray *)psiidentifiers;
+ (id)generateFruitfulMatchedGroupsFromAllMatchedGroups:(id)groups queryMatchedScopedAssetUUIDs:(id)uuids queryMatchedScopedCollectionUUIDs:(id)uuids searchResultTypes:(unsigned long long)types delegate:(id)delegate;
+ (id)groupDictionariesFromArrayOfGroupsArrays:(id)arrays;
+ (id)_UUIDsForGroup:(id)group searchResultsType:(unsigned long long)type delegate:(id)delegate;
@end

#endif /* PLScopedSearchUtilities_h */