//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICandidateLine_h
#define TUICandidateLine_h
@import Foundation;

#include "UICollectionReusableView.h"

@protocol TUICandidateViewStyle;

@interface TUICandidateLine : UICollectionReusableView

@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
@end

#endif /* TUICandidateLine_h */