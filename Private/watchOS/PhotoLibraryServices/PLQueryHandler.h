//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLQueryHandler_h
#define PLQueryHandler_h
@import Foundation;

@interface PLQueryHandler : NSObject
/* class methods */
+ (id)constructQueryFromData:(id)data;
+ (id)dataFromQuery:(id)query;
+ (id)infoFromQuery:(id)query;
+ (id)queryFromInfo:(id)info;
+ (id)_infoFromSingleQuery:(id)query;
+ (id)_getTargetDateWithUnit:(int)unit dateValue:(id)value;
+ (id)_getTargetDateForTheLastDays:(long long)days weeks:(long long)weeks months:(long long)months years:(long long)years seconds:(long long)seconds targetDate:(id)date;
+ (id)_convertQueryKeyTypeToString:(int)string;
+ (id)_convertQueryValueForAssetType:(int)type;
+ (id)_getConvertedQueryKey:(id)key;
+ (BOOL)_isTextFieldQuery:(int)query;
+ (BOOL)_isTextComparator:(int)comparator;
+ (int)_convertComparatorToNumericComparator:(int)comparator;
+ (id)_getConvertedKeys:(id)keys;
+ (unsigned long long)_comparatorToOperatorType:(int)type;
+ (id)_expressionForStringValue:(id)value inLibrary:(id)library;
+ (BOOL)_needToNegateQueryForComparator:(int)comparator;
+ (id)_predicateForEmptyQuery:(id)query inLibrary:(id)library;
+ (id)_predicateFromSearchIndexForText:(id)text comparator:(int)comparator inLibrary:(id)library;
+ (id)_predicateForTextQuery:(id)query inLibrary:(id)library;
+ (id)_predicateForRangeQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (BOOL)_needEqualityForDoubleQuery:(int)query;
+ (id)_equalityPredicateForDoubleQuery:(id)query withValue:(double)value comparator:(int)comparator inLibrary:(id)library;
+ (id)_predicateForDoubleQuery:(id)query inLibrary:(id)library;
+ (id)_personNameQueryKeyPaths;
+ (id)_personMatchesPredicateForCriteria:(id)criteria;
+ (id)_predicateForPersonQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (id)_predicateForPersonUUIDQuery:(id)uuidquery inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (id)_predicateForPersonUUIDinMomentForSharedLibraryQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (id)_assetsPredicateForPersonPredicate:(id)predicate assetObjectIDs:(id *)ids additionalAssetPredicate:(id)predicate invert:(BOOL)invert inLibrary:(id)library;
+ (id)_predicateForIsReferencedQuery:(id)query inLibrary:(id)library;
+ (id)_predicateForLoopingQuery:(id)query inLibrary:(id)library;
+ (id)_predicateFromAlbumKind:(int)kind negate:(BOOL)negate;
+ (id)_predicateForProResQuery:(id)query inLibrary:(id)library;
+ (id)_predicateForTaggedWithGPSQuery:(id)gpsquery inLibrary:(id)library;
+ (id)_predicateForNotAbleToUploadQuery;
+ (id)_predicateForAbleToUploadQuery;
+ (BOOL)hasMatchingFetchingAlbumForSingleQuery:(id)query outKind:(int *)kind;
+ (id)_predicateForSingleQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (id)predicateForQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (id)_predicateForQuery:(id)query inLibrary:(id)library changeDetectionCriteria:(id)criteria;
+ (BOOL)_containsKey:(int)key inQuery:(id)query;
+ (id)_singleQueryInQuery:(id)query passingTest:(id /* block */)test;
+ (BOOL)includesHiddenAssetsKeyInQuery:(id)query;
+ (BOOL)includesHiddenAssetsInQuery:(id)query;
+ (BOOL)fixUserQueryDataInQuery:(id)query;
+ (BOOL)_findAndReplaceLatitudeLongitudeKeyInQuery:(id)query;
@end

#endif /* PLQueryHandler_h */