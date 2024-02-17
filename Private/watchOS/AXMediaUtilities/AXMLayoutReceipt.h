//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMLayoutReceipt_h
#define AXMLayoutReceipt_h
@import Foundation;

#include "AXMLayoutItem.h"

@class NSMutableArray;

@interface AXMLayoutReceipt : AXMLayoutItem {
  /* instance variables */
  NSMutableArray *_rows;
}

/* class methods */
+ (id)region:(id)region;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;
- (void)addRow:(id)row;
- (id)firstLine;
- (id)rows;
@end

#endif /* AXMLayoutReceipt_h */