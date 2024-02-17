//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PREExperimentResolver_h
#define PREExperimentResolver_h
@import Foundation;

#include "PREExperimentResolverProtocol-Protocol.h"

@class NSDictionary, NSString, TRIClient, _PASLock;

@interface PREExperimentResolver : NSObject<PREExperimentResolverProtocol> {
  /* instance variables */
  _PASLock *_guardedSmartReplyConfig;
  TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)sharedQueue;

/* instance methods */
- (id)init;
- (void)warmupForLocale:(id)locale;
- (id)getResponseSuggestionsExperimentConfig:(id)config shouldDownloadAssets:(BOOL)assets;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)config;
@end

#endif /* PREExperimentResolver_h */