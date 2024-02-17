//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSharedSummaryCloudSyncManagerServerInterface_Protocol_h
#define HKSharedSummaryCloudSyncManagerServerInterface_Protocol_h
@import Foundation;

@protocol HKSharedSummaryCloudSyncManagerServerInterface <NSObject>
/* instance methods */
- (void)remote_fetchAccountInfoWithCompletion:(id /* block */)completion;
- (void)remote_pushWithCompletion:(id /* block */)completion;
- (void)remote_pullWithCompletion:(id /* block */)completion;
@end

#endif /* HKSharedSummaryCloudSyncManagerServerInterface_Protocol_h */