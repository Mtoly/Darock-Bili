//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIDiscreteSizingLabel_h
#define FIUIDiscreteSizingLabel_h
@import Foundation;

#include "UILabel.h"

@protocol FIUIDiscreteSizingLabelDelegate;

@interface FIUIDiscreteSizingLabel : UILabel

@property (weak, nonatomic) NSObject<FIUIDiscreteSizingLabelDelegate> *delegate;

/* instance methods */
- (void)setText:(id)text;
@end

#endif /* FIUIDiscreteSizingLabel_h */