//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMWeakReference_h
#define IMWeakReference_h
@import Foundation;

@interface IMWeakReference : NSObject {
  /* instance variables */
  id _object;
  unsigned long long _objectAddress;
}

/* class methods */
+ (id)weakRefWithObject:(id)object;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyObject;
- (id)initRefWithObject:(id)object;
- (id)object;
@end

#endif /* IMWeakReference_h */