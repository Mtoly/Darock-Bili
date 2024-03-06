//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHWorkoutUtility_h
#define ACHWorkoutUtility_h
@import Foundation;

@class HDDatabaseTransactionContext, HDProfile, HDSQLitePredicate;

@interface ACHWorkoutUtility : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDSQLitePredicate *firstPartyPredicate;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)_readingContextWithIdentifier:(id)identifier;
- (id)workoutsInDateInterval:(id)interval;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)duration containedInInterval:(id)interval;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration withType:(unsigned long long)type endingOnOrBeforeDate:(id)date;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration containedInInterval:(id)interval;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)duration withType:(unsigned long long)type andLocation:(unsigned long long)location containedInInterval:(id)interval;
- (id)workoutsWithDuration:(double)duration withType:(id)type startingAtOrAfterDate:(id)date endingOnOrBeforeDate:(id)date firstPartyOnly:(BOOL)only;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)type endingBeforeDate:(id)date;
- (id)mindfulMinutesForForDateInterval:(id)interval;
- (double)_sumMindfulMinutesForSessions:(id)sessions dateInterval:(id)interval;
- (void)_performReadTransaction:(id)transaction error:(id *)error block:(id /* block */)block;
- (id)_predicateWithDuration:(double)duration withType:(id)type startingAtOrAfterDate:(id)date endingOnOrBeforeDate:(id)date firstPartyOnly:(BOOL)only;
- (unsigned long long)_countOfSamplesWithPredicate:(id)predicate;
- (unsigned long long)_countOfSamplesWithPredicate:(id)predicate andLocationType:(unsigned long long)type;
@end

#endif /* ACHWorkoutUtility_h */