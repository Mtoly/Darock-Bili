//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFChangeCaseIntentHandler_h
#define WFChangeCaseIntentHandler_h
@import Foundation;

#include "WFChangeCaseIntentHandling-Protocol.h"

@class NSString;

@interface WFChangeCaseIntentHandler : NSObject<WFChangeCaseIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resolveTextForChangeCase:(id)case withCompletion:(id /* block */)completion;
- (void)resolveTypeForChangeCase:(id)case withCompletion:(id /* block */)completion;
- (void)handleChangeCase:(id)case completion:(id /* block */)completion;
- (id)stringByApplyingSentenceCaseToString:(id)string withLocale:(id)locale;
- (id)stringByApplyingTitleCaseToString:(id)string;
- (id)stringByApplyingAlternatingCaseToString:(id)string;
@end

#endif /* WFChangeCaseIntentHandler_h */