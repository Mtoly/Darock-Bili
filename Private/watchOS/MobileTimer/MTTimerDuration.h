//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTTimerDuration_h
#define MTTimerDuration_h
@import Foundation;

#include "MTSound.h"
#include "NAEquatable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface MTTimerDuration : NSObject<NAEquatable, NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSDate *lastModified;
@property (retain, nonatomic) MTSound *sound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTitle:(id)title duration:(double)duration;
- (id)initWithTitle:(id)title duration:(double)duration sound:(id)sound;
- (id)initWithTitle:(id)title duration:(double)duration sound:(id)sound lastModified:(id)modified;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToDuration:(id)duration;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)hashString;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MTTimerDuration_h */