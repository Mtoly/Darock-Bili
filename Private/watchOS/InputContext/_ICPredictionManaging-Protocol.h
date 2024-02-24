//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef _ICPredictionManaging_Protocol_h
#define _ICPredictionManaging_Protocol_h
@import Foundation;

@protocol _ICPredictionManaging <NSObject>
/* instance methods */
- (id)searchWithTriggers:(id)triggers application:(id)application recipient:(id)recipient localeIdentifier:(id)identifier timeoutInMilliseconds:(int)milliseconds resultLimit:(int)limit error:(id *)error;
- (id)searchWithTriggers:(id)triggers application:(id)application recipient:(id)recipient localeIdentifier:(id)identifier isResponseDenyListed:(BOOL)listed shouldDisableAutoCaps:(BOOL)caps timeoutInMilliseconds:(int)milliseconds resultLimit:(int)limit error:(id *)error;
- (id)lastCachedResultWithInitialCharacters:(id)characters;
- (void)predictedItemSelected:(id)selected;
- (void)reset;
- (id)searchForMeCardRegions;
- (id)searchForMeCardEmailAddresses;
- (void)warmUp;
- (void)hibernate;
- (void)providePredictionFeedbackForString:(id)string type:(unsigned char)type style:(unsigned char)style;
- (void)provideFeedbackForString:(id)string type:(unsigned char)type style:(unsigned char)style;
- (void)propogateMetrics:(id)metrics data:(id)data;
@end

#endif /* _ICPredictionManaging_Protocol_h */