//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef _CUIThemeFacetCacheKey_h
#define _CUIThemeFacetCacheKey_h
@import Foundation;

@interface _CUIThemeFacetCacheKey : NSObject {
  /* instance variables */
  struct _renditionkeytoken { unsigned short identifier; unsigned short value; } keyList[22];
  long long themeIndex;
  unsigned long long hashPrecalc;
}

/* instance methods */
- (unsigned long long)hash64;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)list themeIndex:(long long)index;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _CUIThemeFacetCacheKey_h */