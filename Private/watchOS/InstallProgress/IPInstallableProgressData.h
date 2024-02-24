//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPInstallableProgressData_h
#define IPInstallableProgressData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface IPInstallableProgressData : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_phaseStates;
  double _currentFractionCompleted;
}

@property (nonatomic) unsigned long long installPhase;
@property (nonatomic) unsigned long long finalPhase;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_findOrCreatePhaseState:(unsigned long long)state;
- (id)init;
- (void)_recalculateCurrentFractionCompleted;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)phase;
- (void)setCompletedUnitCount:(unsigned long long)count forPhase:(unsigned long long)phase;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)phase;
- (void)setTotalUnitCount:(unsigned long long)count forPhase:(unsigned long long)phase;
- (void)setTotalUnitCountsForPhases:(id)phases;
- (double)fractionCompleted;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IPInstallableProgressData_h */