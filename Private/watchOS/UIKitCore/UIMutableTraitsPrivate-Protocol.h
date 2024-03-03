//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMutableTraitsPrivate_Protocol_h
#define UIMutableTraitsPrivate_Protocol_h
@import Foundation;

@protocol UIMutableTraitsPrivate <UIMutableTraits>

@property (nonatomic) double _typesettingLanguageAwareLineHeightRatio;

/* instance methods */
- (void)setNSUIntegerValue:(unsigned long long)value forTrait:(Class)trait;
- (unsigned long long)valueForNSUIntegerTrait:(Class)trait;
- (void)_setTypesettingLanguageAwareLineHeightRatio:(double)ratio;
@end

#endif /* UIMutableTraitsPrivate_Protocol_h */