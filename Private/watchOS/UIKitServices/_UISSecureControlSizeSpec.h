//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISSecureControlSizeSpec_h
#define _UISSecureControlSizeSpec_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UISSlotStyle.h"
#include "_UISSecureControlCategory.h"

@class NSString;

@interface _UISSecureControlSizeSpec : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_localization;
  union { unsigned short all; struct { unsigned int x :1 arrangeVertically; unsigned int x :1 accessibilityContrast; unsigned int x :3 displayScale; unsigned int x :1 layoutDirection; unsigned int x :1 legibilityWeight; unsigned int x :4 preferredContentSizeCategory; unsigned int x :3 userInterfaceIdiom; } x0; } _fields;
}

@property (readonly, nonatomic) _UISSecureControlCategory *category;
@property (readonly, nonatomic) UISSlotStyle *style;
@property (readonly, nonatomic) BOOL arrangeVertically;

/* class methods */
+ (id)specWithStyle:(id)style tag:(id)tag;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCategory:(id)category arrangeVertically:(BOOL)vertically accessibilityContrast:(unsigned long long)contrast displayScale:(unsigned char)scale layoutDirection:(unsigned long long)direction legibilityWeight:(unsigned long long)weight localization:(id)localization preferredContentSizeCategory:(unsigned long long)category userInterfaceIdiom:(unsigned long long)idiom;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEquivalentToStyle:(id)style tag:(id)tag;
@end

#endif /* _UISSecureControlSizeSpec_h */