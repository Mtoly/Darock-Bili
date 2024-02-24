//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNFetchAppShortcutParametersConnectionOperation_h
#define LNFetchAppShortcutParametersConnectionOperation_h
@import Foundation;

#include "LNInterfaceConnectionOperation.h"

@class NSArray;

@interface LNFetchAppShortcutParametersConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *appShortcutSubstitutions;
@property (retain, nonatomic) NSArray *spans;
@property (retain, nonatomic) NSArray *parameterPresentationSubstitutions;

/* instance methods */
- (id)initWithConnectionInterface:(id)interface queue:(id)queue completionHandler:(id /* block */)handler;
- (void)start;
- (void)finishWithError:(id)error;
@end

#endif /* LNFetchAppShortcutParametersConnectionOperation_h */