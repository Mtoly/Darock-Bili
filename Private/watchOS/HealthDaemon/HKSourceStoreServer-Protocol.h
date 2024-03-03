//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSourceStoreServer_Protocol_h
#define HKSourceStoreServer_Protocol_h
@import Foundation;

@protocol HKSourceStoreServer <NSObject>
/* instance methods */
- (void)remote_fetchAllSourcesWithCompletion:(id /* block */)completion;
- (void)remote_fetchHasSampleWithBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)remote_deleteSourceWithBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)remote_fetchOrderedSourcesForObjectType:(id)type completion:(id /* block */)completion;
- (void)remote_updateOrderedSources:(id)sources forObjectType:(id)type completion:(id /* block */)completion;
@end

#endif /* HKSourceStoreServer_Protocol_h */