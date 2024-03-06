//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewRowAction_h
#define UITableViewRowAction_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIColor.h"
#include "UIVisualEffect.h"

@class NSString;

@interface UITableViewRowAction : NSObject<NSCopying>

@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffect *backgroundEffect;

/* class methods */
+ (id)rowActionWithStyle:(long long)style title:(id)title handler:(id /* block */)handler;

/* instance methods */
- (id)_initWithStyle:(long long)style title:(id)title handler:(id /* block */)handler;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_button;
- (void)_setButton:(id)button;
- (id /* block */)_handler;
@end

#endif /* UITableViewRowAction_h */