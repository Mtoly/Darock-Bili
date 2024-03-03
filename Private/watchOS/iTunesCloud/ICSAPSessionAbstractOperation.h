//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICSAPSessionAbstractOperation_h
#define ICSAPSessionAbstractOperation_h
@import Foundation;

#include "ICAsyncOperation.h"
#include "ICSAPSession.h"

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession;

/* instance methods */
- (void)execute;
- (void)executeWithSAPContext:(id)sapcontext;
- (void)finishWithSAPContextPreparationError:(id)error;
- (void)finishWithError:(id)error;
@end

#endif /* ICSAPSessionAbstractOperation_h */