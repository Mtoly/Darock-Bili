//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICellAccessoryPopUpMenu_h
#define UICellAccessoryPopUpMenu_h
@import Foundation;

#include "UICellAccessory.h"
#include "UIMenu.h"

@interface UICellAccessoryPopUpMenu : UICellAccessory

@property (readonly, nonatomic) UIMenu *_internalMenu;
@property (readonly, copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) id /* block */ selectedElementDidChangeHandler;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMenu:(id)menu;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)header;
- (id)_identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)from;
- (unsigned long long)hash;
@end

#endif /* UICellAccessoryPopUpMenu_h */