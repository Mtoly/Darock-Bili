//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinAlertItemDismissWrapper_h
#define CSLBulletinAlertItemDismissWrapper_h
@import Foundation;

#include "CSLBulletinAlertItem.h"

@interface CSLBulletinAlertItemDismissWrapper : NSObject

@property (retain, nonatomic) CSLBulletinAlertItem *item;
@property (nonatomic) unsigned long long reason;

/* instance methods */
- (id)initWithItem:(id)item dismissReason:(unsigned long long)reason;
@end

#endif /* CSLBulletinAlertItemDismissWrapper_h */