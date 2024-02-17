//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKStaticSyncControlServer_Protocol_h
#define HKStaticSyncControlServer_Protocol_h
@import Foundation;

@protocol HKStaticSyncControlServer <NSObject>
/* instance methods */
- (id)remote_runStaticSyncExportWithOptions:(unsigned long long)options storeIdentifier:(id)identifier URL:(id)url batchSize:(unsigned long long)size completion:(id /* block */)completion;
- (id)remote_runStaticSyncImportWithOptions:(unsigned long long)options storeIdentifier:(id)identifier URL:(id)url completion:(id /* block */)completion;
@end

#endif /* HKStaticSyncControlServer_Protocol_h */