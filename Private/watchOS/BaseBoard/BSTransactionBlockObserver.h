//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSTransactionBlockObserver_h
#define BSTransactionBlockObserver_h
@import Foundation;

#include "BSTransactionObserver-Protocol.h"

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject<BSTransactionObserver> {
  /* instance variables */
  NSMutableArray *_willBeginBlocks;
  NSMutableArray *_didBeginBlocks;
  NSMutableArray *_didFinishWorkBlocks;
  NSMutableArray *_didCompleteBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addTransactionWillBeginBlock:(id /* block */)block;
- (void)addTransactionDidBeginBlock:(id /* block */)block;
- (void)addTransactionDidFinishWorkBlock:(id /* block */)block;
- (void)addTransactionDidCompleteBlock:(id /* block */)block;
- (void)transactionWillBegin:(id)begin;
- (void)transactionDidBegin:(id)begin;
- (void)transactionDidFinishWork:(id)work;
- (void)transactionDidComplete:(id)complete;
@end

#endif /* BSTransactionBlockObserver_h */