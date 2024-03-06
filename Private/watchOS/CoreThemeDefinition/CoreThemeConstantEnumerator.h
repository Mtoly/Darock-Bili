//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef CoreThemeConstantEnumerator_h
#define CoreThemeConstantEnumerator_h
@import Foundation;

@interface CoreThemeConstantEnumerator : NSObject {
  /* instance variables */
  void * _globalListPointer;
  long long _listIndex;
  long long _indexOfLastEntry;
  BOOL _isPastLastEntry;
}

/* class methods */
+ (id)enumeratorForGlobalListAtAddress:(void *)address;

/* instance methods */
- (id)initWithGlobalListAtAddress:(void *)address;
- (void)_moveToIndexOfLastEntry;
- (long long)constantCount;
- (id)currentConstantHelper;
- (id)nextConstantHelper;
- (id)previousConstantHelper;
- (id)firstConstantHelper;
- (id)lastConstantHelper;
@end

#endif /* CoreThemeConstantEnumerator_h */