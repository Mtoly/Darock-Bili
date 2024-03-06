//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIReferenceManagedDirReaderLock_h
#define TRIReferenceManagedDirReaderLock_h
@import Foundation;

@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
  /* instance variables */
  NSString *_dir;
  _PASLock *_lock;
}

/* instance methods */
- (id)init;
- (id)initWithDir:(id)dir;
- (void)unlock;
- (void)dealloc;
@end

#endif /* TRIReferenceManagedDirReaderLock_h */