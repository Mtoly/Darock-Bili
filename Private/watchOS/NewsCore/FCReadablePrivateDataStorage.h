//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCReadablePrivateDataStorage_h
#define FCReadablePrivateDataStorage_h
@import Foundation;

#include "FCFileCoordinatedTodayDropbox.h"
#include "FCFileCoordinatedTodayPrivateDataTransactionQueue.h"
#include "FCReadablePrivateDataStorage-Protocol.h"

@class NSString;

@interface FCReadablePrivateDataStorage : NSObject<FCReadablePrivateDataStorage>

@property (retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox;
@property (retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDropbox:(id)dropbox transactionQueue:(id)queue;
- (void)readPrivateDataWithAccessor:(id /* block */)accessor;
@end

#endif /* FCReadablePrivateDataStorage_h */