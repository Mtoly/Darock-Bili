//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSEConsistencyCheckResultCollector_h
#define PKSEConsistencyCheckResultCollector_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface PKSEConsistencyCheckResultCollector : NSObject {
  /* instance variables */
  NSMutableDictionary *_resultSummary;
  BOOL _sendCleanupReasons;
}

@property (nonatomic) BOOL addCleanupActionsToResultsSummary;
@property (readonly, nonatomic) long long cleanupActions;
@property (readonly, nonatomic) NSArray *requestedActions;
@property (readonly, nonatomic) NSDictionary *resultsSummary;

/* instance methods */
- (id)init;
- (void)addCleanupActions:(long long)actions cleanupReason:(id)reason forDeviceCredential:(id)credential passCredential:(id)credential;
- (void)addCleanupActions:(long long)actions;
@end

#endif /* PKSEConsistencyCheckResultCollector_h */