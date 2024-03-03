//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterDashboardMessagesRow_h
#define PKPayLaterDashboardMessagesRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKDashboardMessagesViewDelegate-Protocol.h"
#include "PKPayLaterCollectionViewRow-Protocol.h"

@class NSOrderedSet, NSString;

@interface PKPayLaterDashboardMessagesRow : NSObject<PKPayLaterCollectionViewRow> {
  /* instance variables */
  NSOrderedSet *_messages;
  long long _currentMessageIndex;
  NSObject<PKDashboardMessagesViewDelegate> *_messagesViewDelegate;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessages:(id)messages currentMessageIndex:(long long)index messagesViewDelegate:(id)delegate;
- (Class)cellClass;
- (void)configureCell:(id)cell;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKPayLaterDashboardMessagesRow_h */