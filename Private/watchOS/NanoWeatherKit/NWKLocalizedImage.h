//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKLocalizedImage_h
#define NWKLocalizedImage_h
@import Foundation;

@interface NWKLocalizedImage : NSObject
/* class methods */
+ (id)imageNamed:(id)named fromBundle:(id)bundle withCompatibleWithTraitCollection:(id)collection;
+ (id)systemImageNamed:(id)named useLarge:(BOOL)large;
+ (id)systemImageNamed:(id)named size:(float)size;
@end

#endif /* NWKLocalizedImage_h */