//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSHybridContentProtectionStrategy_h
#define UNSHybridContentProtectionStrategy_h
@import Foundation;

#include "UNSAtomicDataContentProtectionStrategy.h"
#include "UNSContentProtectionStrategy-Protocol.h"
#include "UNSFileHandleContentProtectionStrategy.h"

@class NSString;
@protocol UNSHybridContentProtectionStrategyDelegate;

@interface UNSHybridContentProtectionStrategy : NSObject<UNSContentProtectionStrategy> {
  /* instance variables */
  NSObject<UNSHybridContentProtectionStrategyDelegate> *_delegate;
  NSString *_minimumProtection;
  BOOL _needsMerge;
  UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
  UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFileProtectionType:(id)type excludeFromBackup:(BOOL)backup delegate:(id)delegate;
- (BOOL)isProtectedDataAvailable;
- (BOOL)dataIsAvailableAtPath:(id)path;
- (id)dataAtPath:(id)path;
- (BOOL)writeData:(id)data atPath:(id)path error:(id *)error;
- (BOOL)removeItemAtPath:(id)path error:(id *)error;
- (void)migrateDataAtPath:(id)path toPath:(id)path;
- (void)importDataWithImportHandler:(id /* block */)handler;
- (id)_strategyForProtectionState;
- (BOOL)_mergeIsSupported;
@end

#endif /* UNSHybridContentProtectionStrategy_h */