//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLNotificationListTableViewCellReuseQueue_h
#define CSLNotificationListTableViewCellReuseQueue_h
@import Foundation;

@class NSMutableDictionary;

@interface CSLNotificationListTableViewCellReuseQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *cellsByReuseIdentifier;

/* instance methods */
- (id)init;
- (void)enqueueCell:(id)cell forReuseIdentifier:(id)identifier;
- (id)dequeueReusableCellForReuseIdentifier:(id)identifier;
@end

#endif /* CSLNotificationListTableViewCellReuseQueue_h */