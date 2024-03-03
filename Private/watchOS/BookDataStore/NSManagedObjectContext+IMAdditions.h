//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef NSManagedObjectContext_IMAdditions_h
#define NSManagedObjectContext_IMAdditions_h
@import Foundation;

@interface NSManagedObjectContext (IMAdditions)
/* class methods */
+ (id)mergePredicate:(id)predicate andPredicate:(id)predicate;

/* instance methods */
- (void)batchDeleteEntity:(id)entity matching:(id)matching prefetchRelationships:(id)relationships;
- (unsigned long long)countEntity:(id)entity withPredicate:(id)predicate;
- (id)copyEntityPropertiesArray:(id)array fromEntityName:(id)name withPredicate:(id)predicate sortBy:(id)by ascending:(BOOL)ascending distinct:(BOOL)distinct;
- (id)copyEntityPropertiesArray:(id)array fromEntityName:(id)name withPredicate:(id)predicate sortBy:(id)by ascending:(BOOL)ascending;
- (id)copyEntityPropertyArray:(id)array fromEntityName:(id)name withPredicate:(id)predicate sortBy:(id)by ascending:(BOOL)ascending;
- (id)copyEntityProperty:(id)property fromEntityName:(id)name withPredicate:(id)predicate;
- (id)newByClass:(Class)class;
- (id)objectIDsWithPredicate:(id)predicate forEntity:(id)entity;
- (id)unbatchedObjectsWithPredicate:(id)predicate forEntity:(id)entity;
- (id)entity:(id)entity withPredicate:(id)predicate sortDescriptors:(id)descriptors fetchLimit:(unsigned long long)limit prefetchRelationships:(id)relationships;
- (id)entity:(id)entity withPredicate:(id)predicate sortBy:(id)by ascending:(BOOL)ascending fetchLimit:(unsigned long long)limit prefetchRelationships:(id)relationships;
- (id)entity:(id)entity withPredicate:(id)predicate sortBy:(id)by ascending:(BOOL)ascending fetchLimit:(unsigned long long)limit;
- (id)entity:(id)entity withPredicate:(id)predicate;
- (void)im_pushSafeAccessState;
- (void)im_popSafeAccessState;
- (void)im_performSafeAccess:(id /* block */)access;
- (BOOL)im_isPerformingSafeAccess;
@end

#endif /* NSManagedObjectContext_IMAdditions_h */