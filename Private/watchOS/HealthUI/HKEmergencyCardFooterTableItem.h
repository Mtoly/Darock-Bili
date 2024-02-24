//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardFooterTableItem_h
#define HKEmergencyCardFooterTableItem_h
@import Foundation;

#include "HKEmergencyCardTableItem.h"
#include "HKEmergencyCardFooterCell.h"

@class NSAttributedString;

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem {
  /* instance variables */
  HKEmergencyCardFooterCell *_cell;
}

@property (retain, nonatomic) NSAttributedString *attributedTitleForFooter;
@property (copy, nonatomic) id /* block */ shouldInteractWithURLBlock;

/* instance methods */
- (id)initInEditMode:(BOOL)mode;
- (BOOL)hasPresentableData;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (id)_cell;
- (id)tableView:(id)view cellForRowAtIndex:(long long)index;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
@end

#endif /* HKEmergencyCardFooterTableItem_h */