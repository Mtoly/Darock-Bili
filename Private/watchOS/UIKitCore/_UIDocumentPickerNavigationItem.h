//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDocumentPickerNavigationItem_h
#define _UIDocumentPickerNavigationItem_h
@import Foundation;

#include "UINavigationItem.h"

@interface _UIDocumentPickerNavigationItem : UINavigationItem
/* instance methods */
- (id)initWithTitle:(id)title rightBarButtonItem:(id)item;
- (void)setLeftBarButtonItems:(id)items animated:(BOOL)animated;
- (void)setRightBarButtonItems:(id)items animated:(BOOL)animated;
- (void)setLeftBarButtonItem:(id)item animated:(BOOL)animated;
- (void)setRightBarButtonItem:(id)item animated:(BOOL)animated;
@end

#endif /* _UIDocumentPickerNavigationItem_h */