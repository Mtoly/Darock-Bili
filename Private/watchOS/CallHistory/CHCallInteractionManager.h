//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHCallInteractionManager_h
#define CHCallInteractionManager_h
@import Foundation;

#include "CHCallInteractionDataSource-Protocol.h"
#include "CHCallInteractionDataSourceDelegate-Protocol.h"
#include "CHCallInteractionManager-Protocol.h"
#include "CHDelegateController.h"

@class NSString;

@interface CHCallInteractionManager : NSObject<CHCallInteractionDataSourceDelegate, CHCallInteractionManager>

@property (readonly, nonatomic) NSObject<CHCallInteractionDataSource> *dataSource;
@property (readonly, nonatomic) CHDelegateController *delegateController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDataSource:(id)source;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (void)removeDelegate:(id)delegate;
- (void)callInteractionsDidChangeForDataSource:(id)source;
@end

#endif /* CHCallInteractionManager_h */