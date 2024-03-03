//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSCountWindowState_h
#define BPSCountWindowState_h
@import Foundation;

#include "BPSWindowState.h"

@interface BPSCountWindowState : BPSWindowState

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long currentCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity currentCount:(unsigned long long)count identifier:(id)identifier aggregate:(id)aggregate completed:(BOOL)completed;
- (id)metadata;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BPSCountWindowState_h */