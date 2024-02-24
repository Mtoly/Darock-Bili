//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageViewPendingSymbolContentTransition_h
#define _UIImageViewPendingSymbolContentTransition_h
@import Foundation;

#include "UIImage.h"

@class NSSymbolContentTransition, NSSymbolEffectOptions;

@interface _UIImageViewPendingSymbolContentTransition : NSObject

@property (readonly, nonatomic) NSSymbolContentTransition *symbolContentTransition;
@property (readonly, nonatomic) NSSymbolEffectOptions *options;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) UIImage *sourceSymbolImage;
@property (readonly, nonatomic) UIImage *targetSymbolImage;

/* class methods */
+ (id)transitionWithTransition:(id)transition sourceSymbolImage:(id)image targetSymbolImage:(id)image options:(id)options completion:(id /* block */)completion;

/* instance methods */
@end

#endif /* _UIImageViewPendingSymbolContentTransition_h */