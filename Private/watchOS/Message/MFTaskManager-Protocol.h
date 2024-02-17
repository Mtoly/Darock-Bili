//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFTaskManager_Protocol_h
#define MFTaskManager_Protocol_h
@import Foundation;

@protocol MFTaskManager 
/* instance methods */
- (void)fetchNow:(int)now;
- (void)fetchNow:(int)now withMailboxes:(id)mailboxes completion:(id /* block */)completion;
- (void)closeAllConnections;
- (void)startBackFillingMessageBodyDownloadWithRequest:(id)request;
- (void)stopBackFillingMessageBodyDownload;
- (void)checkForNewLocalActions;
- (void)addLocalAction:(id)action;
- (BOOL)createMailbox:(id)mailbox;
- (BOOL)deleteMailbox:(id)mailbox;
- (BOOL)renameMailbox:(id)mailbox toMailbox:(id)mailbox;
- (void)localMailboxesDidChange;
- (id)fetchSeparatorChar;
- (void)test_tearDown;
@end

#endif /* MFTaskManager_Protocol_h */