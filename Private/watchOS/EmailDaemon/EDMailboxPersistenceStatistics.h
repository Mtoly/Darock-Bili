//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDMailboxPersistenceStatistics_h
#define EDMailboxPersistenceStatistics_h
@import Foundation;

@class NSDictionary, NSString;

@interface EDMailboxPersistenceStatistics : NSObject

@property (readonly, nonatomic) long long messagesInLargestMailbox;
@property (readonly, nonatomic) long long messagesInSecondLargestMailbox;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerMailbox;
@property (readonly, retain, nonatomic) NSDictionary *mailboxesPerAccount;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerAccount;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerInbox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *redactedDescription;

/* instance methods */
- (id)initWithMessagesInLargestMailbox:(long long)mailbox messagesInSecondLargestMailbox:(long long)mailbox messagesPerMailbox:(id)mailbox mailboxesPerAccount:(id)account messagesPerAccount:(id)account messagesPerInbox:(id)inbox;
@end

#endif /* EDMailboxPersistenceStatistics_h */