//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDUserDomainConceptOntologyContentRefresher_h
#define HDUserDomainConceptOntologyContentRefresher_h
@import Foundation;

@interface HDUserDomainConceptOntologyContentRefresher : NSObject
/* class methods */
+ (id)refreshOntologyContentForUserDomainConcept:(id)concept transaction:(id)transaction error:(id *)error;
+ (id)propertyCollectionWithOntologyConcept:(id)concept ontologyTransaction:(id)transaction error:(id *)error;
+ (BOOL)supportsAutomaticGrouperPromotion;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)coding outAdditionalCodings:(id *)codings outConceptToRefreshWith:(id *)with ontologyTransaction:(id)transaction error:(id *)error;
+ (BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)concept ontologyTransaction:(id)transaction error:(id *)error;
+ (BOOL)_determineIfEligibleForRefreshAndPerformRefreshOperationForConcept:(id)concept ontologyTransaction:(id)transaction outRefreshedUserDomainConcept:(id *)concept error:(id *)error;
+ (long long)_isAbleToUpdateUserDomainConcept:(id)concept outAdditionalCodings:(id *)codings outConceptToRefreshWith:(id *)with ontologyTransaction:(id)transaction error:(id *)error;
+ (long long)_loadMercuryConceptForRefreshFromUserDomainConcept:(id)concept ontologyCoding:(id)coding outConcept:(id *)concept ontologyTransaction:(id)transaction error:(id *)error;
+ (long long)_performAutomaticGrouperPromotionForConcept:(id)concept userDomainConcept:(id)concept outConcept:(id *)concept ontologyTransaction:(id)transaction error:(id *)error;
+ (long long)_isAbleToPromoteConceptToGrouper:(id)grouper ontologyTransaction:(id)transaction error:(id *)error;
+ (id)_refreshUserDomainConcept:(id)concept withOntologyConcept:(id)concept codings:(id)codings ontologyTransaction:(id)transaction error:(id *)error;
@end

#endif /* HDUserDomainConceptOntologyContentRefresher_h */