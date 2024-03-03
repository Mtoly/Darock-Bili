//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFListItem_h
#define WFListItem_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, WFImage;

@interface WFListItem : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFImage *image;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle image:(id)image;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFListItem_h */