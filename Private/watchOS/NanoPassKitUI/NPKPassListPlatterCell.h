//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassListPlatterCell_h
#define NPKPassListPlatterCell_h
@import Foundation;

#include "PUICPlatterCell.h"
#include "NPKAlphaChangeObservable-Protocol.h"
#include "NPKPassView.h"

@class NSString, PKPass;

@interface NPKPassListPlatterCell : PUICPlatterCell<NPKAlphaChangeObservable>

@property (retain, nonatomic) NPKPassView *passView;
@property (retain, nonatomic) PKPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForCellWithPass:(id)pass;
+ (Class)passViewClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)attributes;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
- (void)setAlpha:(double)alpha;
- (void)_notifyAlphaValueDidChangeInView:(id)view alpha:(double)alpha;
- (void)view:(id)view didChangeAlpha:(double)alpha;
@end

#endif /* NPKPassListPlatterCell_h */