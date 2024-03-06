//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 148.0.0.0.0
//
#ifndef PTButtonRow_h
#define PTButtonRow_h
@import Foundation;

#include "PTSRow.h"

@class NSString;

@interface PTButtonRow : PTSRow

@property (copy, nonatomic) NSString *outletKeyPath;

/* class methods */
+ (id)rowWithTitle:(id)title action:(id)action;
+ (id)rowWithTitle:(id)title outletKeyPath:(id)path;
+ (id)restoreDefaultSettingsButton;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)outletKeyPath:(id)path;
- (id)_defaultAction;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PTButtonRow_h */