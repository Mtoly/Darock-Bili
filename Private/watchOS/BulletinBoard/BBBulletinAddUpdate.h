//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBBulletinAddUpdate_h
#define BBBulletinAddUpdate_h
@import Foundation;

#include "BBBulletinUpdate.h"

@interface BBBulletinAddUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldPlayLightsAndSirens;

/* class methods */
+ (id)updateWithBulletin:(id)bulletin feeds:(unsigned long long)feeds shouldPlayLightsAndSirens:(BOOL)sirens;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBulletin:(id)bulletin feeds:(unsigned long long)feeds shouldPlayLightsAndSirens:(BOOL)sirens;
- (id)typeDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BBBulletinAddUpdate_h */