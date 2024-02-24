//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMChatContext_h
#define IMChatContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSUUID;

@interface IMChatContext : NSObject<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) long long filterCategory;
@property (readonly, nonatomic) BOOL spam;
@property (readonly, nonatomic) BOOL sendersUnknown;
@property (readonly, nonatomic) BOOL responded;
@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (readonly, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;

/* instance methods */
- (id)_copyWithClass:(Class)class zone:(struct _NSZone *)zone;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isSpam;
- (BOOL)areSendersUnknown;
- (BOOL)hasResponded;
@end

#endif /* IMChatContext_h */