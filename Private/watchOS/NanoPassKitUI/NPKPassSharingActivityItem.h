//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassSharingActivityItem_h
#define NPKPassSharingActivityItem_h
@import Foundation;

#include "UIActivityItemSource-Protocol.h"
#include "UIActivityItemSourceAttachment-Protocol.h"

@class NSString, PKPass;

@interface NPKPassSharingActivityItem : NSObject<UIActivityItemSource, UIActivityItemSourceAttachment> {
  /* instance variables */
  PKPass *_pass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (id)activityViewController:(id)controller subjectForActivityType:(id)type;
- (id)activityViewController:(id)controller dataTypeIdentifierForActivityType:(id)type;
- (id)activityViewControllerLinkMetadata:(id)metadata;
- (id)activityViewController:(id)controller attachmentNameForActivityType:(id)type;
- (id)_lpImageForPass:(id)pass;
@end

#endif /* NPKPassSharingActivityItem_h */