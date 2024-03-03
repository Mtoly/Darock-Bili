//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransactionDetailPlatterCell_h
#define NPKTransactionDetailPlatterCell_h
@import Foundation;

#include "NPKListDetailAccessoryImagePlatterCell.h"

@class NSAttributedString, NSString;

@interface NPKTransactionDetailPlatterCell : NPKListDetailAccessoryImagePlatterCell

@property (retain, nonatomic) NSString *transactionIdentifier;
@property (retain, nonatomic) NSString *primaryString;
@property (retain, nonatomic) NSString *secondaryString;
@property (retain, nonatomic) NSString *tertiaryString;
@property (retain, nonatomic) NSAttributedString *transactionValueAttributedString;
@property (retain, nonatomic) NSString *rewardsValueString;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)setPrimaryString:(id)string secondaryString:(id)string tertiaryString:(id)string transactionValueAttributedString:(id)string rewardsValueString:(id)string;
- (void)_updateTransactionLabels;
@end

#endif /* NPKTransactionDetailPlatterCell_h */