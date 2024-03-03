//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRILockedFactorPackSet_h
#define TRILockedFactorPackSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIReferenceManagedDirReaderLock.h"

@class NSString;
@protocol NSString<TRIFactorPackSetId;

@interface TRILockedFactorPackSet : NSObject<NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) TRIReferenceManagedDirReaderLock *lock;

/* class methods */
+ (id)lockedSetWithFactorPackSetId:(id)id path:(id)path lock:(id)lock;

/* instance methods */
- (id)initWithFactorPackSetId:(id)id path:(id)path lock:(id)lock;
- (id)copyWithReplacementFactorPackSetId:(id)id;
- (id)copyWithReplacementPath:(id)path;
- (id)copyWithReplacementLock:(id)lock;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToLockedSet:(id)set;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)init;
@end

#endif /* TRILockedFactorPackSet_h */