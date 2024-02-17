//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFSubtitleCell_h
#define NPRFSubtitleCell_h
@import Foundation;

#include "NPRFTableCell.h"

@interface NPRFSubtitleCell : NPRFTableCell

@property (nonatomic) BOOL addedSubtitleObserver;

/* class methods */
+ (long long)cellStyle;
+ (id)subtitleObservingKeyPath;

/* instance methods */
- (void)willMoveToSuperview:(id)superview;
- (void)setContentsFromSpecifier:(id)specifier controller:(id)controller;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)updateDetailTextForCurrentValue;
@end

#endif /* NPRFSubtitleCell_h */