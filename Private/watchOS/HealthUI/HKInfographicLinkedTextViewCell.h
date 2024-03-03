//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInfographicLinkedTextViewCell_h
#define HKInfographicLinkedTextViewCell_h
@import Foundation;

#include "HKInfographicTextViewCell.h"

@interface HKInfographicLinkedTextViewCell : HKInfographicTextViewCell

@property (copy, nonatomic) id /* block */ didTapLinkedText;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)_descriptionTextColor;
- (void)didTapDescriptionLabel;
@end

#endif /* HKInfographicLinkedTextViewCell_h */