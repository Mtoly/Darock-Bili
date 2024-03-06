//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCContextProvider_h
#define HMCContextProvider_h
@import Foundation;

#include "HMFObject.h"
#include "HMCContext.h"

@class NSMutableArray;

@interface HMCContextProvider : HMFObject

@property (readonly) NSMutableArray *redirections;
@property (readonly) HMCContext *context;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)performBlock:(id /* block */)block;
- (void)unsafeSynchronousBlock:(id /* block */)block;
- (id)futureInContext:(id /* block */)context;
- (void)registerForChangesOfDatabaseModels:(id)models orWithModelIDs:(id)ids changeMask:(unsigned long long)mask selector:(SEL)selector;
- (void)removeAllRegistrations;
@end

#endif /* HMCContextProvider_h */