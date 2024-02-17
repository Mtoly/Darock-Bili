//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMFetchControllerInterface_Protocol_h
#define EMFetchControllerInterface_Protocol_h
@import Foundation;

@protocol EMFetchControllerInterface <NSObject>
/* instance methods */
- (void)performFetchForOTC;
- (void)performFetchOfType:(int)type;
- (void)performFetchOfType:(int)type accountIds:(id)ids;
- (void)performFetchOfType:(int)type mailboxObjectIds:(id)ids;
- (void)performFetchOfType:(int)type mailboxName:(id)name completion:(id /* block */)completion;
- (void)downloadMessageBodiesWithCompletion:(id /* block */)completion;
- (void)resetPushStateWithCompletion:(id /* block */)completion;
- (void)setSuppressedContexts:(id)contexts;
- (id)diagnosticInformation;
@end

#endif /* EMFetchControllerInterface_Protocol_h */