//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3ClientImportSessionXPCInterface_Protocol_h
#define ML3ClientImportSessionXPCInterface_Protocol_h
@import Foundation;

@protocol ML3ClientImportSessionXPCInterface <NSObject>
@optional
/* instance methods */
- (void)sessionFailedToAddItem:(id)item completion:(id /* block */)completion;
- (void)sessionFailedToUpdateItem:(id)item completion:(id /* block */)completion;
- (void)sessionFailedToRemoveItem:(id)item completion:(id /* block */)completion;
- (void)sessionDidUpdateProgress:(float)progress;
@end

#endif /* ML3ClientImportSessionXPCInterface_Protocol_h */