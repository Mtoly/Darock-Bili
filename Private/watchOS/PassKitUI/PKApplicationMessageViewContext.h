//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplicationMessageViewContext_h
#define PKApplicationMessageViewContext_h
@import Foundation;

#include "PKApplicationMessageView.h"

@class PKApplicationMessageNode;

@interface PKApplicationMessageViewContext : NSObject {
  /* instance variables */
  BOOL _userExpanded;
  PKApplicationMessageNode *_node;
  PKApplicationMessageView *_view;
  unsigned long long _numberOfAdditionalSubviews;
}

/* instance methods */
- (id)init;
@end

#endif /* PKApplicationMessageViewContext_h */