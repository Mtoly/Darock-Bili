//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STAttributedEntityResolver_h
#define STAttributedEntityResolver_h
@import Foundation;

#include "STAttributedEntityResolving-Protocol.h"
#include "STExecutableIdentityResolver.h"
#include "STReferenceCountedCache.h"

@class NSArray;

@interface STAttributedEntityResolver : NSObject<STAttributedEntityResolving> {
  /* instance variables */
  STExecutableIdentityResolver *_identityResolver;
  STReferenceCountedCache *_cache;
}

@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (copy, nonatomic) NSArray *dynamicAttributions;

/* instance methods */
- (id)init;
- (id)initWithPreferredLocalizations:(id)localizations;
- (id)beginBatchResolutionSession;
- (id)resolveEntity:(id)entity;
@end

#endif /* STAttributedEntityResolver_h */