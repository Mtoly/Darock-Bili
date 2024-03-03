//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHConfiguration_h
#define CHConfiguration_h
@import Foundation;

#include "CHConfiguration-Protocol.h"

@class NSString;
@protocol CHDelegateController<CHConfigurationDelegate, CHKeyValueDataSource;

@interface CHConfiguration : NSObject<CHConfiguration>

@property (readonly, nonatomic) CHDelegateController<CHConfigurationDelegate> *delegateController;
@property (readonly, nonatomic) NSObject<CHKeyValueDataSource> *dataSource;
@property (readonly, nonatomic) BOOL cloudKitEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataSource:(id)source;
- (BOOL)isCloudKitEnabled;
- (id)numberForKey:(id)key;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (void)removeDelegate:(id)delegate;
@end

#endif /* CHConfiguration_h */