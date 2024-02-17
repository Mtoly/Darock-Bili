//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardMessageRowItem_h
#define PKDashboardMessageRowItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKDashboardMessagesViewDelegate-Protocol.h"
#include "PKIdentifiable-Protocol.h"

@class NSOrderedSet, NSString;

@interface PKDashboardMessageRowItem : NSObject<PKIdentifiable>

@property (retain, nonatomic) NSOrderedSet *messages;
@property (nonatomic) long long currentMessageIndex;
@property (readonly, weak, nonatomic) NSObject<PKDashboardMessagesViewDelegate> *messagesViewDelegate;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessages:(id)messages currentMessageIndex:(long long)index messagesViewDelegate:(id)delegate;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKDashboardMessageRowItem_h */