//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDTransactionService_h
#define EDTransactionService_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

/* instance methods */
- (id)initWithServiceName:(id)name;
- (id)startTransaction;
- (void)endTransaction:(id)transaction;
- (BOOL)hasPendingTransactions;
- (void)resetPendingTransactions;
@end

#endif /* EDTransactionService_h */