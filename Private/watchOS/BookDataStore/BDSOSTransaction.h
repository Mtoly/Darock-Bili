//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BDSOSTransaction_h
#define BDSOSTransaction_h
@import Foundation;

@protocol BDSOSTransactionDelegate, OS_os_transaction;

@interface BDSOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;
@property (weak, nonatomic) NSObject<BDSOSTransactionDelegate> *delegate;

/* instance methods */
- (id)initWithTransactionName:(const char *)name;
- (void)transactionNeedsMoreTime;
- (void)endTransaction;
- (void)dealloc;
@end

#endif /* BDSOSTransaction_h */